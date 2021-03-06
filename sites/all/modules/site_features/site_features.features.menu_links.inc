<?php
/**
 * @file
 * site_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function site_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_sms-info:node/add/sms-info.
  $menu_links['navigation_sms-info:node/add/sms-info'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/sms-info',
    'router_path' => 'node/add/sms-info',
    'link_title' => 'SMS Info',
    'options' => array(
      'identifier' => 'navigation_sms-info:node/add/sms-info',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('SMS Info');

  return $menu_links;
}
