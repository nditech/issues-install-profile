<?php

/**
 * @file
 * template.php
 */
function issues_preprocess_page(&$vars) {
        if (isset($vars['node']->type)) {
                $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
        }
}

function issues_form_comment_form_alter(&$form, &$form_state) { 
	$form['actions']['submit']['#value'] = 'Add Comment';
}

function issues_form_views_exposed_form_alter(&$form, &$form_state) {
  if ($form['#id'] == 'views-exposed-form-issues-page') {
    $form['tid']['#options']['All'] = t('Choose an Issue');
  }
}
/*
function issues_views_view_field__issues__page__totalcount($vars) {
  $totalcount = number_format($vars['row']->field_topics_taxonomy_term_data__node_counter_totalcount,
                              $vars['field']->options['precision'],
                              $vars['field']->options['decimal'],
                              $vars['field']->options['separator']);
  $output = $totalcount . ' view';
  if ($vars['row']->field_topics_taxonomy_term_data__node_counter_totalcount != 1) {
    $output .= 's';
  }

  return $output;
}
*/