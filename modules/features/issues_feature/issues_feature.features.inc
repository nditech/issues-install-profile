<?php
/**
 * @file
 * issues_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function issues_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function issues_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function issues_feature_image_default_styles() {
  $styles = array();

  // Exported image style: candidate_answer_photo.
  $styles['candidate_answer_photo'] = array(
    'label' => 'Candidate answer photo',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 225,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: candidate_photo.
  $styles['candidate_photo'] = array(
    'label' => 'Candidate photo - candidate\'s page',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: list_photo.
  $styles['list_photo'] = array(
    'label' => 'List photo',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 262,
          'height' => 331,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: party_logo.
  $styles['party_logo'] = array(
    'label' => 'Party logo',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 350,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: video_preview.
  $styles['video_preview'] = array(
    'label' => 'Video preview',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 380,
          'height' => 237,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_mailchimp_signup().
 */
function issues_feature_default_mailchimp_signup() {
  $items = array();
  $items['newsletter_signup'] = entity_import('mailchimp_signup', '{
    "name" : "newsletter_signup",
    "mc_lists" : { "092b90558b" : "092b90558b" },
    "mode" : "1",
    "title" : "Newsletter signup",
    "settings" : {
      "path" : "",
      "submit_button" : "Subscribe",
      "confirmation_message" : "You have been successfully subscribed.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {
          "name" : "Email Address",
          "req" : true,
          "field_type" : "email",
          "public" : true,
          "show" : true,
          "order" : "1",
          "default" : null,
          "helptext" : null,
          "size" : "25",
          "tag" : "EMAIL",
          "id" : 0
        },
        "FNAME" : 0,
        "LNAME" : 0
      },
      "description" : "",
      "doublein" : 0,
      "send_welcome" : 0,
      "include_interest_groups" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function issues_feature_node_info() {
  $items = array(
    'answer' => array(
      'name' => t('Answer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Answer Title'),
      'help' => '',
    ),
    'candidate' => array(
      'name' => t('Candidate'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'partner' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'party' => array(
      'name' => t('Party'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Party Name'),
      'help' => '',
    ),
    'question' => array(
      'name' => t('Question'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Your question'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
