<?php
/**
 * @file
 * cms_core_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cms_core_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_icons:uuid/node/da4838b6-c1af-4a3c-aa1c-21bbf4ab2f9d
  $menu_links['main-menu_icons:uuid/node/da4838b6-c1af-4a3c-aa1c-21bbf4ab2f9d'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/da4838b6-c1af-4a3c-aa1c-21bbf4ab2f9d',
    'router_path' => 'uuid',
    'link_title' => 'Icons',
    'options' => array(
      'identifier' => 'main-menu_icons:uuid/node/da4838b6-c1af-4a3c-aa1c-21bbf4ab2f9d',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -25,
    'parent_identifier' => 'main-menu_elements:uuid/node/8a6437a8-97a6-417c-b3b4-773602ad4e96',
  );
  // Exported menu link: main-menu_social-links-shortcodes:uuid/node/8d11184c-8e61-4f39-91ae-eaace6b77d9c
  $menu_links['main-menu_social-links-shortcodes:uuid/node/8d11184c-8e61-4f39-91ae-eaace6b77d9c'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/8d11184c-8e61-4f39-91ae-eaace6b77d9c',
    'router_path' => 'uuid',
    'link_title' => 'Social links shortcodes',
    'options' => array(
      'identifier' => 'main-menu_social-links-shortcodes:uuid/node/8d11184c-8e61-4f39-91ae-eaace6b77d9c',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -18,
    'parent_identifier' => 'main-menu_elements:uuid/node/8a6437a8-97a6-417c-b3b4-773602ad4e96',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Icons');
  t('Social links shortcodes');


  return $menu_links;
}
