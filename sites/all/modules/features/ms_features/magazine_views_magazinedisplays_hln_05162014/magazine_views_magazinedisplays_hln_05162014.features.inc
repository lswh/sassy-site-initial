<?php
/**
 * @file
 * magazine_views_magazinedisplays_hln_05162014.features.inc
 */

/**
 * Implements hook_views_api().
 */
function magazine_views_magazinedisplays_hln_05162014_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function magazine_views_magazinedisplays_hln_05162014_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
