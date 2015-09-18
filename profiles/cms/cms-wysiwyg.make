
; CMS WYSIWYG
; -------

projects[cms_wysiwyg][subdir] = cms

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = "2.x-dev"

projects[shortcode][subdir] = contrib

projects[shortcode_wysiwyg][subdir] = contrib
; patch committed
; projects[shortcode_wysiwyg][patch][] = "https://www.drupal.org/files/issues/https-%3A%3Awww.drupal.org%3Afiles%3Aissues%3Ashortcode_wysiwyg-supported_forms-2016669-9.patch"

projects[jsdelivr][subdir] = contrib

projects[sooperthemes_basic_elements][subdir] = contrib

projects[bs_shortcodes][subdir] = contrib

projects[block_shortcode][type] = module
projects[block_shortcode][subdir] = sandboxes
projects[block_shortcode][download][type] = git
projects[block_shortcode][download][branch] = "7.x-1.x"
projects[block_shortcode][download][url] = http://git.drupal.org/sandbox/SeanFitzpatrick/2219069.git
projects[block_shortcode][download][revision] = aaab3b4443532bb9997791b7cf611b7a284c4914

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.5/ckeditor_4.4.5_full.zip"
libraries[ckeditor][directory_name] = "ckeditor"
