<?php
/**
 * @file
 * bizballoon_user_registration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bizballoon_user_registration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  return $permissions;
}
