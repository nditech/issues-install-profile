<?php
/**
 * @file
 * issues_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function issues_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|answer|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'answer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '4',
    'children' => array(
      0 => 'field_video',
      1 => 'field_soundcloud_audio',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-media field-group-fieldset',
        'description' => 'Submit either a video or an audio clip.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_media|node|answer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|question|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '3',
    'children' => array(
      0 => 'field_video',
      1 => 'field_soundcloud_audio',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-media field-group-fieldset',
        'description' => 'Submit either a video or an audio clip.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_media|node|question|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media|node|candidate|form';
  $field_group->group_name = 'group_social_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'candidate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Media Links',
    'weight' => '8',
    'children' => array(
      0 => 'field_facebook_page',
      1 => 'field_twitter_page',
      2 => 'field_other_social_media',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-social-media field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_social_media|node|candidate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media|node|party|form';
  $field_group->group_name = 'group_social_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'party';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Media Links',
    'weight' => '6',
    'children' => array(
      0 => 'field_facebook_page',
      1 => 'field_twitter_page',
      2 => 'field_other_social_media',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-social-media field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_social_media|node|party|form'] = $field_group;

  return $export;
}
