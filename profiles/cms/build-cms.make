; Drush Make stub file for the cms distribution
;
; Use this file to build a full distribution including Drupal core and the
; cms install profile using the following command:
;
; drush make build-cms.make <target directory>

api = 2
core = 7.x

; Drupal core
; -----------
includes[] = drupal-org-core.make

; Install profiles
; ----------------
projects[cms][type] = profile
projects[cms][download][type] = file
projects[cms][download][url] = /home/admin/domains/sooperthemes.com/buildr-builds/cms-elegant_theme-cms_core_content-cms_core_content-contact-news-performance-wysiwyg/cms.zip
