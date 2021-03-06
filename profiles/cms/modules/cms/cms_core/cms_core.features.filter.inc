<?php
/**
 * @file
 * cms_core.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function cms_core_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['unfiltered_html'] = array(
    'format' => 'unfiltered_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -7,
    'filters' => array(),
  );

  return $formats;
}
