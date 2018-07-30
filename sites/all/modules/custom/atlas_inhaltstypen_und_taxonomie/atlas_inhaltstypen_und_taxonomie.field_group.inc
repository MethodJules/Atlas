<?php
/**
 * @file
 * atlas_inhaltstypen_und_taxonomie.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function atlas_inhaltstypen_und_taxonomie_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attribute_bkm|node|forschungsergebnis|default';
  $field_group->group_name = 'group_attribute_bkm';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forschungsergebnis';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attribute des betrieblichen Kompetenzmanagements',
    'weight' => '12',
    'children' => array(
      0 => 'field_altersgruppe',
      1 => 'field_unternehmensg_e_tax',
      2 => 'field_branche_tax',
      3 => 'field_verlauf_der_ma_nahme_n_zum',
      4 => 'field_evaluation',
      5 => 'field_angewendete_forschungsmeth',
      6 => 'field_orgebene',
      7 => 'field_qual_niveau',
      8 => 'field_lebensphasen',
      9 => 'field_beschaeftigungsform',
      10 => 'field_vorgehensweisen',
      11 => 'field_virtualisierung',
      12 => 'field_etablierte_instrumente',
      13 => 'field_rahmenbedingungen',
      14 => 'field_funktionscluster',
      15 => 'field_zeithorizont',
      16 => 'field_prim_re_orientierung',
      17 => 'field_ziele',
      18 => 'field_forschungsziel',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Attribute des betrieblichen Kompetenzmanagements',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-attribute-bkm field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_attribute_bkm|node|forschungsergebnis|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attribute_bkm|node|forschungsergebnis|form';
  $field_group->group_name = 'group_attribute_bkm';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forschungsergebnis';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attribute des betrieblichen Kompetenzmanagements',
    'weight' => '14',
    'children' => array(
      0 => 'field_altersgruppe',
      1 => 'field_unternehmensg_e_tax',
      2 => 'field_branche_tax',
      3 => 'field_verlauf_der_ma_nahme_n_zum',
      4 => 'field_evaluation',
      5 => 'field_angewendete_forschungsmeth',
      6 => 'field_orgebene',
      7 => 'field_qual_niveau',
      8 => 'field_lebensphasen',
      9 => 'field_beschaeftigungsform',
      10 => 'field_vorgehensweisen',
      11 => 'field_virtualisierung',
      12 => 'field_etablierte_instrumente',
      13 => 'field_rahmenbedingungen',
      14 => 'field_funktionscluster',
      15 => 'field_zeithorizont',
      16 => 'field_prim_re_orientierung',
      17 => 'field_ziele',
      18 => 'field_forschungsziel',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Attribute des betrieblichen Kompetenzmanagements',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-attribute-bkm field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_attribute_bkm|node|forschungsergebnis|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attribute des betrieblichen Kompetenzmanagements');

  return $field_groups;
}
