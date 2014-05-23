<?php
/**
 * @file
 * slideshow_contenttype_galleryevolvedemo_05232014.features.inc
 */

/**
 * Implements hook_node_info().
 */
function slideshow_contenttype_galleryevolvedemo_05232014_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
