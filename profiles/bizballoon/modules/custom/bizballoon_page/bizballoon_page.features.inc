<?php
/**
 * @file
 * bizballoon_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function bizballoon_page_node_info() {
  $items = array(
    'business_page' => array(
      'name' => t('Business Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Business Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
