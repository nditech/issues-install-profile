api = 2
core = 7.39

; Modules

projects[addtoany][subdir] = contrib
projects[addtoany][version] = 4.9

projects[auto_entitylabel][subdir] = contrib
projects[auto_entitylabel][version] = 1.3

projects[block_class][subdir] = contrib
projects[block_class][version] = 2.1

projects[commentsblock][subdir] = contrib
projects[commentsblock][version] = 2.5

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.9

; projects[devel][subdir] = contrib
; projects[devel][version] = 1.5

projects[eim][subdir] = contrib
projects[eim][version] = 1.3

projects[entity][subdir] = contrib
projects[entity][version] = 1.6

projects[entityreference][subdir] = contrib
projects[entityreference][version] = 1.1

projects[entityreference_prepopulate][subdir] = contrib
projects[entityreference_prepopulate][version] = 1.5

projects[features][subdir] = contrib
projects[features][version] = 2.6

projects[features_extra][subdir] = contrib
projects[features_extra][version] = 1.0

projects[field_group][subdir] = contrib
projects[field_group][version] = 1.4

projects[field_permissions][subdir] = contrib
projects[field_permissions][version] = 1.0-beta2

projects[globalredirect][subdir] = contrib
projects[globalredirect][version] = 1.5

projects[google_analytics][subdir] = contrib
projects[google_analytics][version] = 2.1

projects[i18n][subdir] = contrib
projects[i18n][version] = 1.13

projects[i18nviews][subdir] = contrib
projects[i18nviews][version] = 3.x-dev

projects[imce][subdir] = contrib
projects[imce][version] = 1.9

projects[imce_wysiwyg][subdir] = contrib
projects[imce_wysiwyg][version] = 1.0

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 3.0-alpha2

projects[l10n_update][subdir] = contrib
projects[l10n_update][version] = 2.0

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.2

projects[link][subdir] = contrib
projects[link][version] = 1.3

projects[mailchimp][subdir] = contrib
projects[mailchimp][version] = 3.4
; projects[mailchimp][version] = 3.6

projects[metatag][subdir] = contrib
projects[metatag][version] = 1.7

projects[modernizr][subdir] = contrib
projects[modernizr][version] = 3.4

projects[owlcarousel][subdir] = contrib
projects[owlcarousel][version] = 1.4
projects[owlcarousel][patch][] = "http://www.drupal.org/files/issues/owlcarousel_rtl_support-2290555-4.patch"
projects[owlcarousel][patch][] = "http://www.drupal.org/files/issues/owlcarousel_installation_profile-2290555-5.patch"

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

projects[quicktabs][subdir] = contrib
projects[quicktabs][version] = 3.6

projects[redirect][subdir] = contrib
projects[redirect][version] = 1.0-rc3

projects[respondjs][subdir] = contrib
projects[respondjs][version] = 1.5

projects[rules][subdir] = contrib
projects[rules][version] = 2.9

projects[social_stats][subdir] = contrib
projects[social_stats][version] = 1.7

projects[soundcloudfield][subdir] = contrib
projects[soundcloudfield][version] = 1.4

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[taxonomy_term_statistics][subdir] = contrib
projects[taxonomy_term_statistics][version] = 1.x-dev

projects[token][subdir] = contrib
projects[token][version] = 1.6

projects[transliteration][subdir] = contrib
projects[transliteration][version] = 3.2

projects[variable][subdir] = contrib
projects[variable][version] = 2.5

projects[video_embed_field][subdir] = contrib
projects[video_embed_field][version] = 2.0-beta10
; projects[video_embed_field][version] = 2.0-beta11

projects[views][subdir] = contrib
projects[views][version] = 3.11
projects[views][patch][] = "http://www.drupal.org/files/issues/views_format_plural_large_number_cutoff-1515834-5.patch"

projects[views_conditional][subdir] = contrib
projects[views_conditional][version] = 1.3

projects[views_field_view][subdir] = contrib
projects[views_field_view][version] = 1.1
; projects[views_field_view][version] = 1.2

projects[vppr][subdir] = contrib
projects[vppr][version] = 1.0

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.2

projects[xmlsitemap][subdir] = contrib
projects[xmlsitemap][version] = 2.2

; Themes

projects[bootstrap][subdir] = contrib
projects[bootstrap][version] = 3.0

; Libraries

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.2/ckeditor_3.6.6.2.zip"
libraries[ckeditor][destination] = libraries
libraries[ckeditor][directory_name] = ckeditor

libraries[mailchimp][download][type] = get
libraries[mailchimp][download][url] = "http://bitbucket.org/mailchimp/mailchimp-api-php/get/2.0.6.zip"
libraries[mailchimp][destination] = libraries
libraries[mailchimp][directory_name] = mailchimp

libraries[modernizr][download][type] = get
libraries[modernizr][download][url] = "http://cdnjs.cloudflare.com/ajax/libs/modernizr/2.8.3/modernizr.min.js"
libraries[modernizr][destination] = libraries
libraries[modernizr][directory_name] = modernizr

libraries[owlcarousel][download][type] = get
libraries[owlcarousel][download][url] = "http://github.com/janvandiepen/OwlCarousel/archive/master.zip"
libraries[owlcarousel][destination] = libraries
libraries[owlcarousel][directory_name] = owl-carousel

libraries[respondjs][download][type] = get
libraries[respondjs][download][url] = "http://raw.githubusercontent.com/scottjehl/Respond/master/dest/respond.min.js"
libraries[respondjs][destination] = libraries
libraries[respondjs][directory_name] = respondjs
