/* 
 * Shows/hides the comments and the comment form on clicking specific buttons.
 */

(function ($) {
  Drupal.behaviors.issuesComments = {
    attach: function() {
      $('#comments-comments').hide();
      // Target the show comment button.
      $('.comments-comments-button-link').click(function(e) {
        var link = $(this);

        e.preventDefault();
        // Display the comments in animated fashion.
        $('#comments-comments').toggle('fast', function() {
          if (link.text() == 'Show Comments') {
            link.text('Hide Comments');
          } else {
            link.text('Show Comments');
          };
        });
      });
    }
  };

  Drupal.behaviors.issuesCommentForm = {
    attach: function() {
      $('#comments-form').hide();
      // Target the write a comment button.
      $('.comments-form-button-link').click(function(e) {
        var link = $(this);

        e.preventDefault();
        // Display the comments in animated fashion.
        $('#comments-form').toggle('fast', function() {
          if (link.text() == 'Write a Comment') {
            link.text('Hide the Form');
          } else {
            link.text('Write a Comment');
          };
        });
      });
    }
  };
}(jQuery));

