<?php
/**
 * @file
 * atlas_inhaltstypen_und_taxonomie.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function atlas_inhaltstypen_und_taxonomie_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create forschungsergebnis content'.
  $permissions['create forschungsergebnis content'] = array(
    'name' => 'create forschungsergebnis content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create institution content'.
  $permissions['create institution content'] = array(
    'name' => 'create institution content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create projektpartner content'.
  $permissions['create projektpartner content'] = array(
    'name' => 'create projektpartner content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create umsetzungspartner content'.
  $permissions['create umsetzungspartner content'] = array(
    'name' => 'create umsetzungspartner content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any forschungsergebnis content'.
  $permissions['delete any forschungsergebnis content'] = array(
    'name' => 'delete any forschungsergebnis content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any institution content'.
  $permissions['delete any institution content'] = array(
    'name' => 'delete any institution content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any projektpartner content'.
  $permissions['delete any projektpartner content'] = array(
    'name' => 'delete any projektpartner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any umsetzungspartner content'.
  $permissions['delete any umsetzungspartner content'] = array(
    'name' => 'delete any umsetzungspartner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own forschungsergebnis content'.
  $permissions['delete own forschungsergebnis content'] = array(
    'name' => 'delete own forschungsergebnis content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own institution content'.
  $permissions['delete own institution content'] = array(
    'name' => 'delete own institution content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own projektpartner content'.
  $permissions['delete own projektpartner content'] = array(
    'name' => 'delete own projektpartner content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own umsetzungspartner content'.
  $permissions['delete own umsetzungspartner content'] = array(
    'name' => 'delete own umsetzungspartner content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any forschungsergebnis content'.
  $permissions['edit any forschungsergebnis content'] = array(
    'name' => 'edit any forschungsergebnis content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any institution content'.
  $permissions['edit any institution content'] = array(
    'name' => 'edit any institution content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any projektpartner content'.
  $permissions['edit any projektpartner content'] = array(
    'name' => 'edit any projektpartner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any umsetzungspartner content'.
  $permissions['edit any umsetzungspartner content'] = array(
    'name' => 'edit any umsetzungspartner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own forschungsergebnis content'.
  $permissions['edit own forschungsergebnis content'] = array(
    'name' => 'edit own forschungsergebnis content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own institution content'.
  $permissions['edit own institution content'] = array(
    'name' => 'edit own institution content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own projektpartner content'.
  $permissions['edit own projektpartner content'] = array(
    'name' => 'edit own projektpartner content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own umsetzungspartner content'.
  $permissions['edit own umsetzungspartner content'] = array(
    'name' => 'edit own umsetzungspartner content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
