<?php
/**
 * @file
 * cms_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cms_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_class_predefined_values';
  $strongarm->value = 'col-xs-1, col-sm-1, col-md-1, col-lg-1, col-xs-2, col-sm-2, col-md-2, col-lg-2, col-xs-3, col-sm-3, col-md-3, col-lg-3, col-xs-4, col-sm-4, col-md-4, col-lg-4, col-xs-5, col-sm-5, col-md-5, col-lg-5, col-xs-6, col-sm-6, col-md-6, col-lg-6, col-xs-7, col-sm-7, col-md-7, col-lg-7, col-xs-8, col-sm-8, col-md-8, col-lg-8, col-xs-9, col-sm-9, col-md-9, col-lg-9, col-xs-10, col-sm-10, col-md-10, col-lg-10, col-xs-11, col-sm-11, col-md-11, col-lg-11, col-xs-12, col-sm-12, col-md-12, col-lg-12, well, jumbotron';
  $export['block_class_predefined_values'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_class_source';
  $strongarm->value = 'predefined';
  $export['block_class_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_class_widget';
  $strongarm->value = 'autocomplete';
  $export['block_class_widget'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = 0;
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = 1;
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = 1;
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = '0';
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = 1;
  $export['comment_subject_field_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'file' => array(
      'cms_portfolio_image' => array(
        'label' => 'CMS Portfolio image',
        'custom settings' => 1,
      ),
      'bootstrap3_4col' => array(
        'label' => 'Bootstrap3 4col',
        'custom settings' => 1,
      ),
      'bootstrap3_1col' => array(
        'label' => 'Bootstrap3 1col',
        'custom settings' => 1,
      ),
      'bootstrap3_2col' => array(
        'label' => 'Bootstrap3 2col',
        'custom settings' => 1,
      ),
      'bootstrap3_5col' => array(
        'label' => 'Bootstrap3 5col',
        'custom settings' => 1,
      ),
      'bootstrap3_6col' => array(
        'label' => 'Bootstrap3 6col',
        'custom settings' => 1,
      ),
      'bootstrap3_7col' => array(
        'label' => 'Bootstrap3 7col',
        'custom settings' => 1,
      ),
      'bootstrap3_8col' => array(
        'label' => 'Bootstrap3 8col',
        'custom settings' => 1,
      ),
      'bootstrap3_9col' => array(
        'label' => 'Bootstrap3 9col',
        'custom settings' => 1,
      ),
      'bootstrap3_10col' => array(
        'label' => 'Bootstrap3 10col',
        'custom settings' => 1,
      ),
      'bootstrap3_11col' => array(
        'label' => 'Bootstrap3 11col',
        'custom settings' => 1,
      ),
      'bootstrap3_12col' => array(
        'label' => 'Bootstrap3 12col',
        'custom settings' => 1,
      ),
      'bootstrap3_3col' => array(
        'label' => 'Bootstrap3 3col',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_class_location';
  $strongarm->value = 'both';
  $export['node_class_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_class_predefined_values';
  $strongarm->value = 'full-width-content, glazed-util-content-center-4-col, glazed-util-content-center-6-col, glazed-util-content-center-8-col, glazed-util-content-center-10-col';
  $export['node_class_predefined_values'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_class_source';
  $strongarm->value = 'predefined';
  $export['node_class_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_class_widget';
  $strongarm->value = 'dropdown';
  $export['node_class_widget'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '1';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:menu-link:parents:join-path]/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notification_threshold';
  $strongarm->value = 'security';
  $export['update_notification_threshold'] = $strongarm;

  return $export;
}
