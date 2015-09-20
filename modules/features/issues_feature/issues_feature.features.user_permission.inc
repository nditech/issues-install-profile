<?php
/**
 * @file
 * issues_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function issues_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create answer content'.
  $permissions['create answer content'] = array(
    'name' => 'create answer content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create candidate content'.
  $permissions['create candidate content'] = array(
    'name' => 'create candidate content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_answered'.
  $permissions['create field_answered'] = array(
    'name' => 'create field_answered',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create partner content'.
  $permissions['create partner content'] = array(
    'name' => 'create partner content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create party content'.
  $permissions['create party content'] = array(
    'name' => 'create party content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create question content'.
  $permissions['create question content'] = array(
    'name' => 'create question content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete any answer content'.
  $permissions['delete any answer content'] = array(
    'name' => 'delete any answer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any candidate content'.
  $permissions['delete any candidate content'] = array(
    'name' => 'delete any candidate content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any partner content'.
  $permissions['delete any partner content'] = array(
    'name' => 'delete any partner content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any party content'.
  $permissions['delete any party content'] = array(
    'name' => 'delete any party content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any question content'.
  $permissions['delete any question content'] = array(
    'name' => 'delete any question content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own answer content'.
  $permissions['delete own answer content'] = array(
    'name' => 'delete own answer content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own candidate content'.
  $permissions['delete own candidate content'] = array(
    'name' => 'delete own candidate content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own partner content'.
  $permissions['delete own partner content'] = array(
    'name' => 'delete own partner content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own party content'.
  $permissions['delete own party content'] = array(
    'name' => 'delete own party content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own question content'.
  $permissions['delete own question content'] = array(
    'name' => 'delete own question content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in topics'.
  $permissions['delete terms in topics'] = array(
    'name' => 'delete terms in topics',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any answer content'.
  $permissions['edit any answer content'] = array(
    'name' => 'edit any answer content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any candidate content'.
  $permissions['edit any candidate content'] = array(
    'name' => 'edit any candidate content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any partner content'.
  $permissions['edit any partner content'] = array(
    'name' => 'edit any partner content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any party content'.
  $permissions['edit any party content'] = array(
    'name' => 'edit any party content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any question content'.
  $permissions['edit any question content'] = array(
    'name' => 'edit any question content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_answered'.
  $permissions['edit field_answered'] = array(
    'name' => 'edit field_answered',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own answer content'.
  $permissions['edit own answer content'] = array(
    'name' => 'edit own answer content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own candidate content'.
  $permissions['edit own candidate content'] = array(
    'name' => 'edit own candidate content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own field_answered'.
  $permissions['edit own field_answered'] = array(
    'name' => 'edit own field_answered',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own partner content'.
  $permissions['edit own partner content'] = array(
    'name' => 'edit own partner content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own party content'.
  $permissions['edit own party content'] = array(
    'name' => 'edit own party content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own question content'.
  $permissions['edit own question content'] = array(
    'name' => 'edit own question content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in topics'.
  $permissions['edit terms in topics'] = array(
    'name' => 'edit terms in topics',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
    ),
    'module' => 'search',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view field_answered'.
  $permissions['view field_answered'] = array(
    'name' => 'view field_answered',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_answered'.
  $permissions['view own field_answered'] = array(
    'name' => 'view own field_answered',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view post access counter'.
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'view taxonomy term post access counter'.
  $permissions['view taxonomy term post access counter'] = array(
    'name' => 'view taxonomy term post access counter',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy_term_statistics',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'system',
  );

  return $permissions;
}
