<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 22.06.18
 * Time: 14:34
 */


function form_xnavi_epub($form, &$form_state) {

    drupal_add_css(drupal_get_path('module', 'xnavi_epub') . '/css/xnavi_epub.css');

    form_load_include($form_state, 'inc', 'xnavi_epub', 'xnavi_epub_download');



    $option = xnavi_epub_create_item_selection();


    $form['choose_epub_item'] = array(
        '#title' => t('Choose Items to add to your ePub'),
        '#type' => 'checkboxes',
        '#description' => t('Choose an item to delete'),
        '#options' => $option,
    );

    $form['submit']['download'] = array(
        '#type' => 'image_button',
        '#src' => drupal_get_path('module', 'xnavi_epub') .
            '/images/icons8-updates-herunterladen-50.png',
        //'#value' => t('Download EPub'),
        '#submit' => array('xnavi_epub_download'),
    );

    return $form;
}


function xnavi_epub_create_item_selection() {
    $query = db_select('xnavi_epub', 'epub');

    $query->fields('epub', array('nid'));

    $result = $query->execute()->fetchAllAssoc('nid');

    $item_selection = array();

    foreach($result as $nid) {
        $node = node_load($nid->nid);
        $title = $node->title;
        dsm($title);
        $item_selection[$nid->nid] = $title;

    }

    //dsm($item_selection);

    return $item_selection;
}