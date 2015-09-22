<?php
/**
 * @file
 * issues_blocks_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function issues_blocks_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ask a Question button';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_ask_a_question';
  $fe_block_boxes->body = '<p style="text-align: center;"><a class="question-button" href="/node/add/question">Ask a Question</a></p>
';

  $export['block_ask_a_question'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Below footer content';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_below_footer_content';
  $fe_block_boxes->body = '<ul>
	<li><a href="/">About</a></li>
	<li><a href="/">Privacy Policy</a></li>
	<li>Copyright 2015</li>
</ul>
';

  $export['block_below_footer_content'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Comments buttons';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_comments_buttons';
  $fe_block_boxes->body = '<div class="comments-comments-button">
	<p style="text-align: center;"><a class="comments-comments-button-link" href="#comments-comments">Show Comments</a></p>
</div>
<div class="comments-form-button">
	<p style="text-align: center;"><a class="comments-form-button-link" href="#comments-form">Write a Comment</a></p>
</div>
';

  $export['block_comments_buttons'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer social media';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_footer_social_media';
  $fe_block_boxes->body = '<ul>
	<li><a href="/"><span>Facebook</span></a></li>
	<li><a href="/"><span>Twitter</span></a></li>
</ul>
';

  $export['block_footer_social_media'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Highlight text';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_highlight_text';
  $fe_block_boxes->body = '<h2 style="text-align: center;">Join the Conversation</h2>
<p style="text-align: center;">Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
';

  $export['block_highlight_text'] = $fe_block_boxes;

  return $export;
}
