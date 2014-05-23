<?php
/**
 * @file
 * events_contenttype_independentevent_hln_05142014.features.inc
 */

/**
 * Implements hook_node_info().
 */
function events_contenttype_independentevent_hln_05142014_node_info() {
  $items = array(
    'indieevent' => array(
      'name' => t('Independent Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
