<?php
/**
 * @file
 * events_views_colorboxtestthumbnailviews_helena_05092014.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function events_views_colorboxtestthumbnailviews_helena_05092014_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'colorbox_test_thumbnail';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'colorbox_test_thumbnail';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'colorbox_test_thumbnail';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Add Image */
  $handler->display->display_options['fields']['field_add_image']['id'] = 'field_add_image';
  $handler->display->display_options['fields']['field_add_image']['table'] = 'field_data_field_add_image';
  $handler->display->display_options['fields']['field_add_image']['field'] = 'field_add_image';
  $handler->display->display_options['fields']['field_add_image']['label'] = 'Thumb';
  $handler->display->display_options['fields']['field_add_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_add_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_add_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_add_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_add_image']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Add Image */
  $handler->display->display_options['fields']['field_add_image_1']['id'] = 'field_add_image_1';
  $handler->display->display_options['fields']['field_add_image_1']['table'] = 'field_data_field_add_image';
  $handler->display->display_options['fields']['field_add_image_1']['field'] = 'field_add_image';
  $handler->display->display_options['fields']['field_add_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_add_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_add_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_add_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_add_image_1']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_add_image_1']['settings'] = array(
    'colorbox_node_style' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_add_image';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[field_add_image_1] ';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'colorbox-test-thumbnail';
  $export['colorbox_test_thumbnail'] = $view;

  $view = new view();
  $view->name = 'colorbox_test_thumbnail_filtered';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'colorbox_test_thumbnail_filtered';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'colorbox_test_thumbnail';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Add Image */
  $handler->display->display_options['fields']['field_add_image']['id'] = 'field_add_image';
  $handler->display->display_options['fields']['field_add_image']['table'] = 'field_data_field_add_image';
  $handler->display->display_options['fields']['field_add_image']['field'] = 'field_add_image';
  $handler->display->display_options['fields']['field_add_image']['label'] = 'Thumb';
  $handler->display->display_options['fields']['field_add_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_add_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_add_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_add_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_add_image']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Add Image */
  $handler->display->display_options['fields']['field_add_image_1']['id'] = 'field_add_image_1';
  $handler->display->display_options['fields']['field_add_image_1']['table'] = 'field_data_field_add_image';
  $handler->display->display_options['fields']['field_add_image_1']['field'] = 'field_add_image';
  $handler->display->display_options['fields']['field_add_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_add_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_add_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_add_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_add_image_1']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_add_image_1']['settings'] = array(
    'colorbox_node_style' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_add_image';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[field_add_image_1] ';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event Date -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['year_range'] = '-1:+3';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'colorbox-test-thumbnail-filtered';
  $export['colorbox_test_thumbnail_filtered'] = $view;

  return $export;
}
