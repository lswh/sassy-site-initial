<?php
/**
 * @file
 * events_contenttype_indieevent_hln_05202014.features.inc
 */

/**
 * Implements hook_node_info().
 */
function events_contenttype_indieevent_hln_05202014_node_info() {
  $items = array(
    'indieevent' => array(
      'name' => t('Independent Event'),
      'base' => 'node_content',
      'description' => t('Independent Events are events that are just being posted on the calendar and do not require the services of Sassy\'s partner suppliers, affiliates, etc. It involves built-in events that already have a venue, a date, and other important information that events enthusiasts are looking for. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
