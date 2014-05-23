<?php
/**
 * @file
 * general_imagestyles_eventthumbs_hln_05202014.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function general_imagestyles_eventthumbs_hln_05202014_image_default_styles() {
  $styles = array();

  // Exported image style: event_flyer.
  $styles['event_flyer'] = array(
    'name' => 'event_flyer',
    'label' => 'Portrait 150*225',
    'effects' => array(
      2 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 150,
          'height' => 225,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: portrait_180_255.
  $styles['portrait_180_255'] = array(
    'name' => 'portrait_180_255',
    'label' => 'Portrait 180*255',
    'effects' => array(
      4 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 180,
          'height' => 255,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
