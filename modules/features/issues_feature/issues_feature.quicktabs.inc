<?php
/**
 * @file
 * issues_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function issues_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'homepage_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Homepage tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_questions-block',
      'hide_title' => 1,
      'title' => 'All Questions',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_questions-block_1',
      'hide_title' => 1,
      'title' => 'Answered Questions',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_questions-block_2',
      'hide_title' => 1,
      'title' => 'Unanswered Questions',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('All Questions');
  t('Answered Questions');
  t('Homepage tabs');
  t('Unanswered Questions');

  $export['homepage_tabs'] = $quicktabs;

  return $export;
}
