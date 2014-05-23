<?php
/**
 * @file
 * general_contenttype_venue_hln_05202014.features.inc
 */

/**
 * Implements hook_node_info().
 */
function general_contenttype_venue_hln_05202014_node_info() {
  $items = array(
    'venue' => array(
      'name' => t('Venue'),
      'base' => 'node_content',
      'description' => t('This is for admin use only. Venues include all the famous event venues in town. :) This needs to be updated regularly when new users add new venues on the content types pertaining to events. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
