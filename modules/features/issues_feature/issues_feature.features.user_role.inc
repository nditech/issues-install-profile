<?php
/**
 * @file
 * issues_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function issues_feature_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: content manager.
  $roles['content manager'] = array(
    'name' => 'content manager',
    'weight' => 2,
  );

  return $roles;
}
