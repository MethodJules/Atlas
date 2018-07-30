<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 06.07.18
 * Time: 13:14
 */

/**
 * Admin form for the epub module
 */

function form_xnavi_epub_admin($form, &$form_state) {
    $form['xnavi_epub_admin_css'] = array(
        '#type' => 'textarea',
        '#description' => t('Please insert here your css code for the epub'),
        '#default_value' => variable_get('xnavi_epub_css'),
    );

    $form['xnavi_epub_admin_reset_table'] = array(
        '#type' => 'checkbox',
        '#title' => t('Reset epub table'),

    );

    $form['xnavi_epub_admin_submit'] = array(
        '#type' => 'submit',
        '#value' => t('Submit'),

    );

    return $form;
}



function form_xnavi_epub_admin_submit($form, &$form_state) {



    $css_value = $form_state['values']['xnavi_epub_admin_css'];
    $reset_flag = $form_state['values']['xnavi_epub_admin_reset_table'];
    if(isset($css_value)) {
        variable_set('xnavi_epub_css', $css_value);
        drupal_set_message(t('CSS data saved.'));
    }

    if(isset($reset_flag)) {
        if($reset_flag == TRUE) {
            try {
                $result = db_truncate('xnavi_epub')->execute();
                drupal_set_message('Epub table was deleted');

            } catch (Exception $e) {
                watchdog_exception('xnavi_epub', $e);
                variable_set('xnavi_epub_epub_id', 0);

            }
        }
    }



}