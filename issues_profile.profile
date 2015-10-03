<?php
/**
 * @file
 * Enables modules and site configuration for a site installation of the Issues Tool.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function issues_profile_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name.
  $form['site_information']['site_name']['#default_value'] = t('The Issues');
}

/**
 * Implements hook_init().
 *
 * Rebuild the menu to make sure the menu items defined in views displays are
 * created in the menu router table. Also enable the issues_blocks_feature and
 * the issues_menu_feature to populate the menu links table. Create the front
 * and about pages.
 * Only do this when the marker set during install is set. Delete the marker
 * from the database afterwards.
 */
function issues_profile_init() {
  if (variable_get('issues_profile_menu_rebuild_needed', FALSE)) {
    menu_rebuild();
    $modules = array('issues_blocks_feature', 'issues_menu_feature');
    module_enable($modules);
    issues_profile_create_front_page();
    issues_profile_create_about_page();
    variable_del('issues_profile_menu_rebuild_needed');
    drupal_goto();
  }
}

function issues_profile_create_front_page() {
  // Get the default language of the installation.
  $default_language = language_default();
  $langcode = $default_language->language;

  // Create the homepage.
  // First create a new node object.
  $node = new stdClass();
  // Set the bundle type.
  $node->type = 'page';
  // Set the title.
  $node->title = t('Homepage');
  // Set the language of the node.
  $node->language = $langcode;
  // Set the node path.
  // $node->path = array('alias' => 'homepage');
  // Set some default values.
  node_object_prepare($node);
  // Set the author/owner of the node.
  $node->uid = 1;
  // Let's add standard body field
  $node->body[LANGUAGE_NONE][0]['value'] = t('');
  $node->body[LANGUAGE_NONE][0]['summary'] = t('');
  // Define the default full html format for the body field.
  $node->body[LANGUAGE_NONE][0]['format'] = 'full_html';
  // Prepare node for a submit.
  $node = node_submit($node);
  // After the save we'll get a nid.
  node_save($node);
  // Clean up.
  unset($node);
}

function issues_profile_create_about_page() {
  // Get the default language of the installation.
  $default_language = language_default();
  $langcode = $default_language->language;

  // Create the about page.
  // First create a new node object.
  $node = new stdClass();
  // Set the bundle type.
  $node->type = 'page';
  // Set the title.
  $node->title = t('About');
  // Set the language.
  $node->language = $langcode;
  // Set the node path.
  // $node->path = array('alias' => 'about');
  // Set some default values.
  node_object_prepare($node);
  // Set the author/owner of the node.
  $node->uid = 1;
  // Let's add standard body field.
  $node->body[LANGUAGE_NONE][0]['value'] = t("Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas.\nSed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas.");  
  $node->body[LANGUAGE_NONE][0]['summary'] = t('');
  // Define the default full html format for the body field.
  $node->body[LANGUAGE_NONE][0]['format'] = 'full_html';
  // Prepare node for a submit.
  $node = node_submit($node);
   // After the save we'll get a nid.
  node_save($node);
  // Clean up.
  unset($node);
}
