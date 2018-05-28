<?php

/**
 * @file
 * Morphbox page callbacks for the morphsearch module.
 */


/**
 * Form builder to list vocabularies.
 *
 * @ingroup forms
 * @see morphsearch_morphbox_submit()
 * @see theme_morphsearch_morphbox()
 */
function morphsearch_morphbox($form) {
  $form['#tree'] = TRUE;

  $all = array();
  $all[0] = array();
  $noTermsMax = 0;

  // get all vocabularies
  $vocabularies = taxonomy_get_vocabularies();
  foreach ($vocabularies as $vocabulary) {

    // filter morphological box taxonomy vocabularies (prefix 'tax_morph_')
    if (0 === strpos($vocabulary->machine_name, 'tax_morph_')) {
      $all[0][$vocabulary->vid] = array('data' => check_plain($vocabulary->name), 'id' => $vocabulary->vid);

      $termsTree = taxonomy_get_tree($vocabulary->vid);

      $noTermsMax = count($termsTree) > $noTermsMax ? count($termsTree) : $noTermsMax;
    }
  }


  // build matrix with one column per vocabulary
  foreach ($all[0] as $vid => $vocName) {
    for ($i = 1; $i <= $noTermsMax; $i++) {
      $termsTree = taxonomy_get_tree($vid);
      $all[$i][] = isset($termsTree[$i - 1]->name) ? check_plain($termsTree[$i - 1]->name) : '';
    }
  }

  $header = $all[0];
  unset($all[0]);
  $rows = $all;
  $tableHtml = theme('table', array('header' => $header, 'rows' => $all));



  $form['table'] = array(
    '#markup' => $tableHtml,
  );

  drupal_add_js("$('th').click(function() {
    var index = $(this).index() + 1;
	$('table tr td:nth-child(' + index + ')').toggleClass('highlight');
	$('table tr th:nth-child(' + index + ')').toggleClass('highlight');
});", array(
    'type' => 'inline',
    'scope' => 'footer',
    'weight' => 5,
  ));

  drupal_add_css(".highlight {background-color: lightgreen;}", array(
    'type' => 'inline',
    'scope' => 'footer',
    'weight' => 5,
  ));

  return $form;
}

/**
 * Submit handler for morphsearch morphbox. Updates changed vocabularies and adds new vocabularies.
 *
 * @see morphsearch_morphbox()
 */
function morphsearch_morphbox_submit($form, &$form_state) {
  foreach ($form_state['values'] as $vid => $vocabulary) {
    if (is_numeric($vid) && $form[$vid]['#vocabulary']->weight != $form_state['values'][$vid]['weight']) {
      $form[$vid]['#vocabulary']->weight = $form_state['values'][$vid]['weight'];
      taxonomy_vocabulary_save($form[$vid]['#vocabulary']);
    }
  }
  drupal_set_message(t('The vocabulary has been saved.'));
}


/**
 * Returns a dynamic form to create and update whole vocabularies with terms.
 *
 * @param $form
 * @param $form_state
 * @param $vocabulary_id
 *
 * @return array
 *   finished $form
 */
function morphsearch_ajax_edit_vocabulary($form, &$form_state, $vocabulary_id) {

  if (isset($vocabulary_id)) {
    $voc = taxonomy_vocabulary_load($vocabulary_id);
  }

  $form['vocabulary_name'] = [
    '#type' => 'textfield',
    '#title' => t('Vocabulary name'),
    '#weight' => 0,
    '#default_value' => $voc !== FALSE ? check_plain($voc->name) : '',
  ];

  $form['vocabulary_vid'] = [
    '#type' => 'hidden',
    '#value' => $voc !== FALSE ? $voc->vid : -1,
  ];

  $form['terms_container'] = [
    '#type' => 'container',
    '#weight' => 80,
    '#tree' => TRUE,
    // Set up the wrapper so that AJAX will be able to replace the fieldset.
    '#prefix' => '<div id="js-ajax-elements-wrapper">',
    '#suffix' => '</div>',
  ];

  if (isset($form_state['no_terms'])) {
    // user changed number of terms (add or delete)
    $form_state['no_terms'] = $form_state['no_terms'];
    $termTree = taxonomy_get_tree($voc->vid);
  } else if ($voc !== FALSE) {
    // first call to edit a vocabulary, load all existing terms for editing
    $termTree = taxonomy_get_tree($voc->vid);
    $form_state['no_terms'] = empty($termTree) ? range(0,2) : range(0, count($termTree) - 1);
  } else {
    // add a new vocabulary, start with 3 blank term fields
    $form_state['no_terms'] = range(0, 2);
  }

  $term_count = $form_state['no_terms'];
  foreach ($term_count as $key => $delta) {

    $form['terms_container'][$delta] = [
      '#type' => 'container',
      '#attributes' => [
        'class' => ['container-inline'],
      ],
      '#tree' => TRUE,
    ];

    $form['terms_container'][$delta]['name'] = [
      '#type' => 'textfield',
      #'#title' => t(''),
      '#size' => 60,
      '#default_value' => isset($termTree[$key]) ? check_plain($termTree[$key]->name) : '',
    ];

    $form['terms_container'][$delta]['tid'] = [
      '#type' => 'hidden',
      '#value' => isset($termTree[$key]) ? $termTree[$key]->tid : -1,
    ];


    $asd = 0;

    $form['terms_container'][$delta]['remove_term'] = [
      '#type' => 'submit',
      '#value' => t('-'),
      '#submit' => ['morphsearch_ajax_edit_vocabulary_remove'],
      '#ajax' => [
        'callback' => 'morphsearch_ajax_edit_vocabulary_remove_callback',
        'wrapper' => 'js-ajax-elements-wrapper',
      ],
      '#weight' => -1,
      '#attributes' => [
        'class' => ['button-small'],
      ],
      '#name' => 'remove_term_' . $delta,
    ];
  }

  $form['terms_container']['add_term'] = [
    '#type' => 'submit',
    '#value' => t('Add one more term'),
    '#submit' => ['morphsearch_ajax_edit_vocabulary_add_term'],
    '#ajax' => [
      'callback' => 'morphsearch_ajax_edit_vocabulary_add_term_callback',
      'wrapper' => 'js-ajax-elements-wrapper',
    ],
    '#weight' => 100,
  ];

  $form['actions'] = array(
    '#type' => 'actions',
    '#weight' => 999,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => ['morphsearch_ajax_edit_vocabulary_save'],
  );

  return $form;
}


/**
 * Dynamically removes a form element and deletes the vocabulary term.
 *
 * @throws \Exception
 */
function morphsearch_ajax_edit_vocabulary_remove($form, &$form_state) {
  $delta_remove = $form_state['triggering_element']['#parents'][1];
  $term = $form_state['values']['terms_container'][$delta_remove];
  taxonomy_term_delete($term['tid']);

  $k = array_search($delta_remove, $form_state['no_terms']);
  unset($form_state['no_terms'][$k]);
  $form_state['no_terms'] = array_values($form_state['no_terms']);

  $form_state['rebuild'] = TRUE;

  #taxonomy_check_vocabulary_hierarchy($form['#vocabulary'], $form_state['values']);
  drupal_set_message(t('Deleted term %name.', array('%name' => $term['name'])));
  watchdog('taxonomy', 'Deleted term %name.', array('%name' => array('%name' => $term['name'])), WATCHDOG_NOTICE);
  cache_clear_all();

  drupal_get_messages();
}

/**
 * AJAX callback after form element has been removed.
 */
function morphsearch_ajax_edit_vocabulary_remove_callback($form, &$form_state) {
  return $form['terms_container'];
}

/**
 * Dynamically adds a form element for a new empty term.
 */
function morphsearch_ajax_edit_vocabulary_add_term($form, &$form_state) {
  $form_state['no_terms'][] = count($form_state['no_terms']) > 0 ? max($form_state['no_terms']) + 1 : 0;

  $form_state['rebuild'] = TRUE;
  drupal_get_messages();
}

/**
 * AJAX callback after form element has been added.
 */
function morphsearch_ajax_edit_vocabulary_add_term_callback($form, $form_state) {
  return $form['terms_container'];

}

/**
 * Creates a new vocabulary or updates an existing one including all terms.
 */
function morphsearch_ajax_edit_vocabulary_save($form, &$form_state) {

  if ($form_state['submit_handlers'][0] === 'morphsearch_ajax_edit_vocabulary_save') {
    $name = $form_state['values']['vocabulary_name'];
    $vid = $form_state['values']['vocabulary_vid'];


    // update existing vocabulary
    $vocabulary = new stdClass();
    if ($vid !== -1) {
      $vocabulary = taxonomy_vocabulary_load($vid);
      $vocabulary->name = $name;
    } else {
      // add new vocabulary
      $vocabulary->name = $name;
      $machineName = preg_replace('/[^a-z0-9]+/', '', strtolower($name));
      $vocabulary->machine_name = 'tax_morph_m_' . substr($machineName,0,28);
    }

    $status = taxonomy_vocabulary_save($vocabulary);
    switch ($status) {
      case SAVED_NEW:
        drupal_set_message(t('Created new vocabulary %name %vid.', array('%name' => $vocabulary->name, '%vid' => $vocabulary->vid)));
        watchdog('taxonomy', 'Created new vocabulary %name.', array('%name' => $vocabulary->name), WATCHDOG_NOTICE, l(t('edit'), 'admin/structure/taxonomy/' . $vocabulary->machine_name . '/edit'));
        break;

      case SAVED_UPDATED:
        drupal_set_message(t('Updated vocabulary %name %vid.', array('%name' => $vocabulary->name, '%vid' => $vocabulary->vid)));
        watchdog('taxonomy', 'Updated vocabulary %name.', array('%name' => $vocabulary->name), WATCHDOG_NOTICE, l(t('edit'), 'admin/structure/taxonomy/' . $vocabulary->machine_name . '/edit'));
        break;
    }



    foreach ($form_state['values']['terms_container'] as $term) {
      $morphTerm = new stdClass();

      if (isset($term['tid'])) {
        // update term
        if ($term['tid'] !== -1) {
          $morphTerm = taxonomy_term_load($term['tid']);
          $morphTerm->name = $term['name'];
          taxonomy_term_save($morphTerm);
        } else {
          // add new term, ignore empty name fields
          if (!empty($term['name'])) {
            $morphTerm->vid = $vocabulary->vid;
            $morphTerm->name = $term['name'];
            taxonomy_term_save($morphTerm);
          }
        }
      }
    }

    $form_state['redirect'] = 'config/morphbox/' . $vocabulary->vid;
  }
}