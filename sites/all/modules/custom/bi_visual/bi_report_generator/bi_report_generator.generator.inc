<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 22.04.18
 * Time: 11:54
 */

function bi_report_generator_generator() {
    $form = drupal_get_form('form_bi_report_generator_select_dimensions');

    $css_path = drupal_get_path('module', 'bi_report_generator') . '/css/bi.css';
    dsm($css_path);
    drupal_add_css($css_path, 'file');



    $build['paragraph'] = array(
        '#prefix' => '<p>',
        '#suffix' => '</p>',
        '#markup' => t('Click on the button to show a ctool modal.')
    );

    ctools_include('ajax');
    ctools_include('modal');

    ctools_modal_add_js();

    //Dieser Snippet ist wichtig für die Groesse des Popups
    $settings['CToolsModal']['modalSize'] = array(
        'type' => 'fixed',
        'width' => 450,
        'height' => 250,
    );

    drupal_add_js($settings, 'setting');

    //Dieser Snippet für das Styling
    $css = 'div.ctools-modal-content .modal-header {
            background-color: #FFF;
            padding: 0 .25em 0 1em;
            }';
    drupal_add_css($css, 'inline');

    $text = t('Show a popup');
    $dest = 'bi_visual/nojs/show/modal';
    $alt = t('Show a popup by clicking here.');

    $link = ctools_modal_text_button($text, $dest, $alt);
    $class = 'bi-modal-style';
    $build['popup_link'] = array(
        '#attributes' => array('class' => $class),
        '#markup' => $link,
    );

    $html = render($build);
    $html = render($form);
    return $html;
}


function form_bi_report_generator_select_dimensions($form, &$form_state) {
    $links = variable_get('bi_dimensions');
    dsm($links);

    $options = array();

    foreach ($links as $link) {
        //dsm($link->name);
        //array_push($options, $link->name);
        $options[$link->name] = $link->name;
    }

    //dsm($options);
    variable_set('bi_visual_form_options', $options);

    //$links = array('a', 'b');


    $form['checkboxes']['dimensions'] = array(
        '#type' => 'checkboxes',
        '#options' => $options,
        '#title' => t('What dimensions you want to analyze?'),
    );

    $form['buttons']['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Submit'),
    );




    return $form;
}

function form_bi_report_generator_select_dimensions_submit($form, &$form_state) {
    //dsm($form_state);
    $selected_dimensions = array_filter($form_state['values']['dimensions']);
    //dsm($selected_dimensions);

    $dimensions = variable_get('bi_visual_form_options');
    //dsm($dimensions);
    $array_keys = array_keys($selected_dimensions);
    //$dimensions = array_values($dimensions);
    //dsm($array_keys);

    variable_set('bi_generator_selection', $array_keys);


    //$bi_dimensions = variable_get('bi_dimensions');
    //dsm($bi_dimensions);

    $keys = array();

    foreach ($array_keys as $array_key) {
        $key = bi_report_generator_search($array_key);
        array_push($keys, $key);
    }

    //dsm($keys);
    $bi_flag = TRUE; //TODO in Adminbereich bringen
    variable_set('bi_flag', $bi_flag);
    variable_set('bi_report_generator_keys', $keys);
    drupal_goto('d3/bi_visual/' . $keys[0]);

    //$dimension_key = array_search($array_keys, $bi_dimensions);
    //dsm($dimension_key);

}

function bi_report_generator_search($array_key) {
    $bi_dimensions = variable_get('bi_dimensions');

    foreach ($bi_dimensions as $bi_dimension) {
        if($bi_dimension->name == $array_key) {
            return $bi_dimension->vid;
        }
    }

    return null;
}

/**
 * Implements a modal dialog
 *
 */

function bi_report_generator_modal_callback($js = NULL) {
    if($js) {
        ctools_include('ajax');
        ctools_include('modal');

        $title = 'My cool popup';


        $markup = '<iframe width="420" height="345" src="https://www.youtube.com/embed/tgbNymZ7vqY"></iframe>';


        $build = array(
            '#prefix' => '<strong>',
            '#suffix' => '</strong>',
            '#markup' => $markup,
        );

        $output = render($build);

        return ctools_modal_render($title, $output);
    }
}