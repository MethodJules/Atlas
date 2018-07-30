<?php
/**
 * @file
 * atlas_inhaltstypen_und_taxonomie.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function atlas_inhaltstypen_und_taxonomie_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function atlas_inhaltstypen_und_taxonomie_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function atlas_inhaltstypen_und_taxonomie_node_info() {
  $items = array(
    'forschungsergebnis' => array(
      'name' => t('Forschungsergebnis'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'institution' => array(
      'name' => t('Institution'),
      'base' => 'node_content',
      'description' => t('Eine neue Institution hinzufügen'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'projektpartner' => array(
      'name' => t('Projektpartner'),
      'base' => 'node_content',
      'description' => t('Einen neuen Projektpartner hinzufügen.'),
      'has_title' => '1',
      'title_label' => t('Ansprechpartner'),
      'help' => '',
    ),
    'umsetzungspartner' => array(
      'name' => t('Umsetzungspartner'),
      'base' => 'node_content',
      'description' => t('Einen neuen Umsetzungspartner hinzufügen.'),
      'has_title' => '1',
      'title_label' => t('Ansprechpartner'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
