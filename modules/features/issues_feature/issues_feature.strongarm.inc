<?php
/**
 * @file
 * issues_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function issues_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_additional_css';
  $strongarm->value = '';
  $export['addtoany_additional_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_additional_html';
  $strongarm->value = 'Share: <a class="a2a_button_facebook"></a>
<a class="a2a_button_twitter"></a>';
  $export['addtoany_additional_html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_additional_html_placement';
  $strongarm->value = 'before';
  $export['addtoany_additional_html_placement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_additional_js';
  $strongarm->value = '';
  $export['addtoany_additional_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_buttons_size';
  $strongarm->value = '16';
  $export['addtoany_buttons_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_custom_image';
  $strongarm->value = '';
  $export['addtoany_custom_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_display_in_nodecont';
  $strongarm->value = 0;
  $export['addtoany_display_in_nodecont'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_display_in_nodelink';
  $strongarm->value = 0;
  $export['addtoany_display_in_nodelink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_display_in_rss';
  $strongarm->value = 0;
  $export['addtoany_display_in_rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_display_in_teasers';
  $strongarm->value = 0;
  $export['addtoany_display_in_teasers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_display_weight';
  $strongarm->value = '40';
  $export['addtoany_display_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_image';
  $strongarm->value = 'a2a_svg_32';
  $export['addtoany_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_image_attributes';
  $strongarm->value = 'alt="Share"';
  $export['addtoany_image_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_link_text';
  $strongarm->value = '';
  $export['addtoany_link_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_nodetypes';
  $strongarm->value = array(
    'answer' => 0,
    'article' => 0,
    'page' => 0,
    'candidate' => 0,
    'party' => 0,
    'question' => 0,
  );
  $export['addtoany_nodetypes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_no_3p';
  $strongarm->value = 0;
  $export['addtoany_no_3p'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_candidate';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_candidate';
  $strongarm->value = '[node:field_first_name] [node:field_last_name]';
  $export['auto_entitylabel_pattern_node_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_candidate';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_answer';
  $strongarm->value = '0';
  $export['comment_anonymous_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_candidate';
  $strongarm->value = '0';
  $export['comment_anonymous_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_partner';
  $strongarm->value = '0';
  $export['comment_anonymous_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_party';
  $strongarm->value = '0';
  $export['comment_anonymous_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_question';
  $strongarm->value = 0;
  $export['comment_anonymous_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_answer';
  $strongarm->value = '2';
  $export['comment_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_candidate';
  $strongarm->value = '1';
  $export['comment_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_answer';
  $strongarm->value = 1;
  $export['comment_default_mode_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_candidate';
  $strongarm->value = 0;
  $export['comment_default_mode_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_partner';
  $strongarm->value = 1;
  $export['comment_default_mode_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_party';
  $strongarm->value = 0;
  $export['comment_default_mode_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_question';
  $strongarm->value = 1;
  $export['comment_default_mode_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_answer';
  $strongarm->value = '50';
  $export['comment_default_per_page_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_candidate';
  $strongarm->value = '50';
  $export['comment_default_per_page_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_partner';
  $strongarm->value = '50';
  $export['comment_default_per_page_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_party';
  $strongarm->value = '50';
  $export['comment_default_per_page_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_question';
  $strongarm->value = '50';
  $export['comment_default_per_page_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_answer';
  $strongarm->value = 1;
  $export['comment_form_location_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_candidate';
  $strongarm->value = 0;
  $export['comment_form_location_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_partner';
  $strongarm->value = 1;
  $export['comment_form_location_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_party';
  $strongarm->value = 0;
  $export['comment_form_location_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_question';
  $strongarm->value = 1;
  $export['comment_form_location_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_partner';
  $strongarm->value = '0';
  $export['comment_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_party';
  $strongarm->value = '0';
  $export['comment_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_answer';
  $strongarm->value = '0';
  $export['comment_preview_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_candidate';
  $strongarm->value = '0';
  $export['comment_preview_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_partner';
  $strongarm->value = '1';
  $export['comment_preview_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_party';
  $strongarm->value = '0';
  $export['comment_preview_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_question';
  $strongarm->value = '0';
  $export['comment_preview_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_question';
  $strongarm->value = '2';
  $export['comment_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_answer';
  $strongarm->value = 0;
  $export['comment_subject_field_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_candidate';
  $strongarm->value = 0;
  $export['comment_subject_field_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_partner';
  $strongarm->value = 1;
  $export['comment_subject_field_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_party';
  $strongarm->value = 0;
  $export['comment_subject_field_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_question';
  $strongarm->value = 0;
  $export['comment_subject_field_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__answer';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__candidate';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '11',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__partner';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__party';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '9',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__question';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_answer';
  $strongarm->value = 1;
  $export['i18n_node_extended_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_candidate';
  $strongarm->value = 1;
  $export['i18n_node_extended_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_party';
  $strongarm->value = 1;
  $export['i18n_node_extended_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_question';
  $strongarm->value = 1;
  $export['i18n_node_extended_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_answer';
  $strongarm->value = array();
  $export['i18n_node_options_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_candidate';
  $strongarm->value = array();
  $export['i18n_node_options_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_party';
  $strongarm->value = array();
  $export['i18n_node_options_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_question';
  $strongarm->value = array();
  $export['i18n_node_options_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_allowed_formats';
  $strongarm->value = array(
    'full_html' => 'full_html',
    'filtered_html' => 'filtered_html',
    'plain_text' => 'plain_text',
  );
  $export['i18n_string_allowed_formats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_source_language';
  $strongarm->value = 'en';
  $export['i18n_string_source_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_answer';
  $strongarm->value = array();
  $export['i18n_sync_node_type_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_candidate';
  $strongarm->value = array();
  $export['i18n_sync_node_type_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_partner';
  $strongarm->value = array();
  $export['i18n_sync_node_type_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_party';
  $strongarm->value = array();
  $export['i18n_sync_node_type_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_question';
  $strongarm->value = array();
  $export['i18n_sync_node_type_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_profiles';
  $strongarm->value = array(
    1 => array(
      'name' => 'User-1',
      'usertab' => 1,
      'filesize' => 0,
      'quota' => 0,
      'tuquota' => 0,
      'extensions' => '*',
      'dimensions' => '1200x1200',
      'filenum' => 0,
      'directories' => array(
        0 => array(
          'name' => '.',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Small',
          'dimensions' => '90x90',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 => array(
          'name' => 'Medium',
          'dimensions' => '120x120',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 => array(
          'name' => 'Large',
          'dimensions' => '180x180',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
    ),
    2 => array(
      'name' => 'Sample profile',
      'usertab' => 1,
      'filesize' => 1,
      'quota' => 2,
      'tuquota' => 0,
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => 1,
      'directories' => array(
        0 => array(
          'name' => 'u%uid',
          'subnav' => 0,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 0,
          'resize' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
  );
  $export['imce_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_migrate_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_migrate_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_migrate_enable';
  $strongarm->value = 0;
  $export['jquery_update_jquery_migrate_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_migrate_trace';
  $strongarm->value = 0;
  $export['jquery_update_jquery_migrate_trace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_migrate_warnings';
  $strongarm->value = 0;
  $export['jquery_update_jquery_migrate_warnings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update__active_tab';
  $strongarm->value = 'edit-themes';
  $export['jquery_update__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_check_disabled';
  $strongarm->value = 0;
  $export['l10n_update_check_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_check_frequency';
  $strongarm->value = '30';
  $export['l10n_update_check_frequency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_check_mode';
  $strongarm->value = '3';
  $export['l10n_update_check_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_download_store';
  $strongarm->value = 'sites/all/translations';
  $export['l10n_update_download_store'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_import_mode';
  $strongarm->value = '1';
  $export['l10n_update_import_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_last_check';
  $strongarm->value = 1442417397;
  $export['l10n_update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_rebuild_projects';
  $strongarm->value = 1;
  $export['l10n_update_rebuild_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_translation_status';
  $strongarm->value = array(
    'addtoany' => array(
      'ar' => (object) array(
        'name' => 'addtoany',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-4.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'addtoany',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353063,
        'last_checked' => 1441353062,
        'files' => array(
          'remote' => (object) array(
            'project' => 'addtoany',
            'langcode' => 'ar',
            'version' => '7.x-4.9',
            'type' => 'remote',
            'filename' => 'addtoany-7.x-4.9.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/addtoany/addtoany-7.x-4.9.ar.po',
            'timestamp' => 1438068875,
          ),
          'local' => (object) array(
            'project' => 'addtoany',
            'langcode' => 'ar',
            'version' => '7.x-4.9',
            'type' => 'local',
            'filename' => 'addtoany-7.x-4.9.ar.po',
            'uri' => 'translations://addtoany-7.x-4.9.ar.po',
            'timestamp' => 1441353063,
            'directory' => 'translations://',
            'last_checked' => 1441353062,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
      ),
      'fr' => (object) array(
        'name' => 'addtoany',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-4.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'addtoany',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353133,
        'last_checked' => 1441353132,
        'files' => array(
          'remote' => (object) array(
            'project' => 'addtoany',
            'langcode' => 'fr',
            'version' => '7.x-4.9',
            'type' => 'remote',
            'filename' => 'addtoany-7.x-4.9.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/addtoany/addtoany-7.x-4.9.fr.po',
            'timestamp' => 1438068883,
          ),
          'local' => (object) array(
            'project' => 'addtoany',
            'langcode' => 'fr',
            'version' => '7.x-4.9',
            'type' => 'local',
            'filename' => 'addtoany-7.x-4.9.fr.po',
            'uri' => 'translations://addtoany-7.x-4.9.fr.po',
            'timestamp' => 1441353133,
            'directory' => 'translations://',
            'last_checked' => 1441353132,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
      ),
      'ru' => (object) array(
        'name' => 'addtoany',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-4.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'addtoany',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353238,
        'last_checked' => 1441353237,
        'files' => array(
          'remote' => (object) array(
            'project' => 'addtoany',
            'langcode' => 'ru',
            'version' => '7.x-4.9',
            'type' => 'remote',
            'filename' => 'addtoany-7.x-4.9.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/addtoany/addtoany-7.x-4.9.ru.po',
            'timestamp' => 1438068899,
          ),
          'local' => (object) array(
            'project' => 'addtoany',
            'langcode' => 'ru',
            'version' => '7.x-4.9',
            'type' => 'local',
            'filename' => 'addtoany-7.x-4.9.ru.po',
            'uri' => 'translations://addtoany-7.x-4.9.ru.po',
            'timestamp' => 1441353238,
            'directory' => 'translations://',
            'last_checked' => 1441353237,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
      ),
      'es' => (object) array(
        'name' => 'addtoany',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-4.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'addtoany',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353335,
        'last_checked' => 1441353334,
        'files' => array(
          'remote' => (object) array(
            'project' => 'addtoany',
            'langcode' => 'es',
            'version' => '7.x-4.9',
            'type' => 'remote',
            'filename' => 'addtoany-7.x-4.9.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/addtoany/addtoany-7.x-4.9.es.po',
            'timestamp' => 1438068901,
          ),
          'local' => (object) array(
            'project' => 'addtoany',
            'langcode' => 'es',
            'version' => '7.x-4.9',
            'type' => 'local',
            'filename' => 'addtoany-7.x-4.9.es.po',
            'uri' => 'translations://addtoany-7.x-4.9.es.po',
            'timestamp' => 1441353335,
            'directory' => 'translations://',
            'last_checked' => 1441353334,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
      ),
    ),
    'auto_entitylabel' => array(
      'ar' => (object) array(
        'name' => 'auto_entitylabel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'auto_entitylabel',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353063,
        'last_checked' => 1441353062,
        'files' => array(
          'remote' => (object) array(
            'project' => 'auto_entitylabel',
            'langcode' => 'ar',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'auto_entitylabel-7.x-1.3.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/auto_entitylabel/auto_entitylabel-7.x-1.3.ar.po',
            'timestamp' => 1421667789,
          ),
          'local' => (object) array(
            'project' => 'auto_entitylabel',
            'langcode' => 'ar',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'auto_entitylabel-7.x-1.3.ar.po',
            'uri' => 'translations://auto_entitylabel-7.x-1.3.ar.po',
            'timestamp' => 1441353063,
            'directory' => 'translations://',
            'last_checked' => 1441353062,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'auto_entitylabel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'auto_entitylabel',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353133,
        'last_checked' => 1441353132,
        'files' => array(
          'remote' => (object) array(
            'project' => 'auto_entitylabel',
            'langcode' => 'fr',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'auto_entitylabel-7.x-1.3.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/auto_entitylabel/auto_entitylabel-7.x-1.3.fr.po',
            'timestamp' => 1421667796,
          ),
          'local' => (object) array(
            'project' => 'auto_entitylabel',
            'langcode' => 'fr',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'auto_entitylabel-7.x-1.3.fr.po',
            'uri' => 'translations://auto_entitylabel-7.x-1.3.fr.po',
            'timestamp' => 1441353133,
            'directory' => 'translations://',
            'last_checked' => 1441353132,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'auto_entitylabel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'auto_entitylabel',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353239,
        'last_checked' => 1441353239,
        'files' => array(
          'remote' => (object) array(
            'project' => 'auto_entitylabel',
            'langcode' => 'ru',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'auto_entitylabel-7.x-1.3.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/auto_entitylabel/auto_entitylabel-7.x-1.3.ru.po',
            'timestamp' => 1438022166,
          ),
          'local' => (object) array(
            'project' => 'auto_entitylabel',
            'langcode' => 'ru',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'auto_entitylabel-7.x-1.3.ru.po',
            'uri' => 'translations://auto_entitylabel-7.x-1.3.ru.po',
            'timestamp' => 1441353239,
            'directory' => 'translations://',
            'last_checked' => 1441353239,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'auto_entitylabel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'auto_entitylabel',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353335,
        'last_checked' => 1441353334,
        'files' => array(
          'remote' => (object) array(
            'project' => 'auto_entitylabel',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'auto_entitylabel-7.x-1.3.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/auto_entitylabel/auto_entitylabel-7.x-1.3.es.po',
            'timestamp' => 1434680069,
          ),
          'local' => (object) array(
            'project' => 'auto_entitylabel',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'auto_entitylabel-7.x-1.3.es.po',
            'uri' => 'translations://auto_entitylabel-7.x-1.3.es.po',
            'timestamp' => 1441353335,
            'directory' => 'translations://',
            'last_checked' => 1441353334,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'block_class' => array(
      'ar' => (object) array(
        'name' => 'block_class',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'block_class',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353063,
        'last_checked' => 1441353062,
        'files' => array(
          'remote' => (object) array(
            'project' => 'block_class',
            'langcode' => 'ar',
            'version' => '7.x-2.1',
            'type' => 'remote',
            'filename' => 'block_class-7.x-2.1.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/block_class/block_class-7.x-2.1.ar.po',
            'timestamp' => 1378401671,
          ),
          'local' => (object) array(
            'project' => 'block_class',
            'langcode' => 'ar',
            'version' => '7.x-2.1',
            'type' => 'local',
            'filename' => 'block_class-7.x-2.1.ar.po',
            'uri' => 'translations://block_class-7.x-2.1.ar.po',
            'timestamp' => 1441353063,
            'directory' => 'translations://',
            'last_checked' => 1441353062,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'block_class',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'block_class',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353133,
        'last_checked' => 1441353132,
        'files' => array(
          'remote' => (object) array(
            'project' => 'block_class',
            'langcode' => 'fr',
            'version' => '7.x-2.1',
            'type' => 'remote',
            'filename' => 'block_class-7.x-2.1.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/block_class/block_class-7.x-2.1.fr.po',
            'timestamp' => 1378401671,
          ),
          'local' => (object) array(
            'project' => 'block_class',
            'langcode' => 'fr',
            'version' => '7.x-2.1',
            'type' => 'local',
            'filename' => 'block_class-7.x-2.1.fr.po',
            'uri' => 'translations://block_class-7.x-2.1.fr.po',
            'timestamp' => 1441353133,
            'directory' => 'translations://',
            'last_checked' => 1441353132,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'block_class',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'block_class',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353239,
        'last_checked' => 1441353239,
        'files' => array(
          'remote' => (object) array(
            'project' => 'block_class',
            'langcode' => 'ru',
            'version' => '7.x-2.1',
            'type' => 'remote',
            'filename' => 'block_class-7.x-2.1.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/block_class/block_class-7.x-2.1.ru.po',
            'timestamp' => 1422417226,
          ),
          'local' => (object) array(
            'project' => 'block_class',
            'langcode' => 'ru',
            'version' => '7.x-2.1',
            'type' => 'local',
            'filename' => 'block_class-7.x-2.1.ru.po',
            'uri' => 'translations://block_class-7.x-2.1.ru.po',
            'timestamp' => 1441353239,
            'directory' => 'translations://',
            'last_checked' => 1441353239,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'block_class',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'block_class',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353335,
        'last_checked' => 1441353334,
        'files' => array(
          'remote' => (object) array(
            'project' => 'block_class',
            'langcode' => 'es',
            'version' => '7.x-2.1',
            'type' => 'remote',
            'filename' => 'block_class-7.x-2.1.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/block_class/block_class-7.x-2.1.es.po',
            'timestamp' => 1423664769,
          ),
          'local' => (object) array(
            'project' => 'block_class',
            'langcode' => 'es',
            'version' => '7.x-2.1',
            'type' => 'local',
            'filename' => 'block_class-7.x-2.1.es.po',
            'uri' => 'translations://block_class-7.x-2.1.es.po',
            'timestamp' => 1441353335,
            'directory' => 'translations://',
            'last_checked' => 1441353334,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'bootstrap' => array(
      'ar' => (object) array(
        'name' => 'bootstrap',
        'project_type' => 'theme',
        'core' => '7.x',
        'version' => '7.x-3.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'bootstrap',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353063,
        'last_checked' => 1441353062,
        'files' => array(
          'remote' => (object) array(
            'project' => 'bootstrap',
            'langcode' => 'ar',
            'version' => '7.x-3.0',
            'type' => 'remote',
            'filename' => 'bootstrap-7.x-3.0.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/bootstrap/bootstrap-7.x-3.0.ar.po',
            'timestamp' => 1414941195,
          ),
          'local' => (object) array(
            'project' => 'bootstrap',
            'langcode' => 'ar',
            'version' => '7.x-3.0',
            'type' => 'local',
            'filename' => 'bootstrap-7.x-3.0.ar.po',
            'uri' => 'translations://bootstrap-7.x-3.0.ar.po',
            'timestamp' => 1441353063,
            'directory' => 'translations://',
            'last_checked' => 1441353062,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'bootstrap',
        'project_type' => 'theme',
        'core' => '7.x',
        'version' => '7.x-3.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'bootstrap',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353134,
        'last_checked' => 1441353134,
        'files' => array(
          'remote' => (object) array(
            'project' => 'bootstrap',
            'langcode' => 'fr',
            'version' => '7.x-3.0',
            'type' => 'remote',
            'filename' => 'bootstrap-7.x-3.0.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/bootstrap/bootstrap-7.x-3.0.fr.po',
            'timestamp' => 1405209142,
          ),
          'local' => (object) array(
            'project' => 'bootstrap',
            'langcode' => 'fr',
            'version' => '7.x-3.0',
            'type' => 'local',
            'filename' => 'bootstrap-7.x-3.0.fr.po',
            'uri' => 'translations://bootstrap-7.x-3.0.fr.po',
            'timestamp' => 1441353134,
            'directory' => 'translations://',
            'last_checked' => 1441353134,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'bootstrap',
        'project_type' => 'theme',
        'core' => '7.x',
        'version' => '7.x-3.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'bootstrap',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353239,
        'last_checked' => 1441353239,
        'files' => array(
          'remote' => (object) array(
            'project' => 'bootstrap',
            'langcode' => 'ru',
            'version' => '7.x-3.0',
            'type' => 'remote',
            'filename' => 'bootstrap-7.x-3.0.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/bootstrap/bootstrap-7.x-3.0.ru.po',
            'timestamp' => 1437240987,
          ),
          'local' => (object) array(
            'project' => 'bootstrap',
            'langcode' => 'ru',
            'version' => '7.x-3.0',
            'type' => 'local',
            'filename' => 'bootstrap-7.x-3.0.ru.po',
            'uri' => 'translations://bootstrap-7.x-3.0.ru.po',
            'timestamp' => 1441353239,
            'directory' => 'translations://',
            'last_checked' => 1441353239,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'bootstrap',
        'project_type' => 'theme',
        'core' => '7.x',
        'version' => '7.x-3.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'bootstrap',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353335,
        'last_checked' => 1441353334,
        'files' => array(
          'remote' => (object) array(
            'project' => 'bootstrap',
            'langcode' => 'es',
            'version' => '7.x-3.0',
            'type' => 'remote',
            'filename' => 'bootstrap-7.x-3.0.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/bootstrap/bootstrap-7.x-3.0.es.po',
            'timestamp' => 1418409016,
          ),
          'local' => (object) array(
            'project' => 'bootstrap',
            'langcode' => 'es',
            'version' => '7.x-3.0',
            'type' => 'local',
            'filename' => 'bootstrap-7.x-3.0.es.po',
            'uri' => 'translations://bootstrap-7.x-3.0.es.po',
            'timestamp' => 1441353335,
            'directory' => 'translations://',
            'last_checked' => 1441353334,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'commentsblock' => array(
      'ar' => (object) array(
        'name' => 'commentsblock',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'commentsblock',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353064,
        'last_checked' => 1441353064,
        'files' => array(
          'remote' => (object) array(
            'project' => 'commentsblock',
            'langcode' => 'ar',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'commentsblock-7.x-2.5.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/commentsblock/commentsblock-7.x-2.5.ar.po',
            'timestamp' => 1414862338,
          ),
          'local' => (object) array(
            'project' => 'commentsblock',
            'langcode' => 'ar',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'commentsblock-7.x-2.5.ar.po',
            'uri' => 'translations://commentsblock-7.x-2.5.ar.po',
            'timestamp' => 1441353064,
            'directory' => 'translations://',
            'last_checked' => 1441353064,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'commentsblock',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'commentsblock',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353135,
        'last_checked' => 1441353134,
        'files' => array(
          'remote' => (object) array(
            'project' => 'commentsblock',
            'langcode' => 'fr',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'commentsblock-7.x-2.5.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/commentsblock/commentsblock-7.x-2.5.fr.po',
            'timestamp' => 1398798740,
          ),
          'local' => (object) array(
            'project' => 'commentsblock',
            'langcode' => 'fr',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'commentsblock-7.x-2.5.fr.po',
            'uri' => 'translations://commentsblock-7.x-2.5.fr.po',
            'timestamp' => 1441353135,
            'directory' => 'translations://',
            'last_checked' => 1441353134,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'commentsblock',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'commentsblock',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353239,
        'last_checked' => 1441353239,
        'files' => array(
          'remote' => (object) array(
            'project' => 'commentsblock',
            'langcode' => 'ru',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'commentsblock-7.x-2.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/commentsblock/commentsblock-7.x-2.5.ru.po',
            'timestamp' => 1398798748,
          ),
          'local' => (object) array(
            'project' => 'commentsblock',
            'langcode' => 'ru',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'commentsblock-7.x-2.5.ru.po',
            'uri' => 'translations://commentsblock-7.x-2.5.ru.po',
            'timestamp' => 1441353239,
            'directory' => 'translations://',
            'last_checked' => 1441353239,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'commentsblock',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'commentsblock',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353335,
        'last_checked' => 1441353336,
        'files' => array(
          'remote' => (object) array(
            'project' => 'commentsblock',
            'langcode' => 'es',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'commentsblock-7.x-2.5.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/commentsblock/commentsblock-7.x-2.5.es.po',
            'timestamp' => 1398798750,
          ),
          'local' => (object) array(
            'project' => 'commentsblock',
            'langcode' => 'es',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'commentsblock-7.x-2.5.es.po',
            'uri' => 'translations://commentsblock-7.x-2.5.es.po',
            'timestamp' => 1441353335,
            'directory' => 'translations://',
            'last_checked' => 1441353336,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'ctools' => array(
      'ar' => (object) array(
        'name' => 'ctools',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ctools',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353064,
        'last_checked' => 1441353064,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ctools',
            'langcode' => 'ar',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'ctools-7.x-1.7.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/ctools/ctools-7.x-1.7.ar.po',
            'timestamp' => 1426742584,
          ),
          'local' => (object) array(
            'project' => 'ctools',
            'langcode' => 'ar',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'ctools-7.x-1.7.ar.po',
            'uri' => 'translations://ctools-7.x-1.7.ar.po',
            'timestamp' => 1441353064,
            'directory' => 'translations://',
            'last_checked' => 1441353064,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'ctools',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ctools',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353135,
        'last_checked' => 1441353140,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ctools',
            'langcode' => 'fr',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'ctools-7.x-1.7.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/ctools/ctools-7.x-1.7.fr.po',
            'timestamp' => 1426742603,
          ),
          'local' => (object) array(
            'project' => 'ctools',
            'langcode' => 'fr',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'ctools-7.x-1.7.fr.po',
            'uri' => 'translations://ctools-7.x-1.7.fr.po',
            'timestamp' => 1441353135,
            'directory' => 'translations://',
            'last_checked' => 1441353140,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'ctools',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ctools',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353239,
        'last_checked' => 1441353242,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ctools',
            'langcode' => 'ru',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'ctools-7.x-1.7.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/ctools/ctools-7.x-1.7.ru.po',
            'timestamp' => 1439767566,
          ),
          'local' => (object) array(
            'project' => 'ctools',
            'langcode' => 'ru',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'ctools-7.x-1.7.ru.po',
            'uri' => 'translations://ctools-7.x-1.7.ru.po',
            'timestamp' => 1441353239,
            'directory' => 'translations://',
            'last_checked' => 1441353242,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'ctools',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ctools',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353336,
        'last_checked' => 1441353341,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ctools',
            'langcode' => 'es',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'ctools-7.x-1.7.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/ctools/ctools-7.x-1.7.es.po',
            'timestamp' => 1434665055,
          ),
          'local' => (object) array(
            'project' => 'ctools',
            'langcode' => 'es',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'ctools-7.x-1.7.es.po',
            'uri' => 'translations://ctools-7.x-1.7.es.po',
            'timestamp' => 1441353336,
            'directory' => 'translations://',
            'last_checked' => 1441353341,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'drupal' => array(
      'ar' => (object) array(
        'name' => 'drupal',
        'project_type' => 'core',
        'core' => '7.x',
        'version' => '7.38',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'drupal',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353065,
        'last_checked' => 1441353088,
        'files' => array(
          'remote' => (object) array(
            'project' => 'drupal',
            'langcode' => 'ar',
            'version' => '7.38',
            'type' => 'remote',
            'filename' => 'drupal-7.38.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/drupal/drupal-7.38.ar.po',
            'timestamp' => 1434783297,
          ),
          'local' => (object) array(
            'project' => 'drupal',
            'langcode' => 'ar',
            'version' => '7.38',
            'type' => 'local',
            'filename' => 'drupal-7.38.ar.po',
            'uri' => 'translations://drupal-7.38.ar.po',
            'timestamp' => 1441353065,
            'directory' => 'translations://',
            'last_checked' => 1441353088,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'drupal',
        'project_type' => 'core',
        'core' => '7.x',
        'version' => '7.38',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'drupal',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353142,
        'last_checked' => 1441353160,
        'files' => array(
          'remote' => (object) array(
            'project' => 'drupal',
            'langcode' => 'fr',
            'version' => '7.38',
            'type' => 'remote',
            'filename' => 'drupal-7.38.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/drupal/drupal-7.38.fr.po',
            'timestamp' => 1440167535,
          ),
          'local' => (object) array(
            'project' => 'drupal',
            'langcode' => 'fr',
            'version' => '7.38',
            'type' => 'local',
            'filename' => 'drupal-7.38.fr.po',
            'uri' => 'translations://drupal-7.38.fr.po',
            'timestamp' => 1441353142,
            'directory' => 'translations://',
            'last_checked' => 1441353160,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'drupal',
        'project_type' => 'core',
        'core' => '7.x',
        'version' => '7.38',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'drupal',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353243,
        'last_checked' => 1441353261,
        'files' => array(
          'remote' => (object) array(
            'project' => 'drupal',
            'langcode' => 'ru',
            'version' => '7.38',
            'type' => 'remote',
            'filename' => 'drupal-7.38.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/drupal/drupal-7.38.ru.po',
            'timestamp' => 1439648419,
          ),
          'local' => (object) array(
            'project' => 'drupal',
            'langcode' => 'ru',
            'version' => '7.38',
            'type' => 'local',
            'filename' => 'drupal-7.38.ru.po',
            'uri' => 'translations://drupal-7.38.ru.po',
            'timestamp' => 1441353243,
            'directory' => 'translations://',
            'last_checked' => 1441353261,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'drupal',
        'project_type' => 'core',
        'core' => '7.x',
        'version' => '7.38',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'drupal',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353342,
        'last_checked' => 1441353357,
        'files' => array(
          'remote' => (object) array(
            'project' => 'drupal',
            'langcode' => 'es',
            'version' => '7.38',
            'type' => 'remote',
            'filename' => 'drupal-7.38.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/drupal/drupal-7.38.es.po',
            'timestamp' => 1438766028,
          ),
          'local' => (object) array(
            'project' => 'drupal',
            'langcode' => 'es',
            'version' => '7.38',
            'type' => 'local',
            'filename' => 'drupal-7.38.es.po',
            'uri' => 'translations://drupal-7.38.es.po',
            'timestamp' => 1441353342,
            'directory' => 'translations://',
            'last_checked' => 1441353357,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'eim' => array(
      'ar' => (object) array(
        'name' => 'eim',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'eim',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353089,
        'last_checked' => 1441353088,
        'files' => array(
          'remote' => (object) array(
            'project' => 'eim',
            'langcode' => 'ar',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'eim-7.x-1.3.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/eim/eim-7.x-1.3.ar.po',
            'timestamp' => 1375230813,
          ),
          'local' => (object) array(
            'project' => 'eim',
            'langcode' => 'ar',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'eim-7.x-1.3.ar.po',
            'uri' => 'translations://eim-7.x-1.3.ar.po',
            'timestamp' => 1441353089,
            'directory' => 'translations://',
            'last_checked' => 1441353088,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'eim',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'eim',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353160,
        'last_checked' => 1441353160,
        'files' => array(
          'remote' => (object) array(
            'project' => 'eim',
            'langcode' => 'fr',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'eim-7.x-1.3.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/eim/eim-7.x-1.3.fr.po',
            'timestamp' => 1375230827,
          ),
          'local' => (object) array(
            'project' => 'eim',
            'langcode' => 'fr',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'eim-7.x-1.3.fr.po',
            'uri' => 'translations://eim-7.x-1.3.fr.po',
            'timestamp' => 1441353160,
            'directory' => 'translations://',
            'last_checked' => 1441353160,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'eim',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'eim',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353261,
        'last_checked' => 1441353261,
        'files' => array(
          'remote' => (object) array(
            'project' => 'eim',
            'langcode' => 'ru',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'eim-7.x-1.3.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/eim/eim-7.x-1.3.ru.po',
            'timestamp' => 1382584627,
          ),
          'local' => (object) array(
            'project' => 'eim',
            'langcode' => 'ru',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'eim-7.x-1.3.ru.po',
            'uri' => 'translations://eim-7.x-1.3.ru.po',
            'timestamp' => 1441353261,
            'directory' => 'translations://',
            'last_checked' => 1441353261,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'eim',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'eim',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353358,
        'last_checked' => 1441353358,
        'files' => array(
          'remote' => (object) array(
            'project' => 'eim',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'eim-7.x-1.3.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/eim/eim-7.x-1.3.es.po',
            'timestamp' => 1393711843,
          ),
          'local' => (object) array(
            'project' => 'eim',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'eim-7.x-1.3.es.po',
            'uri' => 'translations://eim-7.x-1.3.es.po',
            'timestamp' => 1441353358,
            'directory' => 'translations://',
            'last_checked' => 1441353358,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'entity' => array(
      'ar' => (object) array(
        'name' => 'entity',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entity',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353089,
        'last_checked' => 1441353088,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entity',
            'langcode' => 'ar',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'entity-7.x-1.6.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entity/entity-7.x-1.6.ar.po',
            'timestamp' => 1425100389,
          ),
          'local' => (object) array(
            'project' => 'entity',
            'langcode' => 'ar',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'entity-7.x-1.6.ar.po',
            'uri' => 'translations://entity-7.x-1.6.ar.po',
            'timestamp' => 1441353089,
            'directory' => 'translations://',
            'last_checked' => 1441353088,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'entity',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entity',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353160,
        'last_checked' => 1441353160,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entity',
            'langcode' => 'fr',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'entity-7.x-1.6.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entity/entity-7.x-1.6.fr.po',
            'timestamp' => 1436802035,
          ),
          'local' => (object) array(
            'project' => 'entity',
            'langcode' => 'fr',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'entity-7.x-1.6.fr.po',
            'uri' => 'translations://entity-7.x-1.6.fr.po',
            'timestamp' => 1441353160,
            'directory' => 'translations://',
            'last_checked' => 1441353160,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'entity',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entity',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353261,
        'last_checked' => 1441353261,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entity',
            'langcode' => 'ru',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'entity-7.x-1.6.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entity/entity-7.x-1.6.ru.po',
            'timestamp' => 1438637975,
          ),
          'local' => (object) array(
            'project' => 'entity',
            'langcode' => 'ru',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'entity-7.x-1.6.ru.po',
            'uri' => 'translations://entity-7.x-1.6.ru.po',
            'timestamp' => 1441353261,
            'directory' => 'translations://',
            'last_checked' => 1441353261,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'entity',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entity',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353359,
        'last_checked' => 1441353358,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entity',
            'langcode' => 'es',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'entity-7.x-1.6.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entity/entity-7.x-1.6.es.po',
            'timestamp' => 1434746604,
          ),
          'local' => (object) array(
            'project' => 'entity',
            'langcode' => 'es',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'entity-7.x-1.6.es.po',
            'uri' => 'translations://entity-7.x-1.6.es.po',
            'timestamp' => 1441353359,
            'directory' => 'translations://',
            'last_checked' => 1441353358,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'entityreference' => array(
      'ar' => (object) array(
        'name' => 'entityreference',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entityreference',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353089,
        'last_checked' => 1441353088,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'ar',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'entityreference-7.x-1.1.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entityreference/entityreference-7.x-1.1.ar.po',
            'timestamp' => 1415410477,
          ),
          'local' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'ar',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'entityreference-7.x-1.1.ar.po',
            'uri' => 'translations://entityreference-7.x-1.1.ar.po',
            'timestamp' => 1441353089,
            'directory' => 'translations://',
            'last_checked' => 1441353088,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'entityreference',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entityreference',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353161,
        'last_checked' => 1441353160,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'fr',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'entityreference-7.x-1.1.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entityreference/entityreference-7.x-1.1.fr.po',
            'timestamp' => 1426035381,
          ),
          'local' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'fr',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'entityreference-7.x-1.1.fr.po',
            'uri' => 'translations://entityreference-7.x-1.1.fr.po',
            'timestamp' => 1441353161,
            'directory' => 'translations://',
            'last_checked' => 1441353160,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'entityreference',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entityreference',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353262,
        'last_checked' => 1441353261,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'ru',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'entityreference-7.x-1.1.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entityreference/entityreference-7.x-1.1.ru.po',
            'timestamp' => 1439593755,
          ),
          'local' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'ru',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'entityreference-7.x-1.1.ru.po',
            'uri' => 'translations://entityreference-7.x-1.1.ru.po',
            'timestamp' => 1441353262,
            'directory' => 'translations://',
            'last_checked' => 1441353261,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'entityreference',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entityreference',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353359,
        'last_checked' => 1441353358,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'es',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'entityreference-7.x-1.1.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entityreference/entityreference-7.x-1.1.es.po',
            'timestamp' => 1434840618,
          ),
          'local' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'es',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'entityreference-7.x-1.1.es.po',
            'uri' => 'translations://entityreference-7.x-1.1.es.po',
            'timestamp' => 1441353359,
            'directory' => 'translations://',
            'last_checked' => 1441353358,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'entityreference_prepopulate' => array(
      'ar' => (object) array(
        'name' => 'entityreference_prepopulate',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entityreference_prepopulate',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353090,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entityreference_prepopulate',
            'langcode' => 'ar',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'entityreference_prepopulate-7.x-1.5.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entityreference_prepopulate/entityreference_prepopulate-7.x-1.5.ar.po',
            'timestamp' => 1392877301,
          ),
          'local' => (object) array(
            'project' => 'entityreference_prepopulate',
            'langcode' => 'ar',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'entityreference_prepopulate-7.x-1.5.ar.po',
            'uri' => 'translations://entityreference_prepopulate-7.x-1.5.ar.po',
            'timestamp' => 1441353090,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'entityreference_prepopulate',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entityreference_prepopulate',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353162,
        'last_checked' => 1441353161,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entityreference_prepopulate',
            'langcode' => 'fr',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'entityreference_prepopulate-7.x-1.5.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entityreference_prepopulate/entityreference_prepopulate-7.x-1.5.fr.po',
            'timestamp' => 1405211780,
          ),
          'local' => (object) array(
            'project' => 'entityreference_prepopulate',
            'langcode' => 'fr',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'entityreference_prepopulate-7.x-1.5.fr.po',
            'uri' => 'translations://entityreference_prepopulate-7.x-1.5.fr.po',
            'timestamp' => 1441353162,
            'directory' => 'translations://',
            'last_checked' => 1441353161,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'entityreference_prepopulate',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entityreference_prepopulate',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353262,
        'last_checked' => 1441353263,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entityreference_prepopulate',
            'langcode' => 'ru',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'entityreference_prepopulate-7.x-1.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entityreference_prepopulate/entityreference_prepopulate-7.x-1.5.ru.po',
            'timestamp' => 1421122393,
          ),
          'local' => (object) array(
            'project' => 'entityreference_prepopulate',
            'langcode' => 'ru',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'entityreference_prepopulate-7.x-1.5.ru.po',
            'uri' => 'translations://entityreference_prepopulate-7.x-1.5.ru.po',
            'timestamp' => 1441353262,
            'directory' => 'translations://',
            'last_checked' => 1441353263,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'entityreference_prepopulate',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entityreference_prepopulate',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353359,
        'last_checked' => 1441353360,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entityreference_prepopulate',
            'langcode' => 'es',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'entityreference_prepopulate-7.x-1.5.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entityreference_prepopulate/entityreference_prepopulate-7.x-1.5.es.po',
            'timestamp' => 1416305334,
          ),
          'local' => (object) array(
            'project' => 'entityreference_prepopulate',
            'langcode' => 'es',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'entityreference_prepopulate-7.x-1.5.es.po',
            'uri' => 'translations://entityreference_prepopulate-7.x-1.5.es.po',
            'timestamp' => 1441353359,
            'directory' => 'translations://',
            'last_checked' => 1441353360,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'features' => array(
      'ar' => (object) array(
        'name' => 'features',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'features',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353090,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'features',
            'langcode' => 'ar',
            'version' => '7.x-2.6',
            'type' => 'remote',
            'filename' => 'features-7.x-2.6.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/features/features-7.x-2.6.ar.po',
            'timestamp' => 1435389696,
          ),
          'local' => (object) array(
            'project' => 'features',
            'langcode' => 'ar',
            'version' => '7.x-2.6',
            'type' => 'local',
            'filename' => 'features-7.x-2.6.ar.po',
            'uri' => 'translations://features-7.x-2.6.ar.po',
            'timestamp' => 1441353090,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'features',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'features',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353162,
        'last_checked' => 1441353161,
        'files' => array(
          'remote' => (object) array(
            'project' => 'features',
            'langcode' => 'fr',
            'version' => '7.x-2.6',
            'type' => 'remote',
            'filename' => 'features-7.x-2.6.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/features/features-7.x-2.6.fr.po',
            'timestamp' => 1436806030,
          ),
          'local' => (object) array(
            'project' => 'features',
            'langcode' => 'fr',
            'version' => '7.x-2.6',
            'type' => 'local',
            'filename' => 'features-7.x-2.6.fr.po',
            'uri' => 'translations://features-7.x-2.6.fr.po',
            'timestamp' => 1441353162,
            'directory' => 'translations://',
            'last_checked' => 1441353161,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'features',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'features',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353263,
        'last_checked' => 1441353263,
        'files' => array(
          'remote' => (object) array(
            'project' => 'features',
            'langcode' => 'ru',
            'version' => '7.x-2.6',
            'type' => 'remote',
            'filename' => 'features-7.x-2.6.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/features/features-7.x-2.6.ru.po',
            'timestamp' => 1439768091,
          ),
          'local' => (object) array(
            'project' => 'features',
            'langcode' => 'ru',
            'version' => '7.x-2.6',
            'type' => 'local',
            'filename' => 'features-7.x-2.6.ru.po',
            'uri' => 'translations://features-7.x-2.6.ru.po',
            'timestamp' => 1441353263,
            'directory' => 'translations://',
            'last_checked' => 1441353263,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'features',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'features',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353360,
        'last_checked' => 1441353360,
        'files' => array(
          'remote' => (object) array(
            'project' => 'features',
            'langcode' => 'es',
            'version' => '7.x-2.6',
            'type' => 'remote',
            'filename' => 'features-7.x-2.6.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/features/features-7.x-2.6.es.po',
            'timestamp' => 1440218641,
          ),
          'local' => (object) array(
            'project' => 'features',
            'langcode' => 'es',
            'version' => '7.x-2.6',
            'type' => 'local',
            'filename' => 'features-7.x-2.6.es.po',
            'uri' => 'translations://features-7.x-2.6.es.po',
            'timestamp' => 1441353360,
            'directory' => 'translations://',
            'last_checked' => 1441353360,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'field_group' => array(
      'ar' => (object) array(
        'name' => 'field_group',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'field_group',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353090,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'field_group',
            'langcode' => 'ar',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'field_group-7.x-1.4.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/field_group/field_group-7.x-1.4.ar.po',
            'timestamp' => 1401953041,
          ),
          'local' => (object) array(
            'project' => 'field_group',
            'langcode' => 'ar',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'field_group-7.x-1.4.ar.po',
            'uri' => 'translations://field_group-7.x-1.4.ar.po',
            'timestamp' => 1441353090,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'field_group',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'field_group',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353162,
        'last_checked' => 1441353161,
        'files' => array(
          'remote' => (object) array(
            'project' => 'field_group',
            'langcode' => 'fr',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'field_group-7.x-1.4.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/field_group/field_group-7.x-1.4.fr.po',
            'timestamp' => 1441032841,
          ),
          'local' => (object) array(
            'project' => 'field_group',
            'langcode' => 'fr',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'field_group-7.x-1.4.fr.po',
            'uri' => 'translations://field_group-7.x-1.4.fr.po',
            'timestamp' => 1441353162,
            'directory' => 'translations://',
            'last_checked' => 1441353161,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'field_group',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'field_group',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353263,
        'last_checked' => 1441353263,
        'files' => array(
          'remote' => (object) array(
            'project' => 'field_group',
            'langcode' => 'ru',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'field_group-7.x-1.4.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/field_group/field_group-7.x-1.4.ru.po',
            'timestamp' => 1437522429,
          ),
          'local' => (object) array(
            'project' => 'field_group',
            'langcode' => 'ru',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'field_group-7.x-1.4.ru.po',
            'uri' => 'translations://field_group-7.x-1.4.ru.po',
            'timestamp' => 1441353263,
            'directory' => 'translations://',
            'last_checked' => 1441353263,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'field_group',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'field_group',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353360,
        'last_checked' => 1441353360,
        'files' => array(
          'remote' => (object) array(
            'project' => 'field_group',
            'langcode' => 'es',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'field_group-7.x-1.4.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/field_group/field_group-7.x-1.4.es.po',
            'timestamp' => 1429398528,
          ),
          'local' => (object) array(
            'project' => 'field_group',
            'langcode' => 'es',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'field_group-7.x-1.4.es.po',
            'uri' => 'translations://field_group-7.x-1.4.es.po',
            'timestamp' => 1441353360,
            'directory' => 'translations://',
            'last_checked' => 1441353360,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'field_permissions' => array(
      'ar' => (object) array(
        'name' => 'field_permissions',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-beta2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'field_permissions',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353090,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'field_permissions',
            'langcode' => 'ar',
            'version' => '7.x-1.0-beta2',
            'type' => 'remote',
            'filename' => 'field_permissions-7.x-1.0-beta2.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/field_permissions/field_permissions-7.x-1.0-beta2.ar.po',
            'timestamp' => 1379403747,
          ),
          'local' => (object) array(
            'project' => 'field_permissions',
            'langcode' => 'ar',
            'version' => '7.x-1.0-beta2',
            'type' => 'local',
            'filename' => 'field_permissions-7.x-1.0-beta2.ar.po',
            'uri' => 'translations://field_permissions-7.x-1.0-beta2.ar.po',
            'timestamp' => 1441353090,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'field_permissions',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-beta2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'field_permissions',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353162,
        'last_checked' => 1441353161,
        'files' => array(
          'remote' => (object) array(
            'project' => 'field_permissions',
            'langcode' => 'fr',
            'version' => '7.x-1.0-beta2',
            'type' => 'remote',
            'filename' => 'field_permissions-7.x-1.0-beta2.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/field_permissions/field_permissions-7.x-1.0-beta2.fr.po',
            'timestamp' => 1372819869,
          ),
          'local' => (object) array(
            'project' => 'field_permissions',
            'langcode' => 'fr',
            'version' => '7.x-1.0-beta2',
            'type' => 'local',
            'filename' => 'field_permissions-7.x-1.0-beta2.fr.po',
            'uri' => 'translations://field_permissions-7.x-1.0-beta2.fr.po',
            'timestamp' => 1441353162,
            'directory' => 'translations://',
            'last_checked' => 1441353161,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'field_permissions',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-beta2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'field_permissions',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353264,
        'last_checked' => 1441353263,
        'files' => array(
          'remote' => (object) array(
            'project' => 'field_permissions',
            'langcode' => 'ru',
            'version' => '7.x-1.0-beta2',
            'type' => 'remote',
            'filename' => 'field_permissions-7.x-1.0-beta2.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/field_permissions/field_permissions-7.x-1.0-beta2.ru.po',
            'timestamp' => 1422383185,
          ),
          'local' => (object) array(
            'project' => 'field_permissions',
            'langcode' => 'ru',
            'version' => '7.x-1.0-beta2',
            'type' => 'local',
            'filename' => 'field_permissions-7.x-1.0-beta2.ru.po',
            'uri' => 'translations://field_permissions-7.x-1.0-beta2.ru.po',
            'timestamp' => 1441353264,
            'directory' => 'translations://',
            'last_checked' => 1441353263,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'field_permissions',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-beta2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'field_permissions',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353361,
        'last_checked' => 1441353360,
        'files' => array(
          'remote' => (object) array(
            'project' => 'field_permissions',
            'langcode' => 'es',
            'version' => '7.x-1.0-beta2',
            'type' => 'remote',
            'filename' => 'field_permissions-7.x-1.0-beta2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/field_permissions/field_permissions-7.x-1.0-beta2.es.po',
            'timestamp' => 1356917669,
          ),
          'local' => (object) array(
            'project' => 'field_permissions',
            'langcode' => 'es',
            'version' => '7.x-1.0-beta2',
            'type' => 'local',
            'filename' => 'field_permissions-7.x-1.0-beta2.es.po',
            'uri' => 'translations://field_permissions-7.x-1.0-beta2.es.po',
            'timestamp' => 1441353361,
            'directory' => 'translations://',
            'last_checked' => 1441353360,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'globalredirect' => array(
      'ar' => (object) array(
        'name' => 'globalredirect',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'globalredirect',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353090,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'globalredirect',
            'langcode' => 'ar',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'globalredirect-7.x-1.5.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/globalredirect/globalredirect-7.x-1.5.ar.po',
            'timestamp' => 1370435020,
          ),
          'local' => (object) array(
            'project' => 'globalredirect',
            'langcode' => 'ar',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'globalredirect-7.x-1.5.ar.po',
            'uri' => 'translations://globalredirect-7.x-1.5.ar.po',
            'timestamp' => 1441353090,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'globalredirect',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'globalredirect',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353163,
        'last_checked' => 1441353163,
        'files' => array(
          'remote' => (object) array(
            'project' => 'globalredirect',
            'langcode' => 'fr',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'globalredirect-7.x-1.5.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/globalredirect/globalredirect-7.x-1.5.fr.po',
            'timestamp' => 1434867483,
          ),
          'local' => (object) array(
            'project' => 'globalredirect',
            'langcode' => 'fr',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'globalredirect-7.x-1.5.fr.po',
            'uri' => 'translations://globalredirect-7.x-1.5.fr.po',
            'timestamp' => 1441353163,
            'directory' => 'translations://',
            'last_checked' => 1441353163,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'globalredirect',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'globalredirect',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353264,
        'last_checked' => 1441353263,
        'files' => array(
          'remote' => (object) array(
            'project' => 'globalredirect',
            'langcode' => 'ru',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'globalredirect-7.x-1.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/globalredirect/globalredirect-7.x-1.5.ru.po',
            'timestamp' => 1436896340,
          ),
          'local' => (object) array(
            'project' => 'globalredirect',
            'langcode' => 'ru',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'globalredirect-7.x-1.5.ru.po',
            'uri' => 'translations://globalredirect-7.x-1.5.ru.po',
            'timestamp' => 1441353264,
            'directory' => 'translations://',
            'last_checked' => 1441353263,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'globalredirect',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'globalredirect',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353361,
        'last_checked' => 1441353360,
        'files' => array(
          'remote' => (object) array(
            'project' => 'globalredirect',
            'langcode' => 'es',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'globalredirect-7.x-1.5.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/globalredirect/globalredirect-7.x-1.5.es.po',
            'timestamp' => 1440210244,
          ),
          'local' => (object) array(
            'project' => 'globalredirect',
            'langcode' => 'es',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'globalredirect-7.x-1.5.es.po',
            'uri' => 'translations://globalredirect-7.x-1.5.es.po',
            'timestamp' => 1441353361,
            'directory' => 'translations://',
            'last_checked' => 1441353360,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'i18n' => array(
      'ar' => (object) array(
        'name' => 'i18n',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.13',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'i18n',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353090,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'i18n',
            'langcode' => 'ar',
            'version' => '7.x-1.13',
            'type' => 'remote',
            'filename' => 'i18n-7.x-1.13.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/i18n/i18n-7.x-1.13.ar.po',
            'timestamp' => 1431240698,
          ),
          'local' => (object) array(
            'project' => 'i18n',
            'langcode' => 'ar',
            'version' => '7.x-1.13',
            'type' => 'local',
            'filename' => 'i18n-7.x-1.13.ar.po',
            'uri' => 'translations://i18n-7.x-1.13.ar.po',
            'timestamp' => 1441353090,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'i18n',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.13',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'i18n',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353163,
        'last_checked' => 1441353165,
        'files' => array(
          'remote' => (object) array(
            'project' => 'i18n',
            'langcode' => 'fr',
            'version' => '7.x-1.13',
            'type' => 'remote',
            'filename' => 'i18n-7.x-1.13.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/i18n/i18n-7.x-1.13.fr.po',
            'timestamp' => 1434484823,
          ),
          'local' => (object) array(
            'project' => 'i18n',
            'langcode' => 'fr',
            'version' => '7.x-1.13',
            'type' => 'local',
            'filename' => 'i18n-7.x-1.13.fr.po',
            'uri' => 'translations://i18n-7.x-1.13.fr.po',
            'timestamp' => 1441353163,
            'directory' => 'translations://',
            'last_checked' => 1441353165,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'i18n',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.13',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'i18n',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353264,
        'last_checked' => 1441353265,
        'files' => array(
          'remote' => (object) array(
            'project' => 'i18n',
            'langcode' => 'ru',
            'version' => '7.x-1.13',
            'type' => 'remote',
            'filename' => 'i18n-7.x-1.13.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/i18n/i18n-7.x-1.13.ru.po',
            'timestamp' => 1438697787,
          ),
          'local' => (object) array(
            'project' => 'i18n',
            'langcode' => 'ru',
            'version' => '7.x-1.13',
            'type' => 'local',
            'filename' => 'i18n-7.x-1.13.ru.po',
            'uri' => 'translations://i18n-7.x-1.13.ru.po',
            'timestamp' => 1441353264,
            'directory' => 'translations://',
            'last_checked' => 1441353265,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'i18n',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.13',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'i18n',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353362,
        'last_checked' => 1441353363,
        'files' => array(
          'remote' => (object) array(
            'project' => 'i18n',
            'langcode' => 'es',
            'version' => '7.x-1.13',
            'type' => 'remote',
            'filename' => 'i18n-7.x-1.13.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/i18n/i18n-7.x-1.13.es.po',
            'timestamp' => 1434831022,
          ),
          'local' => (object) array(
            'project' => 'i18n',
            'langcode' => 'es',
            'version' => '7.x-1.13',
            'type' => 'local',
            'filename' => 'i18n-7.x-1.13.es.po',
            'uri' => 'translations://i18n-7.x-1.13.es.po',
            'timestamp' => 1441353362,
            'directory' => 'translations://',
            'last_checked' => 1441353363,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'i18nviews' => array(
      'ar' => (object) array(
        'name' => 'i18nviews',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.x-dev',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'i18nviews',
        'langcode' => 'ar',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'i18nviews',
            'langcode' => 'ar',
            'version' => '7.x-3.x-dev',
            'type' => 'remote',
            'filename' => 'i18nviews-7.x-3.x-dev.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/i18nviews/i18nviews-7.x-3.x-dev.ar.po',
          ),
          'local' => (object) array(
            'project' => 'i18nviews',
            'langcode' => 'ar',
            'version' => '7.x-3.x-dev',
            'type' => 'local',
            'filename' => 'i18nviews-7.x-3.x-dev.ar.po',
            'directory' => 'translations://',
            'uri' => 'translations://i18nviews-7.x-3.x-dev.ar.po',
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'i18nviews',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.x-dev',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'i18nviews',
        'langcode' => 'fr',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'i18nviews',
            'langcode' => 'fr',
            'version' => '7.x-3.x-dev',
            'type' => 'remote',
            'filename' => 'i18nviews-7.x-3.x-dev.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/i18nviews/i18nviews-7.x-3.x-dev.fr.po',
          ),
          'local' => (object) array(
            'project' => 'i18nviews',
            'langcode' => 'fr',
            'version' => '7.x-3.x-dev',
            'type' => 'local',
            'filename' => 'i18nviews-7.x-3.x-dev.fr.po',
            'directory' => 'translations://',
            'uri' => 'translations://i18nviews-7.x-3.x-dev.fr.po',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'i18nviews',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.x-dev',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'i18nviews',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'i18nviews',
            'langcode' => 'ru',
            'version' => '7.x-3.x-dev',
            'type' => 'remote',
            'filename' => 'i18nviews-7.x-3.x-dev.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/i18nviews/i18nviews-7.x-3.x-dev.ru.po',
          ),
          'local' => (object) array(
            'project' => 'i18nviews',
            'langcode' => 'ru',
            'version' => '7.x-3.x-dev',
            'type' => 'local',
            'filename' => 'i18nviews-7.x-3.x-dev.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://i18nviews-7.x-3.x-dev.ru.po',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'i18nviews',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.x-dev',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'i18nviews',
        'langcode' => 'es',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'i18nviews',
            'langcode' => 'es',
            'version' => '7.x-3.x-dev',
            'type' => 'remote',
            'filename' => 'i18nviews-7.x-3.x-dev.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/i18nviews/i18nviews-7.x-3.x-dev.es.po',
          ),
          'local' => (object) array(
            'project' => 'i18nviews',
            'langcode' => 'es',
            'version' => '7.x-3.x-dev',
            'type' => 'local',
            'filename' => 'i18nviews-7.x-3.x-dev.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://i18nviews-7.x-3.x-dev.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'imce' => array(
      'ar' => (object) array(
        'name' => 'imce',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'imce',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353090,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'imce',
            'langcode' => 'ar',
            'version' => '7.x-1.9',
            'type' => 'remote',
            'filename' => 'imce-7.x-1.9.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/imce/imce-7.x-1.9.ar.po',
            'timestamp' => 1400316139,
          ),
          'local' => (object) array(
            'project' => 'imce',
            'langcode' => 'ar',
            'version' => '7.x-1.9',
            'type' => 'local',
            'filename' => 'imce-7.x-1.9.ar.po',
            'uri' => 'translations://imce-7.x-1.9.ar.po',
            'timestamp' => 1441353090,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'imce',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'imce',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353165,
        'last_checked' => 1441353165,
        'files' => array(
          'remote' => (object) array(
            'project' => 'imce',
            'langcode' => 'fr',
            'version' => '7.x-1.9',
            'type' => 'remote',
            'filename' => 'imce-7.x-1.9.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/imce/imce-7.x-1.9.fr.po',
            'timestamp' => 1400316145,
          ),
          'local' => (object) array(
            'project' => 'imce',
            'langcode' => 'fr',
            'version' => '7.x-1.9',
            'type' => 'local',
            'filename' => 'imce-7.x-1.9.fr.po',
            'uri' => 'translations://imce-7.x-1.9.fr.po',
            'timestamp' => 1441353165,
            'directory' => 'translations://',
            'last_checked' => 1441353165,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'imce',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'imce',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353265,
        'last_checked' => 1441353265,
        'files' => array(
          'remote' => (object) array(
            'project' => 'imce',
            'langcode' => 'ru',
            'version' => '7.x-1.9',
            'type' => 'remote',
            'filename' => 'imce-7.x-1.9.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/imce/imce-7.x-1.9.ru.po',
            'timestamp' => 1437693688,
          ),
          'local' => (object) array(
            'project' => 'imce',
            'langcode' => 'ru',
            'version' => '7.x-1.9',
            'type' => 'local',
            'filename' => 'imce-7.x-1.9.ru.po',
            'uri' => 'translations://imce-7.x-1.9.ru.po',
            'timestamp' => 1441353265,
            'directory' => 'translations://',
            'last_checked' => 1441353265,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'imce',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'imce',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353364,
        'last_checked' => 1441353363,
        'files' => array(
          'remote' => (object) array(
            'project' => 'imce',
            'langcode' => 'es',
            'version' => '7.x-1.9',
            'type' => 'remote',
            'filename' => 'imce-7.x-1.9.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/imce/imce-7.x-1.9.es.po',
            'timestamp' => 1429213696,
          ),
          'local' => (object) array(
            'project' => 'imce',
            'langcode' => 'es',
            'version' => '7.x-1.9',
            'type' => 'local',
            'filename' => 'imce-7.x-1.9.es.po',
            'uri' => 'translations://imce-7.x-1.9.es.po',
            'timestamp' => 1441353364,
            'directory' => 'translations://',
            'last_checked' => 1441353363,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'imce_wysiwyg' => array(
      'ar' => (object) array(
        'name' => 'imce_wysiwyg',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'imce_wysiwyg',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353090,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'imce_wysiwyg',
            'langcode' => 'ar',
            'version' => '7.x-1.0',
            'type' => 'remote',
            'filename' => 'imce_wysiwyg-7.x-1.0.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/imce_wysiwyg/imce_wysiwyg-7.x-1.0.ar.po',
            'timestamp' => 1317938169,
          ),
          'local' => (object) array(
            'project' => 'imce_wysiwyg',
            'langcode' => 'ar',
            'version' => '7.x-1.0',
            'type' => 'local',
            'filename' => 'imce_wysiwyg-7.x-1.0.ar.po',
            'uri' => 'translations://imce_wysiwyg-7.x-1.0.ar.po',
            'timestamp' => 1441353090,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'imce_wysiwyg',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'imce_wysiwyg',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353166,
        'last_checked' => 1441353165,
        'files' => array(
          'remote' => (object) array(
            'project' => 'imce_wysiwyg',
            'langcode' => 'fr',
            'version' => '7.x-1.0',
            'type' => 'remote',
            'filename' => 'imce_wysiwyg-7.x-1.0.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/imce_wysiwyg/imce_wysiwyg-7.x-1.0.fr.po',
            'timestamp' => 1317938170,
          ),
          'local' => (object) array(
            'project' => 'imce_wysiwyg',
            'langcode' => 'fr',
            'version' => '7.x-1.0',
            'type' => 'local',
            'filename' => 'imce_wysiwyg-7.x-1.0.fr.po',
            'uri' => 'translations://imce_wysiwyg-7.x-1.0.fr.po',
            'timestamp' => 1441353166,
            'directory' => 'translations://',
            'last_checked' => 1441353165,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'imce_wysiwyg',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'imce_wysiwyg',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353266,
        'last_checked' => 1441353265,
        'files' => array(
          'remote' => (object) array(
            'project' => 'imce_wysiwyg',
            'langcode' => 'ru',
            'version' => '7.x-1.0',
            'type' => 'remote',
            'filename' => 'imce_wysiwyg-7.x-1.0.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/imce_wysiwyg/imce_wysiwyg-7.x-1.0.ru.po',
            'timestamp' => 1431195628,
          ),
          'local' => (object) array(
            'project' => 'imce_wysiwyg',
            'langcode' => 'ru',
            'version' => '7.x-1.0',
            'type' => 'local',
            'filename' => 'imce_wysiwyg-7.x-1.0.ru.po',
            'uri' => 'translations://imce_wysiwyg-7.x-1.0.ru.po',
            'timestamp' => 1441353266,
            'directory' => 'translations://',
            'last_checked' => 1441353265,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'imce_wysiwyg',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'imce_wysiwyg',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353364,
        'last_checked' => 1441353363,
        'files' => array(
          'remote' => (object) array(
            'project' => 'imce_wysiwyg',
            'langcode' => 'es',
            'version' => '7.x-1.0',
            'type' => 'remote',
            'filename' => 'imce_wysiwyg-7.x-1.0.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/imce_wysiwyg/imce_wysiwyg-7.x-1.0.es.po',
            'timestamp' => 1358410299,
          ),
          'local' => (object) array(
            'project' => 'imce_wysiwyg',
            'langcode' => 'es',
            'version' => '7.x-1.0',
            'type' => 'local',
            'filename' => 'imce_wysiwyg-7.x-1.0.es.po',
            'uri' => 'translations://imce_wysiwyg-7.x-1.0.es.po',
            'timestamp' => 1441353364,
            'directory' => 'translations://',
            'last_checked' => 1441353363,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'jquery_update' => array(
      'ar' => (object) array(
        'name' => 'jquery_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-alpha2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'jquery_update',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353090,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'ar',
            'version' => '7.x-3.0-alpha2',
            'type' => 'remote',
            'filename' => 'jquery_update-7.x-3.0-alpha2.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/jquery_update/jquery_update-7.x-3.0-alpha2.ar.po',
            'timestamp' => 1432978174,
          ),
          'local' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'ar',
            'version' => '7.x-3.0-alpha2',
            'type' => 'local',
            'filename' => 'jquery_update-7.x-3.0-alpha2.ar.po',
            'uri' => 'translations://jquery_update-7.x-3.0-alpha2.ar.po',
            'timestamp' => 1441353090,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'jquery_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-alpha2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'jquery_update',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353166,
        'last_checked' => 1441353165,
        'files' => array(
          'remote' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'fr',
            'version' => '7.x-3.0-alpha2',
            'type' => 'remote',
            'filename' => 'jquery_update-7.x-3.0-alpha2.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/jquery_update/jquery_update-7.x-3.0-alpha2.fr.po',
            'timestamp' => 1432978183,
          ),
          'local' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'fr',
            'version' => '7.x-3.0-alpha2',
            'type' => 'local',
            'filename' => 'jquery_update-7.x-3.0-alpha2.fr.po',
            'uri' => 'translations://jquery_update-7.x-3.0-alpha2.fr.po',
            'timestamp' => 1441353166,
            'directory' => 'translations://',
            'last_checked' => 1441353165,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'jquery_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-alpha2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'jquery_update',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353266,
        'last_checked' => 1441353266,
        'files' => array(
          'remote' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'ru',
            'version' => '7.x-3.0-alpha2',
            'type' => 'remote',
            'filename' => 'jquery_update-7.x-3.0-alpha2.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/jquery_update/jquery_update-7.x-3.0-alpha2.ru.po',
            'timestamp' => 1437648759,
          ),
          'local' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'ru',
            'version' => '7.x-3.0-alpha2',
            'type' => 'local',
            'filename' => 'jquery_update-7.x-3.0-alpha2.ru.po',
            'uri' => 'translations://jquery_update-7.x-3.0-alpha2.ru.po',
            'timestamp' => 1441353266,
            'directory' => 'translations://',
            'last_checked' => 1441353266,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'jquery_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-alpha2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'jquery_update',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353364,
        'last_checked' => 1441353363,
        'files' => array(
          'remote' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'es',
            'version' => '7.x-3.0-alpha2',
            'type' => 'remote',
            'filename' => 'jquery_update-7.x-3.0-alpha2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/jquery_update/jquery_update-7.x-3.0-alpha2.es.po',
            'timestamp' => 1432978200,
          ),
          'local' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'es',
            'version' => '7.x-3.0-alpha2',
            'type' => 'local',
            'filename' => 'jquery_update-7.x-3.0-alpha2.es.po',
            'uri' => 'translations://jquery_update-7.x-3.0-alpha2.es.po',
            'timestamp' => 1441353364,
            'directory' => 'translations://',
            'last_checked' => 1441353363,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'l10n_update' => array(
      'ar' => (object) array(
        'name' => 'l10n_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'l10n_update',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353090,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'ar',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'l10n_update-7.x-2.0.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/l10n_update/l10n_update-7.x-2.0.ar.po',
            'timestamp' => 1415702910,
          ),
          'local' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'ar',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'l10n_update-7.x-2.0.ar.po',
            'uri' => 'translations://l10n_update-7.x-2.0.ar.po',
            'timestamp' => 1441353090,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'l10n_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'l10n_update',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353166,
        'last_checked' => 1441353165,
        'files' => array(
          'remote' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'fr',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'l10n_update-7.x-2.0.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/l10n_update/l10n_update-7.x-2.0.fr.po',
            'timestamp' => 1435509782,
          ),
          'local' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'fr',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'l10n_update-7.x-2.0.fr.po',
            'uri' => 'translations://l10n_update-7.x-2.0.fr.po',
            'timestamp' => 1441353166,
            'directory' => 'translations://',
            'last_checked' => 1441353165,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'l10n_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'l10n_update',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353267,
        'last_checked' => 1441353266,
        'files' => array(
          'remote' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'ru',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'l10n_update-7.x-2.0.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/l10n_update/l10n_update-7.x-2.0.ru.po',
            'timestamp' => 1439419483,
          ),
          'local' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'ru',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'l10n_update-7.x-2.0.ru.po',
            'uri' => 'translations://l10n_update-7.x-2.0.ru.po',
            'timestamp' => 1441353267,
            'directory' => 'translations://',
            'last_checked' => 1441353266,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'l10n_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'l10n_update',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353365,
        'last_checked' => 1441353363,
        'files' => array(
          'remote' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'l10n_update-7.x-2.0.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/l10n_update/l10n_update-7.x-2.0.es.po',
            'timestamp' => 1441306141,
          ),
          'local' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'l10n_update-7.x-2.0.es.po',
            'uri' => 'translations://l10n_update-7.x-2.0.es.po',
            'timestamp' => 1441353365,
            'directory' => 'translations://',
            'last_checked' => 1441353363,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'libraries' => array(
      'ar' => (object) array(
        'name' => 'libraries',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'libraries',
        'langcode' => 'ar',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'libraries',
            'langcode' => 'ar',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'libraries-7.x-2.2.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/libraries/libraries-7.x-2.2.ar.po',
          ),
          'local' => (object) array(
            'project' => 'libraries',
            'langcode' => 'ar',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'libraries-7.x-2.2.ar.po',
            'directory' => 'translations://',
            'uri' => 'translations://libraries-7.x-2.2.ar.po',
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'libraries',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'libraries',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353166,
        'last_checked' => 1441353167,
        'files' => array(
          'remote' => (object) array(
            'project' => 'libraries',
            'langcode' => 'fr',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'libraries-7.x-2.2.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/libraries/libraries-7.x-2.2.fr.po',
            'timestamp' => 1391968896,
          ),
          'local' => (object) array(
            'project' => 'libraries',
            'langcode' => 'fr',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'libraries-7.x-2.2.fr.po',
            'uri' => 'translations://libraries-7.x-2.2.fr.po',
            'timestamp' => 1441353166,
            'directory' => 'translations://',
            'last_checked' => 1441353167,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'libraries',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'libraries',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353267,
        'last_checked' => 1441353266,
        'files' => array(
          'remote' => (object) array(
            'project' => 'libraries',
            'langcode' => 'ru',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'libraries-7.x-2.2.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/libraries/libraries-7.x-2.2.ru.po',
            'timestamp' => 1391968899,
          ),
          'local' => (object) array(
            'project' => 'libraries',
            'langcode' => 'ru',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'libraries-7.x-2.2.ru.po',
            'uri' => 'translations://libraries-7.x-2.2.ru.po',
            'timestamp' => 1441353267,
            'directory' => 'translations://',
            'last_checked' => 1441353266,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'libraries',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'libraries',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353366,
        'last_checked' => 1441353365,
        'files' => array(
          'remote' => (object) array(
            'project' => 'libraries',
            'langcode' => 'es',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'libraries-7.x-2.2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/libraries/libraries-7.x-2.2.es.po',
            'timestamp' => 1416679033,
          ),
          'local' => (object) array(
            'project' => 'libraries',
            'langcode' => 'es',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'libraries-7.x-2.2.es.po',
            'uri' => 'translations://libraries-7.x-2.2.es.po',
            'timestamp' => 1441353366,
            'directory' => 'translations://',
            'last_checked' => 1441353365,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'link' => array(
      'ar' => (object) array(
        'name' => 'link',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'link',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353091,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'link',
            'langcode' => 'ar',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'link-7.x-1.3.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/link/link-7.x-1.3.ar.po',
            'timestamp' => 1413972508,
          ),
          'local' => (object) array(
            'project' => 'link',
            'langcode' => 'ar',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'link-7.x-1.3.ar.po',
            'uri' => 'translations://link-7.x-1.3.ar.po',
            'timestamp' => 1441353091,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'link',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'link',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353167,
        'last_checked' => 1441353167,
        'files' => array(
          'remote' => (object) array(
            'project' => 'link',
            'langcode' => 'fr',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'link-7.x-1.3.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/link/link-7.x-1.3.fr.po',
            'timestamp' => 1413972521,
          ),
          'local' => (object) array(
            'project' => 'link',
            'langcode' => 'fr',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'link-7.x-1.3.fr.po',
            'uri' => 'translations://link-7.x-1.3.fr.po',
            'timestamp' => 1441353167,
            'directory' => 'translations://',
            'last_checked' => 1441353167,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'link',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'link',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353267,
        'last_checked' => 1441353266,
        'files' => array(
          'remote' => (object) array(
            'project' => 'link',
            'langcode' => 'ru',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'link-7.x-1.3.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/link/link-7.x-1.3.ru.po',
            'timestamp' => 1439499558,
          ),
          'local' => (object) array(
            'project' => 'link',
            'langcode' => 'ru',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'link-7.x-1.3.ru.po',
            'uri' => 'translations://link-7.x-1.3.ru.po',
            'timestamp' => 1441353267,
            'directory' => 'translations://',
            'last_checked' => 1441353266,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'link',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'link',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353366,
        'last_checked' => 1441353365,
        'files' => array(
          'remote' => (object) array(
            'project' => 'link',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'link-7.x-1.3.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/link/link-7.x-1.3.es.po',
            'timestamp' => 1416654495,
          ),
          'local' => (object) array(
            'project' => 'link',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'link-7.x-1.3.es.po',
            'uri' => 'translations://link-7.x-1.3.es.po',
            'timestamp' => 1441353366,
            'directory' => 'translations://',
            'last_checked' => 1441353365,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'mailchimp' => array(
      'ar' => (object) array(
        'name' => 'mailchimp',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'mailchimp',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353091,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'mailchimp',
            'langcode' => 'ar',
            'version' => '7.x-3.4',
            'type' => 'remote',
            'filename' => 'mailchimp-7.x-3.4.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/mailchimp/mailchimp-7.x-3.4.ar.po',
            'timestamp' => 1434954367,
          ),
          'local' => (object) array(
            'project' => 'mailchimp',
            'langcode' => 'ar',
            'version' => '7.x-3.4',
            'type' => 'local',
            'filename' => 'mailchimp-7.x-3.4.ar.po',
            'uri' => 'translations://mailchimp-7.x-3.4.ar.po',
            'timestamp' => 1441353091,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'mailchimp',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'mailchimp',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353167,
        'last_checked' => 1441353167,
        'files' => array(
          'remote' => (object) array(
            'project' => 'mailchimp',
            'langcode' => 'fr',
            'version' => '7.x-3.4',
            'type' => 'remote',
            'filename' => 'mailchimp-7.x-3.4.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/mailchimp/mailchimp-7.x-3.4.fr.po',
            'timestamp' => 1434954375,
          ),
          'local' => (object) array(
            'project' => 'mailchimp',
            'langcode' => 'fr',
            'version' => '7.x-3.4',
            'type' => 'local',
            'filename' => 'mailchimp-7.x-3.4.fr.po',
            'uri' => 'translations://mailchimp-7.x-3.4.fr.po',
            'timestamp' => 1441353167,
            'directory' => 'translations://',
            'last_checked' => 1441353167,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'mailchimp',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'mailchimp',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353267,
        'last_checked' => 1441353266,
        'files' => array(
          'remote' => (object) array(
            'project' => 'mailchimp',
            'langcode' => 'ru',
            'version' => '7.x-3.4',
            'type' => 'remote',
            'filename' => 'mailchimp-7.x-3.4.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/mailchimp/mailchimp-7.x-3.4.ru.po',
            'timestamp' => 1439653756,
          ),
          'local' => (object) array(
            'project' => 'mailchimp',
            'langcode' => 'ru',
            'version' => '7.x-3.4',
            'type' => 'local',
            'filename' => 'mailchimp-7.x-3.4.ru.po',
            'uri' => 'translations://mailchimp-7.x-3.4.ru.po',
            'timestamp' => 1441353267,
            'directory' => 'translations://',
            'last_checked' => 1441353266,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'mailchimp',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'mailchimp',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353366,
        'last_checked' => 1441353365,
        'files' => array(
          'remote' => (object) array(
            'project' => 'mailchimp',
            'langcode' => 'es',
            'version' => '7.x-3.4',
            'type' => 'remote',
            'filename' => 'mailchimp-7.x-3.4.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/mailchimp/mailchimp-7.x-3.4.es.po',
            'timestamp' => 1434954394,
          ),
          'local' => (object) array(
            'project' => 'mailchimp',
            'langcode' => 'es',
            'version' => '7.x-3.4',
            'type' => 'local',
            'filename' => 'mailchimp-7.x-3.4.es.po',
            'uri' => 'translations://mailchimp-7.x-3.4.es.po',
            'timestamp' => 1441353366,
            'directory' => 'translations://',
            'last_checked' => 1441353365,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'metatag' => array(
      'ar' => (object) array(
        'name' => 'metatag',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'metatag',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353091,
        'last_checked' => 1441353090,
        'files' => array(
          'remote' => (object) array(
            'project' => 'metatag',
            'langcode' => 'ar',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'metatag-7.x-1.7.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/metatag/metatag-7.x-1.7.ar.po',
            'timestamp' => 1437992805,
          ),
          'local' => (object) array(
            'project' => 'metatag',
            'langcode' => 'ar',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'metatag-7.x-1.7.ar.po',
            'uri' => 'translations://metatag-7.x-1.7.ar.po',
            'timestamp' => 1441353091,
            'directory' => 'translations://',
            'last_checked' => 1441353090,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'metatag',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'metatag',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353168,
        'last_checked' => 1441353169,
        'files' => array(
          'remote' => (object) array(
            'project' => 'metatag',
            'langcode' => 'fr',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'metatag-7.x-1.7.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/metatag/metatag-7.x-1.7.fr.po',
            'timestamp' => 1437992818,
          ),
          'local' => (object) array(
            'project' => 'metatag',
            'langcode' => 'fr',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'metatag-7.x-1.7.fr.po',
            'uri' => 'translations://metatag-7.x-1.7.fr.po',
            'timestamp' => 1441353168,
            'directory' => 'translations://',
            'last_checked' => 1441353169,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'metatag',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'metatag',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353267,
        'last_checked' => 1441353268,
        'files' => array(
          'remote' => (object) array(
            'project' => 'metatag',
            'langcode' => 'ru',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'metatag-7.x-1.7.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/metatag/metatag-7.x-1.7.ru.po',
            'timestamp' => 1439767559,
          ),
          'local' => (object) array(
            'project' => 'metatag',
            'langcode' => 'ru',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'metatag-7.x-1.7.ru.po',
            'uri' => 'translations://metatag-7.x-1.7.ru.po',
            'timestamp' => 1441353267,
            'directory' => 'translations://',
            'last_checked' => 1441353268,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'metatag',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'metatag',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353366,
        'last_checked' => 1441353365,
        'files' => array(
          'remote' => (object) array(
            'project' => 'metatag',
            'langcode' => 'es',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'metatag-7.x-1.7.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/metatag/metatag-7.x-1.7.es.po',
            'timestamp' => 1440314943,
          ),
          'local' => (object) array(
            'project' => 'metatag',
            'langcode' => 'es',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'metatag-7.x-1.7.es.po',
            'uri' => 'translations://metatag-7.x-1.7.es.po',
            'timestamp' => 1441353366,
            'directory' => 'translations://',
            'last_checked' => 1441353365,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'modernizr' => array(
      'ar' => (object) array(
        'name' => 'modernizr',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'modernizr',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353092,
        'last_checked' => 1441353091,
        'files' => array(
          'remote' => (object) array(
            'project' => 'modernizr',
            'langcode' => 'ar',
            'version' => '7.x-3.4',
            'type' => 'remote',
            'filename' => 'modernizr-7.x-3.4.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/modernizr/modernizr-7.x-3.4.ar.po',
            'timestamp' => 1421666211,
          ),
          'local' => (object) array(
            'project' => 'modernizr',
            'langcode' => 'ar',
            'version' => '7.x-3.4',
            'type' => 'local',
            'filename' => 'modernizr-7.x-3.4.ar.po',
            'uri' => 'translations://modernizr-7.x-3.4.ar.po',
            'timestamp' => 1441353092,
            'directory' => 'translations://',
            'last_checked' => 1441353091,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'modernizr',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'modernizr',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353169,
        'last_checked' => 1441353169,
        'files' => array(
          'remote' => (object) array(
            'project' => 'modernizr',
            'langcode' => 'fr',
            'version' => '7.x-3.4',
            'type' => 'remote',
            'filename' => 'modernizr-7.x-3.4.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/modernizr/modernizr-7.x-3.4.fr.po',
            'timestamp' => 1421666217,
          ),
          'local' => (object) array(
            'project' => 'modernizr',
            'langcode' => 'fr',
            'version' => '7.x-3.4',
            'type' => 'local',
            'filename' => 'modernizr-7.x-3.4.fr.po',
            'uri' => 'translations://modernizr-7.x-3.4.fr.po',
            'timestamp' => 1441353169,
            'directory' => 'translations://',
            'last_checked' => 1441353169,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'modernizr',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'modernizr',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353269,
        'last_checked' => 1441353268,
        'files' => array(
          'remote' => (object) array(
            'project' => 'modernizr',
            'langcode' => 'ru',
            'version' => '7.x-3.4',
            'type' => 'remote',
            'filename' => 'modernizr-7.x-3.4.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/modernizr/modernizr-7.x-3.4.ru.po',
            'timestamp' => 1421666226,
          ),
          'local' => (object) array(
            'project' => 'modernizr',
            'langcode' => 'ru',
            'version' => '7.x-3.4',
            'type' => 'local',
            'filename' => 'modernizr-7.x-3.4.ru.po',
            'uri' => 'translations://modernizr-7.x-3.4.ru.po',
            'timestamp' => 1441353269,
            'directory' => 'translations://',
            'last_checked' => 1441353268,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'modernizr',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'modernizr',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353366,
        'last_checked' => 1441353365,
        'files' => array(
          'remote' => (object) array(
            'project' => 'modernizr',
            'langcode' => 'es',
            'version' => '7.x-3.4',
            'type' => 'remote',
            'filename' => 'modernizr-7.x-3.4.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/modernizr/modernizr-7.x-3.4.es.po',
            'timestamp' => 1421666226,
          ),
          'local' => (object) array(
            'project' => 'modernizr',
            'langcode' => 'es',
            'version' => '7.x-3.4',
            'type' => 'local',
            'filename' => 'modernizr-7.x-3.4.es.po',
            'uri' => 'translations://modernizr-7.x-3.4.es.po',
            'timestamp' => 1441353366,
            'directory' => 'translations://',
            'last_checked' => 1441353365,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'owlcarousel' => array(
      'ar' => (object) array(
        'name' => 'owlcarousel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'owlcarousel',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353092,
        'last_checked' => 1441353091,
        'files' => array(
          'remote' => (object) array(
            'project' => 'owlcarousel',
            'langcode' => 'ar',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'owlcarousel-7.x-1.4.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/owlcarousel/owlcarousel-7.x-1.4.ar.po',
            'timestamp' => 1427173983,
          ),
          'local' => (object) array(
            'project' => 'owlcarousel',
            'langcode' => 'ar',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'owlcarousel-7.x-1.4.ar.po',
            'uri' => 'translations://owlcarousel-7.x-1.4.ar.po',
            'timestamp' => 1441353092,
            'directory' => 'translations://',
            'last_checked' => 1441353091,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'owlcarousel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'owlcarousel',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353169,
        'last_checked' => 1441353169,
        'files' => array(
          'remote' => (object) array(
            'project' => 'owlcarousel',
            'langcode' => 'fr',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'owlcarousel-7.x-1.4.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/owlcarousel/owlcarousel-7.x-1.4.fr.po',
            'timestamp' => 1427173993,
          ),
          'local' => (object) array(
            'project' => 'owlcarousel',
            'langcode' => 'fr',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'owlcarousel-7.x-1.4.fr.po',
            'uri' => 'translations://owlcarousel-7.x-1.4.fr.po',
            'timestamp' => 1441353169,
            'directory' => 'translations://',
            'last_checked' => 1441353169,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'owlcarousel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'owlcarousel',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353269,
        'last_checked' => 1441353268,
        'files' => array(
          'remote' => (object) array(
            'project' => 'owlcarousel',
            'langcode' => 'ru',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'owlcarousel-7.x-1.4.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/owlcarousel/owlcarousel-7.x-1.4.ru.po',
            'timestamp' => 1438802439,
          ),
          'local' => (object) array(
            'project' => 'owlcarousel',
            'langcode' => 'ru',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'owlcarousel-7.x-1.4.ru.po',
            'uri' => 'translations://owlcarousel-7.x-1.4.ru.po',
            'timestamp' => 1441353269,
            'directory' => 'translations://',
            'last_checked' => 1441353268,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'owlcarousel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'owlcarousel',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353367,
        'last_checked' => 1441353367,
        'files' => array(
          'remote' => (object) array(
            'project' => 'owlcarousel',
            'langcode' => 'es',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'owlcarousel-7.x-1.4.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/owlcarousel/owlcarousel-7.x-1.4.es.po',
            'timestamp' => 1427174013,
          ),
          'local' => (object) array(
            'project' => 'owlcarousel',
            'langcode' => 'es',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'owlcarousel-7.x-1.4.es.po',
            'uri' => 'translations://owlcarousel-7.x-1.4.es.po',
            'timestamp' => 1441353367,
            'directory' => 'translations://',
            'last_checked' => 1441353367,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'pathauto' => array(
      'ar' => (object) array(
        'name' => 'pathauto',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'pathauto',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353092,
        'last_checked' => 1441353091,
        'files' => array(
          'remote' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'ar',
            'version' => '7.x-1.2',
            'type' => 'remote',
            'filename' => 'pathauto-7.x-1.2.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/pathauto/pathauto-7.x-1.2.ar.po',
            'timestamp' => 1395018245,
          ),
          'local' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'ar',
            'version' => '7.x-1.2',
            'type' => 'local',
            'filename' => 'pathauto-7.x-1.2.ar.po',
            'uri' => 'translations://pathauto-7.x-1.2.ar.po',
            'timestamp' => 1441353092,
            'directory' => 'translations://',
            'last_checked' => 1441353091,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'pathauto',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'pathauto',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353169,
        'last_checked' => 1441353169,
        'files' => array(
          'remote' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'fr',
            'version' => '7.x-1.2',
            'type' => 'remote',
            'filename' => 'pathauto-7.x-1.2.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/pathauto/pathauto-7.x-1.2.fr.po',
            'timestamp' => 1407265926,
          ),
          'local' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'fr',
            'version' => '7.x-1.2',
            'type' => 'local',
            'filename' => 'pathauto-7.x-1.2.fr.po',
            'uri' => 'translations://pathauto-7.x-1.2.fr.po',
            'timestamp' => 1441353169,
            'directory' => 'translations://',
            'last_checked' => 1441353169,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'pathauto',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'pathauto',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353269,
        'last_checked' => 1441353268,
        'files' => array(
          'remote' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'ru',
            'version' => '7.x-1.2',
            'type' => 'remote',
            'filename' => 'pathauto-7.x-1.2.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/pathauto/pathauto-7.x-1.2.ru.po',
            'timestamp' => 1429133811,
          ),
          'local' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'ru',
            'version' => '7.x-1.2',
            'type' => 'local',
            'filename' => 'pathauto-7.x-1.2.ru.po',
            'uri' => 'translations://pathauto-7.x-1.2.ru.po',
            'timestamp' => 1441353269,
            'directory' => 'translations://',
            'last_checked' => 1441353268,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'pathauto',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'pathauto',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353367,
        'last_checked' => 1441353367,
        'files' => array(
          'remote' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'es',
            'version' => '7.x-1.2',
            'type' => 'remote',
            'filename' => 'pathauto-7.x-1.2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/pathauto/pathauto-7.x-1.2.es.po',
            'timestamp' => 1434575147,
          ),
          'local' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'es',
            'version' => '7.x-1.2',
            'type' => 'local',
            'filename' => 'pathauto-7.x-1.2.es.po',
            'uri' => 'translations://pathauto-7.x-1.2.es.po',
            'timestamp' => 1441353367,
            'directory' => 'translations://',
            'last_checked' => 1441353367,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'quicktabs' => array(
      'ar' => (object) array(
        'name' => 'quicktabs',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'quicktabs',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353092,
        'last_checked' => 1441353091,
        'files' => array(
          'remote' => (object) array(
            'project' => 'quicktabs',
            'langcode' => 'ar',
            'version' => '7.x-3.6',
            'type' => 'remote',
            'filename' => 'quicktabs-7.x-3.6.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/quicktabs/quicktabs-7.x-3.6.ar.po',
            'timestamp' => 1415415027,
          ),
          'local' => (object) array(
            'project' => 'quicktabs',
            'langcode' => 'ar',
            'version' => '7.x-3.6',
            'type' => 'local',
            'filename' => 'quicktabs-7.x-3.6.ar.po',
            'uri' => 'translations://quicktabs-7.x-3.6.ar.po',
            'timestamp' => 1441353092,
            'directory' => 'translations://',
            'last_checked' => 1441353091,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'quicktabs',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'quicktabs',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353170,
        'last_checked' => 1441353169,
        'files' => array(
          'remote' => (object) array(
            'project' => 'quicktabs',
            'langcode' => 'fr',
            'version' => '7.x-3.6',
            'type' => 'remote',
            'filename' => 'quicktabs-7.x-3.6.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/quicktabs/quicktabs-7.x-3.6.fr.po',
            'timestamp' => 1405187363,
          ),
          'local' => (object) array(
            'project' => 'quicktabs',
            'langcode' => 'fr',
            'version' => '7.x-3.6',
            'type' => 'local',
            'filename' => 'quicktabs-7.x-3.6.fr.po',
            'uri' => 'translations://quicktabs-7.x-3.6.fr.po',
            'timestamp' => 1441353170,
            'directory' => 'translations://',
            'last_checked' => 1441353169,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'quicktabs',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'quicktabs',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353269,
        'last_checked' => 1441353270,
        'files' => array(
          'remote' => (object) array(
            'project' => 'quicktabs',
            'langcode' => 'ru',
            'version' => '7.x-3.6',
            'type' => 'remote',
            'filename' => 'quicktabs-7.x-3.6.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/quicktabs/quicktabs-7.x-3.6.ru.po',
            'timestamp' => 1436633453,
          ),
          'local' => (object) array(
            'project' => 'quicktabs',
            'langcode' => 'ru',
            'version' => '7.x-3.6',
            'type' => 'local',
            'filename' => 'quicktabs-7.x-3.6.ru.po',
            'uri' => 'translations://quicktabs-7.x-3.6.ru.po',
            'timestamp' => 1441353269,
            'directory' => 'translations://',
            'last_checked' => 1441353270,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'quicktabs',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'quicktabs',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353368,
        'last_checked' => 1441353367,
        'files' => array(
          'remote' => (object) array(
            'project' => 'quicktabs',
            'langcode' => 'es',
            'version' => '7.x-3.6',
            'type' => 'remote',
            'filename' => 'quicktabs-7.x-3.6.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/quicktabs/quicktabs-7.x-3.6.es.po',
            'timestamp' => 1391098518,
          ),
          'local' => (object) array(
            'project' => 'quicktabs',
            'langcode' => 'es',
            'version' => '7.x-3.6',
            'type' => 'local',
            'filename' => 'quicktabs-7.x-3.6.es.po',
            'uri' => 'translations://quicktabs-7.x-3.6.es.po',
            'timestamp' => 1441353368,
            'directory' => 'translations://',
            'last_checked' => 1441353367,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'redirect' => array(
      'ar' => (object) array(
        'name' => 'redirect',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-rc3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'redirect',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353092,
        'last_checked' => 1441353091,
        'files' => array(
          'remote' => (object) array(
            'project' => 'redirect',
            'langcode' => 'ar',
            'version' => '7.x-1.0-rc3',
            'type' => 'remote',
            'filename' => 'redirect-7.x-1.0-rc3.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/redirect/redirect-7.x-1.0-rc3.ar.po',
            'timestamp' => 1436600052,
          ),
          'local' => (object) array(
            'project' => 'redirect',
            'langcode' => 'ar',
            'version' => '7.x-1.0-rc3',
            'type' => 'local',
            'filename' => 'redirect-7.x-1.0-rc3.ar.po',
            'uri' => 'translations://redirect-7.x-1.0-rc3.ar.po',
            'timestamp' => 1441353092,
            'directory' => 'translations://',
            'last_checked' => 1441353091,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'redirect',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-rc3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'redirect',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353171,
        'last_checked' => 1441353171,
        'files' => array(
          'remote' => (object) array(
            'project' => 'redirect',
            'langcode' => 'fr',
            'version' => '7.x-1.0-rc3',
            'type' => 'remote',
            'filename' => 'redirect-7.x-1.0-rc3.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/redirect/redirect-7.x-1.0-rc3.fr.po',
            'timestamp' => 1436600069,
          ),
          'local' => (object) array(
            'project' => 'redirect',
            'langcode' => 'fr',
            'version' => '7.x-1.0-rc3',
            'type' => 'local',
            'filename' => 'redirect-7.x-1.0-rc3.fr.po',
            'uri' => 'translations://redirect-7.x-1.0-rc3.fr.po',
            'timestamp' => 1441353171,
            'directory' => 'translations://',
            'last_checked' => 1441353171,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'redirect',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-rc3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'redirect',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353271,
        'last_checked' => 1441353270,
        'files' => array(
          'remote' => (object) array(
            'project' => 'redirect',
            'langcode' => 'ru',
            'version' => '7.x-1.0-rc3',
            'type' => 'remote',
            'filename' => 'redirect-7.x-1.0-rc3.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/redirect/redirect-7.x-1.0-rc3.ru.po',
            'timestamp' => 1437664545,
          ),
          'local' => (object) array(
            'project' => 'redirect',
            'langcode' => 'ru',
            'version' => '7.x-1.0-rc3',
            'type' => 'local',
            'filename' => 'redirect-7.x-1.0-rc3.ru.po',
            'uri' => 'translations://redirect-7.x-1.0-rc3.ru.po',
            'timestamp' => 1441353271,
            'directory' => 'translations://',
            'last_checked' => 1441353270,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'redirect',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-rc3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'redirect',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353368,
        'last_checked' => 1441353367,
        'files' => array(
          'remote' => (object) array(
            'project' => 'redirect',
            'langcode' => 'es',
            'version' => '7.x-1.0-rc3',
            'type' => 'remote',
            'filename' => 'redirect-7.x-1.0-rc3.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/redirect/redirect-7.x-1.0-rc3.es.po',
            'timestamp' => 1436600104,
          ),
          'local' => (object) array(
            'project' => 'redirect',
            'langcode' => 'es',
            'version' => '7.x-1.0-rc3',
            'type' => 'local',
            'filename' => 'redirect-7.x-1.0-rc3.es.po',
            'uri' => 'translations://redirect-7.x-1.0-rc3.es.po',
            'timestamp' => 1441353368,
            'directory' => 'translations://',
            'last_checked' => 1441353367,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'respondjs' => array(
      'ar' => (object) array(
        'name' => 'respondjs',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'respondjs',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353092,
        'last_checked' => 1441353091,
        'files' => array(
          'remote' => (object) array(
            'project' => 'respondjs',
            'langcode' => 'ar',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'respondjs-7.x-1.5.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/respondjs/respondjs-7.x-1.5.ar.po',
            'timestamp' => 1426232052,
          ),
          'local' => (object) array(
            'project' => 'respondjs',
            'langcode' => 'ar',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'respondjs-7.x-1.5.ar.po',
            'uri' => 'translations://respondjs-7.x-1.5.ar.po',
            'timestamp' => 1441353092,
            'directory' => 'translations://',
            'last_checked' => 1441353091,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'respondjs',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'respondjs',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353171,
        'last_checked' => 1441353171,
        'files' => array(
          'remote' => (object) array(
            'project' => 'respondjs',
            'langcode' => 'fr',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'respondjs-7.x-1.5.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/respondjs/respondjs-7.x-1.5.fr.po',
            'timestamp' => 1426232061,
          ),
          'local' => (object) array(
            'project' => 'respondjs',
            'langcode' => 'fr',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'respondjs-7.x-1.5.fr.po',
            'uri' => 'translations://respondjs-7.x-1.5.fr.po',
            'timestamp' => 1441353171,
            'directory' => 'translations://',
            'last_checked' => 1441353171,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'respondjs',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'respondjs',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353271,
        'last_checked' => 1441353270,
        'files' => array(
          'remote' => (object) array(
            'project' => 'respondjs',
            'langcode' => 'ru',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'respondjs-7.x-1.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/respondjs/respondjs-7.x-1.5.ru.po',
            'timestamp' => 1438792264,
          ),
          'local' => (object) array(
            'project' => 'respondjs',
            'langcode' => 'ru',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'respondjs-7.x-1.5.ru.po',
            'uri' => 'translations://respondjs-7.x-1.5.ru.po',
            'timestamp' => 1441353271,
            'directory' => 'translations://',
            'last_checked' => 1441353270,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'respondjs',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'respondjs',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353368,
        'last_checked' => 1441353367,
        'files' => array(
          'remote' => (object) array(
            'project' => 'respondjs',
            'langcode' => 'es',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'respondjs-7.x-1.5.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/respondjs/respondjs-7.x-1.5.es.po',
            'timestamp' => 1426232080,
          ),
          'local' => (object) array(
            'project' => 'respondjs',
            'langcode' => 'es',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'respondjs-7.x-1.5.es.po',
            'uri' => 'translations://respondjs-7.x-1.5.es.po',
            'timestamp' => 1441353368,
            'directory' => 'translations://',
            'last_checked' => 1441353367,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'rules' => array(
      'ar' => (object) array(
        'name' => 'rules',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'rules',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353092,
        'last_checked' => 1441353091,
        'files' => array(
          'remote' => (object) array(
            'project' => 'rules',
            'langcode' => 'ar',
            'version' => '7.x-2.9',
            'type' => 'remote',
            'filename' => 'rules-7.x-2.9.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/rules/rules-7.x-2.9.ar.po',
            'timestamp' => 1426572759,
          ),
          'local' => (object) array(
            'project' => 'rules',
            'langcode' => 'ar',
            'version' => '7.x-2.9',
            'type' => 'local',
            'filename' => 'rules-7.x-2.9.ar.po',
            'uri' => 'translations://rules-7.x-2.9.ar.po',
            'timestamp' => 1441353092,
            'directory' => 'translations://',
            'last_checked' => 1441353091,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'rules',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'rules',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353171,
        'last_checked' => 1441353174,
        'files' => array(
          'remote' => (object) array(
            'project' => 'rules',
            'langcode' => 'fr',
            'version' => '7.x-2.9',
            'type' => 'remote',
            'filename' => 'rules-7.x-2.9.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/rules/rules-7.x-2.9.fr.po',
            'timestamp' => 1436997308,
          ),
          'local' => (object) array(
            'project' => 'rules',
            'langcode' => 'fr',
            'version' => '7.x-2.9',
            'type' => 'local',
            'filename' => 'rules-7.x-2.9.fr.po',
            'uri' => 'translations://rules-7.x-2.9.fr.po',
            'timestamp' => 1441353171,
            'directory' => 'translations://',
            'last_checked' => 1441353174,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'rules',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'rules',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353271,
        'last_checked' => 1441353272,
        'files' => array(
          'remote' => (object) array(
            'project' => 'rules',
            'langcode' => 'ru',
            'version' => '7.x-2.9',
            'type' => 'remote',
            'filename' => 'rules-7.x-2.9.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/rules/rules-7.x-2.9.ru.po',
            'timestamp' => 1439668454,
          ),
          'local' => (object) array(
            'project' => 'rules',
            'langcode' => 'ru',
            'version' => '7.x-2.9',
            'type' => 'local',
            'filename' => 'rules-7.x-2.9.ru.po',
            'uri' => 'translations://rules-7.x-2.9.ru.po',
            'timestamp' => 1441353271,
            'directory' => 'translations://',
            'last_checked' => 1441353272,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'rules',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'rules',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353368,
        'last_checked' => 1441353369,
        'files' => array(
          'remote' => (object) array(
            'project' => 'rules',
            'langcode' => 'es',
            'version' => '7.x-2.9',
            'type' => 'remote',
            'filename' => 'rules-7.x-2.9.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/rules/rules-7.x-2.9.es.po',
            'timestamp' => 1434666828,
          ),
          'local' => (object) array(
            'project' => 'rules',
            'langcode' => 'es',
            'version' => '7.x-2.9',
            'type' => 'local',
            'filename' => 'rules-7.x-2.9.es.po',
            'uri' => 'translations://rules-7.x-2.9.es.po',
            'timestamp' => 1441353368,
            'directory' => 'translations://',
            'last_checked' => 1441353369,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'social_stats' => array(
      'ar' => (object) array(
        'name' => 'social_stats',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'social_stats',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353092,
        'last_checked' => 1441353091,
        'files' => array(
          'remote' => (object) array(
            'project' => 'social_stats',
            'langcode' => 'ar',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'social_stats-7.x-1.7.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/social_stats/social_stats-7.x-1.7.ar.po',
            'timestamp' => 1416227898,
          ),
          'local' => (object) array(
            'project' => 'social_stats',
            'langcode' => 'ar',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'social_stats-7.x-1.7.ar.po',
            'uri' => 'translations://social_stats-7.x-1.7.ar.po',
            'timestamp' => 1441353092,
            'directory' => 'translations://',
            'last_checked' => 1441353091,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'social_stats',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'social_stats',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353175,
        'last_checked' => 1441353174,
        'files' => array(
          'remote' => (object) array(
            'project' => 'social_stats',
            'langcode' => 'fr',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'social_stats-7.x-1.7.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/social_stats/social_stats-7.x-1.7.fr.po',
            'timestamp' => 1416227903,
          ),
          'local' => (object) array(
            'project' => 'social_stats',
            'langcode' => 'fr',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'social_stats-7.x-1.7.fr.po',
            'uri' => 'translations://social_stats-7.x-1.7.fr.po',
            'timestamp' => 1441353175,
            'directory' => 'translations://',
            'last_checked' => 1441353174,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'social_stats',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'social_stats',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353273,
        'last_checked' => 1441353272,
        'files' => array(
          'remote' => (object) array(
            'project' => 'social_stats',
            'langcode' => 'ru',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'social_stats-7.x-1.7.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/social_stats/social_stats-7.x-1.7.ru.po',
            'timestamp' => 1416227914,
          ),
          'local' => (object) array(
            'project' => 'social_stats',
            'langcode' => 'ru',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'social_stats-7.x-1.7.ru.po',
            'uri' => 'translations://social_stats-7.x-1.7.ru.po',
            'timestamp' => 1441353273,
            'directory' => 'translations://',
            'last_checked' => 1441353272,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'social_stats',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'social_stats',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353371,
        'last_checked' => 1441353371,
        'files' => array(
          'remote' => (object) array(
            'project' => 'social_stats',
            'langcode' => 'es',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'social_stats-7.x-1.7.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/social_stats/social_stats-7.x-1.7.es.po',
            'timestamp' => 1416227915,
          ),
          'local' => (object) array(
            'project' => 'social_stats',
            'langcode' => 'es',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'social_stats-7.x-1.7.es.po',
            'uri' => 'translations://social_stats-7.x-1.7.es.po',
            'timestamp' => 1441353371,
            'directory' => 'translations://',
            'last_checked' => 1441353371,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'soundcloudfield' => array(
      'ar' => (object) array(
        'name' => 'soundcloudfield',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'soundcloudfield',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353092,
        'last_checked' => 1441353091,
        'files' => array(
          'remote' => (object) array(
            'project' => 'soundcloudfield',
            'langcode' => 'ar',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'soundcloudfield-7.x-1.4.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/soundcloudfield/soundcloudfield-7.x-1.4.ar.po',
            'timestamp' => 1394605310,
          ),
          'local' => (object) array(
            'project' => 'soundcloudfield',
            'langcode' => 'ar',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'soundcloudfield-7.x-1.4.ar.po',
            'uri' => 'translations://soundcloudfield-7.x-1.4.ar.po',
            'timestamp' => 1441353092,
            'directory' => 'translations://',
            'last_checked' => 1441353091,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'soundcloudfield',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'soundcloudfield',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353175,
        'last_checked' => 1441353174,
        'files' => array(
          'remote' => (object) array(
            'project' => 'soundcloudfield',
            'langcode' => 'fr',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'soundcloudfield-7.x-1.4.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/soundcloudfield/soundcloudfield-7.x-1.4.fr.po',
            'timestamp' => 1394605319,
          ),
          'local' => (object) array(
            'project' => 'soundcloudfield',
            'langcode' => 'fr',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'soundcloudfield-7.x-1.4.fr.po',
            'uri' => 'translations://soundcloudfield-7.x-1.4.fr.po',
            'timestamp' => 1441353175,
            'directory' => 'translations://',
            'last_checked' => 1441353174,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'soundcloudfield',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'soundcloudfield',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353274,
        'last_checked' => 1441353272,
        'files' => array(
          'remote' => (object) array(
            'project' => 'soundcloudfield',
            'langcode' => 'ru',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'soundcloudfield-7.x-1.4.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/soundcloudfield/soundcloudfield-7.x-1.4.ru.po',
            'timestamp' => 1394605336,
          ),
          'local' => (object) array(
            'project' => 'soundcloudfield',
            'langcode' => 'ru',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'soundcloudfield-7.x-1.4.ru.po',
            'uri' => 'translations://soundcloudfield-7.x-1.4.ru.po',
            'timestamp' => 1441353274,
            'directory' => 'translations://',
            'last_checked' => 1441353272,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'soundcloudfield',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'soundcloudfield',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353371,
        'last_checked' => 1441353371,
        'files' => array(
          'remote' => (object) array(
            'project' => 'soundcloudfield',
            'langcode' => 'es',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'soundcloudfield-7.x-1.4.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/soundcloudfield/soundcloudfield-7.x-1.4.es.po',
            'timestamp' => 1412903179,
          ),
          'local' => (object) array(
            'project' => 'soundcloudfield',
            'langcode' => 'es',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'soundcloudfield-7.x-1.4.es.po',
            'uri' => 'translations://soundcloudfield-7.x-1.4.es.po',
            'timestamp' => 1441353371,
            'directory' => 'translations://',
            'last_checked' => 1441353371,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'strongarm' => array(
      'ar' => (object) array(
        'name' => 'strongarm',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'strongarm',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1442417398,
        'last_checked' => 1442417397,
        'files' => array(
          'remote' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'ar',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'strongarm-7.x-2.0.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/strongarm/strongarm-7.x-2.0.ar.po',
            'timestamp' => 1379250468,
          ),
          'local' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'ar',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'strongarm-7.x-2.0.ar.po',
            'uri' => 'translations://strongarm-7.x-2.0.ar.po',
            'timestamp' => 1442417398,
            'directory' => 'translations://',
            'last_checked' => 1442417397,
            'language' => 'ar',
          ),
        ),
        'language' => 'ar',
      ),
      'fr' => (object) array(
        'name' => 'strongarm',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'strongarm',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1442417398,
        'last_checked' => 1442417397,
        'files' => array(
          'remote' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'fr',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'strongarm-7.x-2.0.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/strongarm/strongarm-7.x-2.0.fr.po',
            'timestamp' => 1346083921,
          ),
          'local' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'fr',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'strongarm-7.x-2.0.fr.po',
            'uri' => 'translations://strongarm-7.x-2.0.fr.po',
            'timestamp' => 1442417398,
            'directory' => 'translations://',
            'last_checked' => 1442417397,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
      ),
      'ru' => (object) array(
        'name' => 'strongarm',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'strongarm',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1442417398,
        'last_checked' => 1442417397,
        'files' => array(
          'remote' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'ru',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'strongarm-7.x-2.0.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/strongarm/strongarm-7.x-2.0.ru.po',
            'timestamp' => 1339605246,
          ),
          'local' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'ru',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'strongarm-7.x-2.0.ru.po',
            'uri' => 'translations://strongarm-7.x-2.0.ru.po',
            'timestamp' => 1442417398,
            'directory' => 'translations://',
            'last_checked' => 1442417397,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
      ),
      'es' => (object) array(
        'name' => 'strongarm',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'strongarm',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1442417398,
        'last_checked' => 1442417397,
        'files' => array(
          'remote' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'strongarm-7.x-2.0.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/strongarm/strongarm-7.x-2.0.es.po',
            'timestamp' => 1358528431,
          ),
          'local' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'strongarm-7.x-2.0.es.po',
            'uri' => 'translations://strongarm-7.x-2.0.es.po',
            'timestamp' => 1442417398,
            'directory' => 'translations://',
            'last_checked' => 1442417397,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
      ),
    ),
    'taxonomy_term_statistics' => array(
      'ar' => (object) array(
        'name' => 'taxonomy_term_statistics',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.x-dev',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'taxonomy_term_statistics',
        'langcode' => 'ar',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'taxonomy_term_statistics',
            'langcode' => 'ar',
            'version' => '7.x-1.x-dev',
            'type' => 'remote',
            'filename' => 'taxonomy_term_statistics-7.x-1.x-dev.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/taxonomy_term_statistics/taxonomy_term_statistics-7.x-1.x-dev.ar.po',
          ),
          'local' => (object) array(
            'project' => 'taxonomy_term_statistics',
            'langcode' => 'ar',
            'version' => '7.x-1.x-dev',
            'type' => 'local',
            'filename' => 'taxonomy_term_statistics-7.x-1.x-dev.ar.po',
            'directory' => 'translations://',
            'uri' => 'translations://taxonomy_term_statistics-7.x-1.x-dev.ar.po',
          ),
        ),
        'language' => 'ar',
      ),
      'fr' => (object) array(
        'name' => 'taxonomy_term_statistics',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.x-dev',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'taxonomy_term_statistics',
        'langcode' => 'fr',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'taxonomy_term_statistics',
            'langcode' => 'fr',
            'version' => '7.x-1.x-dev',
            'type' => 'remote',
            'filename' => 'taxonomy_term_statistics-7.x-1.x-dev.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/taxonomy_term_statistics/taxonomy_term_statistics-7.x-1.x-dev.fr.po',
          ),
          'local' => (object) array(
            'project' => 'taxonomy_term_statistics',
            'langcode' => 'fr',
            'version' => '7.x-1.x-dev',
            'type' => 'local',
            'filename' => 'taxonomy_term_statistics-7.x-1.x-dev.fr.po',
            'directory' => 'translations://',
            'uri' => 'translations://taxonomy_term_statistics-7.x-1.x-dev.fr.po',
          ),
        ),
        'language' => 'fr',
      ),
      'ru' => (object) array(
        'name' => 'taxonomy_term_statistics',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.x-dev',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'taxonomy_term_statistics',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'taxonomy_term_statistics',
            'langcode' => 'ru',
            'version' => '7.x-1.x-dev',
            'type' => 'remote',
            'filename' => 'taxonomy_term_statistics-7.x-1.x-dev.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/taxonomy_term_statistics/taxonomy_term_statistics-7.x-1.x-dev.ru.po',
          ),
          'local' => (object) array(
            'project' => 'taxonomy_term_statistics',
            'langcode' => 'ru',
            'version' => '7.x-1.x-dev',
            'type' => 'local',
            'filename' => 'taxonomy_term_statistics-7.x-1.x-dev.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://taxonomy_term_statistics-7.x-1.x-dev.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
      'es' => (object) array(
        'name' => 'taxonomy_term_statistics',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.x-dev',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'taxonomy_term_statistics',
        'langcode' => 'es',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'taxonomy_term_statistics',
            'langcode' => 'es',
            'version' => '7.x-1.x-dev',
            'type' => 'remote',
            'filename' => 'taxonomy_term_statistics-7.x-1.x-dev.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/taxonomy_term_statistics/taxonomy_term_statistics-7.x-1.x-dev.es.po',
          ),
          'local' => (object) array(
            'project' => 'taxonomy_term_statistics',
            'langcode' => 'es',
            'version' => '7.x-1.x-dev',
            'type' => 'local',
            'filename' => 'taxonomy_term_statistics-7.x-1.x-dev.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://taxonomy_term_statistics-7.x-1.x-dev.es.po',
          ),
        ),
        'language' => 'es',
      ),
    ),
    'token' => array(
      'ar' => (object) array(
        'name' => 'token',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'token',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353093,
        'last_checked' => 1441353093,
        'files' => array(
          'remote' => (object) array(
            'project' => 'token',
            'langcode' => 'ar',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'token-7.x-1.6.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/token/token-7.x-1.6.ar.po',
            'timestamp' => 1425362379,
          ),
          'local' => (object) array(
            'project' => 'token',
            'langcode' => 'ar',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'token-7.x-1.6.ar.po',
            'uri' => 'translations://token-7.x-1.6.ar.po',
            'timestamp' => 1441353093,
            'directory' => 'translations://',
            'last_checked' => 1441353093,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'token',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'token',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353175,
        'last_checked' => 1441353174,
        'files' => array(
          'remote' => (object) array(
            'project' => 'token',
            'langcode' => 'fr',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'token-7.x-1.6.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/token/token-7.x-1.6.fr.po',
            'timestamp' => 1425362388,
          ),
          'local' => (object) array(
            'project' => 'token',
            'langcode' => 'fr',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'token-7.x-1.6.fr.po',
            'uri' => 'translations://token-7.x-1.6.fr.po',
            'timestamp' => 1441353175,
            'directory' => 'translations://',
            'last_checked' => 1441353174,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'token',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'token',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353274,
        'last_checked' => 1441353274,
        'files' => array(
          'remote' => (object) array(
            'project' => 'token',
            'langcode' => 'ru',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'token-7.x-1.6.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/token/token-7.x-1.6.ru.po',
            'timestamp' => 1438121463,
          ),
          'local' => (object) array(
            'project' => 'token',
            'langcode' => 'ru',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'token-7.x-1.6.ru.po',
            'uri' => 'translations://token-7.x-1.6.ru.po',
            'timestamp' => 1441353274,
            'directory' => 'translations://',
            'last_checked' => 1441353274,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'token',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'token',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353371,
        'last_checked' => 1441353371,
        'files' => array(
          'remote' => (object) array(
            'project' => 'token',
            'langcode' => 'es',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'token-7.x-1.6.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/token/token-7.x-1.6.es.po',
            'timestamp' => 1434665058,
          ),
          'local' => (object) array(
            'project' => 'token',
            'langcode' => 'es',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'token-7.x-1.6.es.po',
            'uri' => 'translations://token-7.x-1.6.es.po',
            'timestamp' => 1441353371,
            'directory' => 'translations://',
            'last_checked' => 1441353371,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'transliteration' => array(
      'ar' => (object) array(
        'name' => 'transliteration',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'transliteration',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353093,
        'last_checked' => 1441353093,
        'files' => array(
          'remote' => (object) array(
            'project' => 'transliteration',
            'langcode' => 'ar',
            'version' => '7.x-3.2',
            'type' => 'remote',
            'filename' => 'transliteration-7.x-3.2.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/transliteration/transliteration-7.x-3.2.ar.po',
            'timestamp' => 1395167030,
          ),
          'local' => (object) array(
            'project' => 'transliteration',
            'langcode' => 'ar',
            'version' => '7.x-3.2',
            'type' => 'local',
            'filename' => 'transliteration-7.x-3.2.ar.po',
            'uri' => 'translations://transliteration-7.x-3.2.ar.po',
            'timestamp' => 1441353093,
            'directory' => 'translations://',
            'last_checked' => 1441353093,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'transliteration',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'transliteration',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353176,
        'last_checked' => 1441353176,
        'files' => array(
          'remote' => (object) array(
            'project' => 'transliteration',
            'langcode' => 'fr',
            'version' => '7.x-3.2',
            'type' => 'remote',
            'filename' => 'transliteration-7.x-3.2.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/transliteration/transliteration-7.x-3.2.fr.po',
            'timestamp' => 1395167036,
          ),
          'local' => (object) array(
            'project' => 'transliteration',
            'langcode' => 'fr',
            'version' => '7.x-3.2',
            'type' => 'local',
            'filename' => 'transliteration-7.x-3.2.fr.po',
            'uri' => 'translations://transliteration-7.x-3.2.fr.po',
            'timestamp' => 1441353176,
            'directory' => 'translations://',
            'last_checked' => 1441353176,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'transliteration',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'transliteration',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353275,
        'last_checked' => 1441353274,
        'files' => array(
          'remote' => (object) array(
            'project' => 'transliteration',
            'langcode' => 'ru',
            'version' => '7.x-3.2',
            'type' => 'remote',
            'filename' => 'transliteration-7.x-3.2.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/transliteration/transliteration-7.x-3.2.ru.po',
            'timestamp' => 1437225546,
          ),
          'local' => (object) array(
            'project' => 'transliteration',
            'langcode' => 'ru',
            'version' => '7.x-3.2',
            'type' => 'local',
            'filename' => 'transliteration-7.x-3.2.ru.po',
            'uri' => 'translations://transliteration-7.x-3.2.ru.po',
            'timestamp' => 1441353275,
            'directory' => 'translations://',
            'last_checked' => 1441353274,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'transliteration',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'transliteration',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353371,
        'last_checked' => 1441353371,
        'files' => array(
          'remote' => (object) array(
            'project' => 'transliteration',
            'langcode' => 'es',
            'version' => '7.x-3.2',
            'type' => 'remote',
            'filename' => 'transliteration-7.x-3.2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/transliteration/transliteration-7.x-3.2.es.po',
            'timestamp' => 1434577163,
          ),
          'local' => (object) array(
            'project' => 'transliteration',
            'langcode' => 'es',
            'version' => '7.x-3.2',
            'type' => 'local',
            'filename' => 'transliteration-7.x-3.2.es.po',
            'uri' => 'translations://transliteration-7.x-3.2.es.po',
            'timestamp' => 1441353371,
            'directory' => 'translations://',
            'last_checked' => 1441353371,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'variable' => array(
      'ar' => (object) array(
        'name' => 'variable',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'variable',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353093,
        'last_checked' => 1441353093,
        'files' => array(
          'remote' => (object) array(
            'project' => 'variable',
            'langcode' => 'ar',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'variable-7.x-2.5.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/variable/variable-7.x-2.5.ar.po',
            'timestamp' => 1415398929,
          ),
          'local' => (object) array(
            'project' => 'variable',
            'langcode' => 'ar',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'variable-7.x-2.5.ar.po',
            'uri' => 'translations://variable-7.x-2.5.ar.po',
            'timestamp' => 1441353093,
            'directory' => 'translations://',
            'last_checked' => 1441353093,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'variable',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'variable',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353176,
        'last_checked' => 1441353176,
        'files' => array(
          'remote' => (object) array(
            'project' => 'variable',
            'langcode' => 'fr',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'variable-7.x-2.5.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/variable/variable-7.x-2.5.fr.po',
            'timestamp' => 1422117091,
          ),
          'local' => (object) array(
            'project' => 'variable',
            'langcode' => 'fr',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'variable-7.x-2.5.fr.po',
            'uri' => 'translations://variable-7.x-2.5.fr.po',
            'timestamp' => 1441353176,
            'directory' => 'translations://',
            'last_checked' => 1441353176,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'variable',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'variable',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353275,
        'last_checked' => 1441353274,
        'files' => array(
          'remote' => (object) array(
            'project' => 'variable',
            'langcode' => 'ru',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'variable-7.x-2.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/variable/variable-7.x-2.5.ru.po',
            'timestamp' => 1438112223,
          ),
          'local' => (object) array(
            'project' => 'variable',
            'langcode' => 'ru',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'variable-7.x-2.5.ru.po',
            'uri' => 'translations://variable-7.x-2.5.ru.po',
            'timestamp' => 1441353275,
            'directory' => 'translations://',
            'last_checked' => 1441353274,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'variable',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'variable',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353372,
        'last_checked' => 1441353372,
        'files' => array(
          'remote' => (object) array(
            'project' => 'variable',
            'langcode' => 'es',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'variable-7.x-2.5.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/variable/variable-7.x-2.5.es.po',
            'timestamp' => 1411707412,
          ),
          'local' => (object) array(
            'project' => 'variable',
            'langcode' => 'es',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'variable-7.x-2.5.es.po',
            'uri' => 'translations://variable-7.x-2.5.es.po',
            'timestamp' => 1441353372,
            'directory' => 'translations://',
            'last_checked' => 1441353372,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'video_embed_field' => array(
      'ar' => (object) array(
        'name' => 'video_embed_field',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0-beta10',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'video_embed_field',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353094,
        'last_checked' => 1441353093,
        'files' => array(
          'remote' => (object) array(
            'project' => 'video_embed_field',
            'langcode' => 'ar',
            'version' => '7.x-2.0-beta10',
            'type' => 'remote',
            'filename' => 'video_embed_field-7.x-2.0-beta10.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/video_embed_field/video_embed_field-7.x-2.0-beta10.ar.po',
            'timestamp' => 1434087716,
          ),
          'local' => (object) array(
            'project' => 'video_embed_field',
            'langcode' => 'ar',
            'version' => '7.x-2.0-beta10',
            'type' => 'local',
            'filename' => 'video_embed_field-7.x-2.0-beta10.ar.po',
            'uri' => 'translations://video_embed_field-7.x-2.0-beta10.ar.po',
            'timestamp' => 1441353094,
            'directory' => 'translations://',
            'last_checked' => 1441353093,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'video_embed_field',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0-beta10',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'video_embed_field',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353177,
        'last_checked' => 1441353176,
        'files' => array(
          'remote' => (object) array(
            'project' => 'video_embed_field',
            'langcode' => 'fr',
            'version' => '7.x-2.0-beta10',
            'type' => 'remote',
            'filename' => 'video_embed_field-7.x-2.0-beta10.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/video_embed_field/video_embed_field-7.x-2.0-beta10.fr.po',
            'timestamp' => 1434087726,
          ),
          'local' => (object) array(
            'project' => 'video_embed_field',
            'langcode' => 'fr',
            'version' => '7.x-2.0-beta10',
            'type' => 'local',
            'filename' => 'video_embed_field-7.x-2.0-beta10.fr.po',
            'uri' => 'translations://video_embed_field-7.x-2.0-beta10.fr.po',
            'timestamp' => 1441353177,
            'directory' => 'translations://',
            'last_checked' => 1441353176,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'video_embed_field',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0-beta10',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'video_embed_field',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353275,
        'last_checked' => 1441353276,
        'files' => array(
          'remote' => (object) array(
            'project' => 'video_embed_field',
            'langcode' => 'ru',
            'version' => '7.x-2.0-beta10',
            'type' => 'remote',
            'filename' => 'video_embed_field-7.x-2.0-beta10.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/video_embed_field/video_embed_field-7.x-2.0-beta10.ru.po',
            'timestamp' => 1434087745,
          ),
          'local' => (object) array(
            'project' => 'video_embed_field',
            'langcode' => 'ru',
            'version' => '7.x-2.0-beta10',
            'type' => 'local',
            'filename' => 'video_embed_field-7.x-2.0-beta10.ru.po',
            'uri' => 'translations://video_embed_field-7.x-2.0-beta10.ru.po',
            'timestamp' => 1441353275,
            'directory' => 'translations://',
            'last_checked' => 1441353276,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'video_embed_field',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0-beta10',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'video_embed_field',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353373,
        'last_checked' => 1441353372,
        'files' => array(
          'remote' => (object) array(
            'project' => 'video_embed_field',
            'langcode' => 'es',
            'version' => '7.x-2.0-beta10',
            'type' => 'remote',
            'filename' => 'video_embed_field-7.x-2.0-beta10.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/video_embed_field/video_embed_field-7.x-2.0-beta10.es.po',
            'timestamp' => 1434670106,
          ),
          'local' => (object) array(
            'project' => 'video_embed_field',
            'langcode' => 'es',
            'version' => '7.x-2.0-beta10',
            'type' => 'local',
            'filename' => 'video_embed_field-7.x-2.0-beta10.es.po',
            'uri' => 'translations://video_embed_field-7.x-2.0-beta10.es.po',
            'timestamp' => 1441353373,
            'directory' => 'translations://',
            'last_checked' => 1441353372,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'views' => array(
      'ar' => (object) array(
        'name' => 'views',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.11',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353094,
        'last_checked' => 1441353093,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views',
            'langcode' => 'ar',
            'version' => '7.x-3.11',
            'type' => 'remote',
            'filename' => 'views-7.x-3.11.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views/views-7.x-3.11.ar.po',
            'timestamp' => 1430550958,
          ),
          'local' => (object) array(
            'project' => 'views',
            'langcode' => 'ar',
            'version' => '7.x-3.11',
            'type' => 'local',
            'filename' => 'views-7.x-3.11.ar.po',
            'uri' => 'translations://views-7.x-3.11.ar.po',
            'timestamp' => 1441353094,
            'directory' => 'translations://',
            'last_checked' => 1441353093,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'views',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.11',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353177,
        'last_checked' => 1441353185,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views',
            'langcode' => 'fr',
            'version' => '7.x-3.11',
            'type' => 'remote',
            'filename' => 'views-7.x-3.11.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views/views-7.x-3.11.fr.po',
            'timestamp' => 1434069218,
          ),
          'local' => (object) array(
            'project' => 'views',
            'langcode' => 'fr',
            'version' => '7.x-3.11',
            'type' => 'local',
            'filename' => 'views-7.x-3.11.fr.po',
            'uri' => 'translations://views-7.x-3.11.fr.po',
            'timestamp' => 1441353177,
            'directory' => 'translations://',
            'last_checked' => 1441353185,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'views',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.11',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353276,
        'last_checked' => 1441353282,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views',
            'langcode' => 'ru',
            'version' => '7.x-3.11',
            'type' => 'remote',
            'filename' => 'views-7.x-3.11.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views/views-7.x-3.11.ru.po',
            'timestamp' => 1439774397,
          ),
          'local' => (object) array(
            'project' => 'views',
            'langcode' => 'ru',
            'version' => '7.x-3.11',
            'type' => 'local',
            'filename' => 'views-7.x-3.11.ru.po',
            'uri' => 'translations://views-7.x-3.11.ru.po',
            'timestamp' => 1441353276,
            'directory' => 'translations://',
            'last_checked' => 1441353282,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'views',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.11',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353373,
        'last_checked' => 1441353379,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views',
            'langcode' => 'es',
            'version' => '7.x-3.11',
            'type' => 'remote',
            'filename' => 'views-7.x-3.11.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views/views-7.x-3.11.es.po',
            'timestamp' => 1434681857,
          ),
          'local' => (object) array(
            'project' => 'views',
            'langcode' => 'es',
            'version' => '7.x-3.11',
            'type' => 'local',
            'filename' => 'views-7.x-3.11.es.po',
            'uri' => 'translations://views-7.x-3.11.es.po',
            'timestamp' => 1441353373,
            'directory' => 'translations://',
            'last_checked' => 1441353379,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'views_conditional' => array(
      'ar' => (object) array(
        'name' => 'views_conditional',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_conditional',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353095,
        'last_checked' => 1441353095,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_conditional',
            'langcode' => 'ar',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'views_conditional-7.x-1.3.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views_conditional/views_conditional-7.x-1.3.ar.po',
            'timestamp' => 1421670860,
          ),
          'local' => (object) array(
            'project' => 'views_conditional',
            'langcode' => 'ar',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'views_conditional-7.x-1.3.ar.po',
            'uri' => 'translations://views_conditional-7.x-1.3.ar.po',
            'timestamp' => 1441353095,
            'directory' => 'translations://',
            'last_checked' => 1441353095,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'views_conditional',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_conditional',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353187,
        'last_checked' => 1441353187,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_conditional',
            'langcode' => 'fr',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'views_conditional-7.x-1.3.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views_conditional/views_conditional-7.x-1.3.fr.po',
            'timestamp' => 1421670864,
          ),
          'local' => (object) array(
            'project' => 'views_conditional',
            'langcode' => 'fr',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'views_conditional-7.x-1.3.fr.po',
            'uri' => 'translations://views_conditional-7.x-1.3.fr.po',
            'timestamp' => 1441353187,
            'directory' => 'translations://',
            'last_checked' => 1441353187,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'views_conditional',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_conditional',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353283,
        'last_checked' => 1441353282,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_conditional',
            'langcode' => 'ru',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'views_conditional-7.x-1.3.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views_conditional/views_conditional-7.x-1.3.ru.po',
            'timestamp' => 1421670870,
          ),
          'local' => (object) array(
            'project' => 'views_conditional',
            'langcode' => 'ru',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'views_conditional-7.x-1.3.ru.po',
            'uri' => 'translations://views_conditional-7.x-1.3.ru.po',
            'timestamp' => 1441353283,
            'directory' => 'translations://',
            'last_checked' => 1441353282,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'views_conditional',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_conditional',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353379,
        'last_checked' => 1441353379,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_conditional',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'views_conditional-7.x-1.3.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views_conditional/views_conditional-7.x-1.3.es.po',
            'timestamp' => 1421670870,
          ),
          'local' => (object) array(
            'project' => 'views_conditional',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'views_conditional-7.x-1.3.es.po',
            'uri' => 'translations://views_conditional-7.x-1.3.es.po',
            'timestamp' => 1441353379,
            'directory' => 'translations://',
            'last_checked' => 1441353379,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'views_field_view' => array(
      'ar' => (object) array(
        'name' => 'views_field_view',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_field_view',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353095,
        'last_checked' => 1441353095,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_field_view',
            'langcode' => 'ar',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'views_field_view-7.x-1.1.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views_field_view/views_field_view-7.x-1.1.ar.po',
            'timestamp' => 1395017206,
          ),
          'local' => (object) array(
            'project' => 'views_field_view',
            'langcode' => 'ar',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'views_field_view-7.x-1.1.ar.po',
            'uri' => 'translations://views_field_view-7.x-1.1.ar.po',
            'timestamp' => 1441353095,
            'directory' => 'translations://',
            'last_checked' => 1441353095,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'views_field_view',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_field_view',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353187,
        'last_checked' => 1441353187,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_field_view',
            'langcode' => 'fr',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'views_field_view-7.x-1.1.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views_field_view/views_field_view-7.x-1.1.fr.po',
            'timestamp' => 1369512124,
          ),
          'local' => (object) array(
            'project' => 'views_field_view',
            'langcode' => 'fr',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'views_field_view-7.x-1.1.fr.po',
            'uri' => 'translations://views_field_view-7.x-1.1.fr.po',
            'timestamp' => 1441353187,
            'directory' => 'translations://',
            'last_checked' => 1441353187,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'views_field_view',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_field_view',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353283,
        'last_checked' => 1441353282,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_field_view',
            'langcode' => 'ru',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'views_field_view-7.x-1.1.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views_field_view/views_field_view-7.x-1.1.ru.po',
            'timestamp' => 1439678047,
          ),
          'local' => (object) array(
            'project' => 'views_field_view',
            'langcode' => 'ru',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'views_field_view-7.x-1.1.ru.po',
            'uri' => 'translations://views_field_view-7.x-1.1.ru.po',
            'timestamp' => 1441353283,
            'directory' => 'translations://',
            'last_checked' => 1441353282,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'views_field_view',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_field_view',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353379,
        'last_checked' => 1441353379,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_field_view',
            'langcode' => 'es',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'views_field_view-7.x-1.1.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views_field_view/views_field_view-7.x-1.1.es.po',
            'timestamp' => 1420054762,
          ),
          'local' => (object) array(
            'project' => 'views_field_view',
            'langcode' => 'es',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'views_field_view-7.x-1.1.es.po',
            'uri' => 'translations://views_field_view-7.x-1.1.es.po',
            'timestamp' => 1441353379,
            'directory' => 'translations://',
            'last_checked' => 1441353379,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'wysiwyg' => array(
      'ar' => (object) array(
        'name' => 'wysiwyg',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'wysiwyg',
        'langcode' => 'ar',
        'type' => 'current',
        'timestamp' => 1441353095,
        'last_checked' => 1441353095,
        'files' => array(
          'remote' => (object) array(
            'project' => 'wysiwyg',
            'langcode' => 'ar',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'wysiwyg-7.x-2.2.ar.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/wysiwyg/wysiwyg-7.x-2.2.ar.po',
            'timestamp' => 1395841783,
          ),
          'local' => (object) array(
            'project' => 'wysiwyg',
            'langcode' => 'ar',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'wysiwyg-7.x-2.2.ar.po',
            'uri' => 'translations://wysiwyg-7.x-2.2.ar.po',
            'timestamp' => 1441353095,
            'directory' => 'translations://',
            'last_checked' => 1441353095,
            'language' => 'ar',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'ar',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'fr' => (object) array(
        'name' => 'wysiwyg',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'wysiwyg',
        'langcode' => 'fr',
        'type' => 'current',
        'timestamp' => 1441353187,
        'last_checked' => 1441353187,
        'files' => array(
          'remote' => (object) array(
            'project' => 'wysiwyg',
            'langcode' => 'fr',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'wysiwyg-7.x-2.2.fr.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/wysiwyg/wysiwyg-7.x-2.2.fr.po',
            'timestamp' => 1364224202,
          ),
          'local' => (object) array(
            'project' => 'wysiwyg',
            'langcode' => 'fr',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'wysiwyg-7.x-2.2.fr.po',
            'uri' => 'translations://wysiwyg-7.x-2.2.fr.po',
            'timestamp' => 1441353187,
            'directory' => 'translations://',
            'last_checked' => 1441353187,
            'language' => 'fr',
          ),
        ),
        'language' => 'fr',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'ru' => (object) array(
        'name' => 'wysiwyg',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'wysiwyg',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1441353283,
        'last_checked' => 1441353282,
        'files' => array(
          'remote' => (object) array(
            'project' => 'wysiwyg',
            'langcode' => 'ru',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'wysiwyg-7.x-2.2.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/wysiwyg/wysiwyg-7.x-2.2.ru.po',
            'timestamp' => 1437834397,
          ),
          'local' => (object) array(
            'project' => 'wysiwyg',
            'langcode' => 'ru',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'wysiwyg-7.x-2.2.ru.po',
            'uri' => 'translations://wysiwyg-7.x-2.2.ru.po',
            'timestamp' => 1441353283,
            'directory' => 'translations://',
            'last_checked' => 1441353282,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
      'es' => (object) array(
        'name' => 'wysiwyg',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'wysiwyg',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1441353379,
        'last_checked' => 1441353379,
        'files' => array(
          'remote' => (object) array(
            'project' => 'wysiwyg',
            'langcode' => 'es',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'wysiwyg-7.x-2.2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/wysiwyg/wysiwyg-7.x-2.2.es.po',
            'timestamp' => 1434685086,
          ),
          'local' => (object) array(
            'project' => 'wysiwyg',
            'langcode' => 'es',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'wysiwyg-7.x-2.2.es.po',
            'uri' => 'translations://wysiwyg-7.x-2.2.es.po',
            'timestamp' => 1441353379,
            'directory' => 'translations://',
            'last_checked' => 1441353379,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
  );
  $export['l10n_update_translation_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_answer';
  $strongarm->value = '0';
  $export['language_content_type_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_candidate';
  $strongarm->value = '0';
  $export['language_content_type_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_partner';
  $strongarm->value = '0';
  $export['language_content_type_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_party';
  $strongarm->value = '0';
  $export['language_content_type_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_question';
  $strongarm->value = '0';
  $export['language_content_type_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 5;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array();
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_api_key';
  $strongarm->value = 'a9f1b71a9e70cb7fd1fb00ff548e72be-us7';
  $export['mailchimp_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_batch_limit';
  $strongarm->value = '100';
  $export['mailchimp_batch_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_cron';
  $strongarm->value = 0;
  $export['mailchimp_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_answer';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_candidate';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_partner';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_party';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_question';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_answer';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_candidate';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_partner';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_party';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_question';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_comment';
  $strongarm->value = FALSE;
  $export['metatag_enable_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node';
  $strongarm->value = TRUE;
  $export['metatag_enable_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__answer';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__candidate';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__forum';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__page';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__partner';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__party';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__question';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__topics';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__topics'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_user';
  $strongarm->value = TRUE;
  $export['metatag_enable_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_user__user';
  $strongarm->value = TRUE;
  $export['metatag_enable_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_answer';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_candidate';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_partner';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_party';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_question';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_answer';
  $strongarm->value = '0';
  $export['node_preview_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_candidate';
  $strongarm->value = '0';
  $export['node_preview_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_partner';
  $strongarm->value = '1';
  $export['node_preview_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_party';
  $strongarm->value = '0';
  $export['node_preview_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_question';
  $strongarm->value = '0';
  $export['node_preview_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_answer';
  $strongarm->value = 0;
  $export['node_submitted_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_candidate';
  $strongarm->value = 0;
  $export['node_submitted_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_partner';
  $strongarm->value = 0;
  $export['node_submitted_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_party';
  $strongarm->value = 0;
  $export['node_submitted_party'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_question';
  $strongarm->value = 0;
  $export['node_submitted_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_candidate-list';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_candidate-list';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_candidate-list';
  $strongarm->value = '0';
  $export['owlcarousel_auto_play_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_default';
  $strongarm->value = '0';
  $export['owlcarousel_auto_play_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_candidate-list';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_default';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_candidate-list';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_candidate-list_items';
  $strongarm->value = '4';
  $export['owlcarousel_items_desktop_owlcarousel_settings_candidate-list_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_candidate-list_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_candidate-list_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_default_items';
  $strongarm->value = '4';
  $export['owlcarousel_items_desktop_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_default_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_candidate-list_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_candidate-list_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_candidate-list_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_candidate-list_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_default_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_default_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_candidate-list_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_candidate-list_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_candidate-list_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_candidate-list_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_default_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_candidate-list';
  $strongarm->value = '3';
  $export['owlcarousel_items_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_default';
  $strongarm->value = '5';
  $export['owlcarousel_items_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_candidate-list';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_candidate-list_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_owlcarousel_settings_candidate-list_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_candidate-list_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_candidate-list_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_default_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_default_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_candidate-list_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_candidate-list_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_candidate-list_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_candidate-list_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_default_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_default_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_candidate-list';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_candidate-list';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_candidate-list';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_default';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_candidate-list';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_candidate-list';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_load_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_candidate-list';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_candidate-list';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_candidate-list';
  $strongarm->value = array(
    0 => 'prev',
    1 => 'next',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_default';
  $strongarm->value = array(
    0 => 'prev',
    1 => 'next',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_candidate-list';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_candidate-list';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_candidate-list';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_candidate-list';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_default';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_candidate-list';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_default';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_candidate-list';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_candidate-list';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_default';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_candidate-list';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_candidate-list';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_default';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_candidate-list';
  $strongarm->value = 1;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_candidate-list';
  $strongarm->value = 'candidate_list';
  $export['owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_default';
  $strongarm->value = 'owlcarousel_default';
  $export['owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_candidate-list';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_candidate-list';
  $strongarm->value = '500';
  $export['owlcarousel_slide_speed_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_default';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_candidate-list';
  $strongarm->value = 0;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_candidate-list';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_default';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_candidate-list';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_candidate-list';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_candidate-list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_answer_pattern';
  $strongarm->value = 'answer/[node:title]';
  $export['pathauto_node_answer_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_candidate_pattern';
  $strongarm->value = 'candidate/[node:title]';
  $export['pathauto_node_candidate_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_party_pattern';
  $strongarm->value = 'party/[node:title]';
  $export['pathauto_node_party_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_question_pattern';
  $strongarm->value = 'question/[node:title]';
  $export['pathauto_node_question_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_topics_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_topics_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node/1';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'DemTools Demo';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_stats_cron_duration';
  $strongarm->value = '300';
  $export['social_stats_cron_duration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_stats_cron_interval';
  $strongarm->value = '86400';
  $export['social_stats_cron_interval'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_stats_date_offset';
  $strongarm->value = '-100 days';
  $export['social_stats_date_offset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_stats_options';
  $strongarm->value = '0';
  $export['social_stats_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_stats_start_date';
  $strongarm->value = '01/01/1970';
  $export['social_stats_start_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_stats_url_root';
  $strongarm->value = 'https://dev-issues-2015.demcloud.org';
  $export['social_stats_url_root'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_count_content_views';
  $strongarm->value = 1;
  $export['statistics_count_content_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_count_content_views_ajax';
  $strongarm->value = 0;
  $export['statistics_count_content_views_ajax'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_enable_access_log';
  $strongarm->value = 0;
  $export['statistics_enable_access_log'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_flush_accesslog_timer';
  $strongarm->value = '259200';
  $export['statistics_flush_accesslog_timer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_term_statistics_count_content_views';
  $strongarm->value = 1;
  $export['taxonomy_term_statistics_count_content_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_term_statistics_count_content_views_ajax';
  $strongarm->value = 0;
  $export['taxonomy_term_statistics_count_content_views_ajax'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bootstrap_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => 'public://issues-logo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => 'public://favicon.ico',
    'favicon_upload' => '',
    'general__active_tab' => 'edit-favicon',
    'bootstrap__active_tab' => 'edit-components',
    'bootstrap_breadcrumb' => '0',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => 'well',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_region_well-dashboard_main' => '',
    'bootstrap_region_well-dashboard_sidebar' => '',
    'bootstrap_region_well-dashboard_inactive' => '',
    'bootstrap_anchors_fix' => 1,
    'bootstrap_anchors_smooth_scrolling' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_descriptions' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_cdn' => '3.0.2',
    'bootstrap_bootswatch' => '',
    'bootstrap_rebuild_registry' => 0,
    'bootstrap_toggle_jquery_error' => 0,
    'jquery_update_jquery_version' => '',
  );
  $export['theme_bootstrap_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'issues';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_issues_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_comment_user_verification' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 0,
    'default_logo' => 0,
    'logo_path' => 'public://issues-logo.png',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'public://favicon.ico',
    'favicon_upload' => '',
    'general__active_tab' => 'edit-theme-settings',
    'bootstrap__active_tab' => 'edit-components',
    'bootstrap_breadcrumb' => '0',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => 'well',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_region_well-dashboard_main' => '',
    'bootstrap_region_well-dashboard_sidebar' => '',
    'bootstrap_region_well-dashboard_inactive' => '',
    'bootstrap_anchors_fix' => 1,
    'bootstrap_anchors_smooth_scrolling' => 1,
    'bootstrap_popover_enabled' => 0,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 0,
    'bootstrap_tooltip_descriptions' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_cdn' => '',
    'bootstrap_bootswatch' => '',
    'bootstrap_rebuild_registry' => 0,
    'bootstrap_toggle_jquery_error' => 0,
    'jquery_update_jquery_version' => '',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  );
  $export['theme_issues_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_seven_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'jquery_update_jquery_version' => 'default',
  );
  $export['theme_seven_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  return $export;
}
