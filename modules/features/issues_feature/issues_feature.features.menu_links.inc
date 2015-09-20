<?php
/**
 * @file
 * issues_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function issues_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/20
  $menu_links['main-menu_about:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about:node/20',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_ask-a-question:node/add/question
  $menu_links['main-menu_ask-a-question:node/add/question'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/question',
    'router_path' => 'node/add/question',
    'link_title' => 'Ask a Question',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ask-a-question:node/add/question',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_candidates:candidates
  $menu_links['main-menu_candidates:candidates'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'candidates',
    'router_path' => 'candidates',
    'link_title' => 'Candidates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_candidates:candidates',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_issues:issues
  $menu_links['main-menu_issues:issues'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'issues',
    'router_path' => 'issues',
    'link_title' => 'Issues',
    'options' => array(
      'identifier' => 'main-menu_issues:issues',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_parties:parties
  $menu_links['main-menu_parties:parties'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'parties',
    'router_path' => 'parties',
    'link_title' => 'Parties',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_parties:parties',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_search:search-page
  $menu_links['main-menu_search:search-page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search-page',
    'router_path' => 'search-page',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_search:search-page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Ask a Question');
  t('Candidates');
  t('Issues');
  t('Parties');
  t('Search');

  return $menu_links;
}
