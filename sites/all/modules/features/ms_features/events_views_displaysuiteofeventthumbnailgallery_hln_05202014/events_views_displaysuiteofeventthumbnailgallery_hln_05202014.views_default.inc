<?php
/**
 * @file
 * events_views_displaysuiteofeventthumbnailgallery_hln_05202014.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function events_views_displaysuiteofeventthumbnailgallery_hln_05202014_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'event_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'indieevent' => 'indieevent',
  );
  /* Filter criterion: Field: Music (field_music) */
  $handler->display->display_options['filters']['field_music_tid']['id'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['table'] = 'field_data_field_music';
  $handler->display->display_options['filters']['field_music_tid']['field'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator_id'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['label'] = 'Music';
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['identifier'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_music_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_music_tid']['vocabulary'] = 'music';
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    15 => '15',
    17 => '17',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Specials';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_types';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'event-gallery';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Nightlife */
  $handler = $view->new_display('page', 'Nightlife', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nightlife Events';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'indieevent' => 'indieevent',
  );
  /* Filter criterion: Field: Music (field_music) */
  $handler->display->display_options['filters']['field_music_tid']['id'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['table'] = 'field_data_field_music';
  $handler->display->display_options['filters']['field_music_tid']['field'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator_id'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['label'] = 'Music (field_music)';
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['identifier'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_music_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_music_tid']['vocabulary'] = 'music';
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event Date -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    15 => '15',
    17 => '17',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Specials';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_types';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid_1']['id'] = 'field_event_type_tid_1';
  $handler->display->display_options['filters']['field_event_type_tid_1']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid_1']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid_1']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['field_event_type_tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid_1']['vocabulary'] = 'event_types';
  $handler->display->display_options['path'] = 'events/nightlife';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Nightlife Events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Bachelorette Parties */
  $handler = $view->new_display('page', 'Bachelorette Parties', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bachelorette Parties';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'indieevent' => 'indieevent',
  );
  /* Filter criterion: Field: Music (field_music) */
  $handler->display->display_options['filters']['field_music_tid']['id'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['table'] = 'field_data_field_music';
  $handler->display->display_options['filters']['field_music_tid']['field'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator_id'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['label'] = 'Music (field_music)';
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['identifier'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_music_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_music_tid']['vocabulary'] = 'music';
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event Date -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    15 => '15',
    17 => '17',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Specials';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_types';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid_1']['id'] = 'field_event_type_tid_1';
  $handler->display->display_options['filters']['field_event_type_tid_1']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid_1']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid_1']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['field_event_type_tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid_1']['vocabulary'] = 'event_types';
  $handler->display->display_options['path'] = 'events/bachelorette';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Bachelorette Parties';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Stag Parties */
  $handler = $view->new_display('page', 'Stag Parties', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stag Parties';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'indieevent' => 'indieevent',
  );
  /* Filter criterion: Field: Music (field_music) */
  $handler->display->display_options['filters']['field_music_tid']['id'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['table'] = 'field_data_field_music';
  $handler->display->display_options['filters']['field_music_tid']['field'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator_id'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['label'] = 'Music (field_music)';
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['identifier'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_music_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_music_tid']['vocabulary'] = 'music';
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event Date -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    15 => '15',
    17 => '17',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Specials';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_types';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid_1']['id'] = 'field_event_type_tid_1';
  $handler->display->display_options['filters']['field_event_type_tid_1']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid_1']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid_1']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['field_event_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid_1']['vocabulary'] = 'event_types';
  $handler->display->display_options['path'] = 'events/stag-parties';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Stag Parties';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Debut */
  $handler = $view->new_display('page', 'Debut', 'page_4');
  $handler->display->display_options['path'] = 'events/debut';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Debut';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Concerts */
  $handler = $view->new_display('page', 'Concerts', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Concert Events';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'indieevent' => 'indieevent',
  );
  /* Filter criterion: Field: Music (field_music) */
  $handler->display->display_options['filters']['field_music_tid']['id'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['table'] = 'field_data_field_music';
  $handler->display->display_options['filters']['field_music_tid']['field'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator_id'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['label'] = 'Music (field_music)';
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['identifier'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_music_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_music_tid']['vocabulary'] = 'music';
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event Date -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    15 => '15',
    17 => '17',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Specials';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_types';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid_1']['id'] = 'field_event_type_tid_1';
  $handler->display->display_options['filters']['field_event_type_tid_1']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid_1']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid_1']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['field_event_type_tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid_1']['vocabulary'] = 'event_types';
  $handler->display->display_options['path'] = 'events/concerts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Concerts';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Plays */
  $handler = $view->new_display('page', 'Plays', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Plays';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'indieevent' => 'indieevent',
  );
  /* Filter criterion: Field: Music (field_music) */
  $handler->display->display_options['filters']['field_music_tid']['id'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['table'] = 'field_data_field_music';
  $handler->display->display_options['filters']['field_music_tid']['field'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator_id'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['label'] = 'Music (field_music)';
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['identifier'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_music_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_music_tid']['vocabulary'] = 'music';
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event Date -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    15 => '15',
    17 => '17',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Specials';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_types';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid_1']['id'] = 'field_event_type_tid_1';
  $handler->display->display_options['filters']['field_event_type_tid_1']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid_1']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid_1']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['field_event_type_tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid_1']['vocabulary'] = 'event_types';
  $handler->display->display_options['path'] = 'events/plays';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Plays';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Guy's Night Out */
  $handler = $view->new_display('page', 'Guy\'s Night Out', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Guy\'s Night Out';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'indieevent' => 'indieevent',
  );
  /* Filter criterion: Field: Music (field_music) */
  $handler->display->display_options['filters']['field_music_tid']['id'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['table'] = 'field_data_field_music';
  $handler->display->display_options['filters']['field_music_tid']['field'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator_id'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['label'] = 'Music (field_music)';
  $handler->display->display_options['filters']['field_music_tid']['expose']['operator'] = 'field_music_tid_op';
  $handler->display->display_options['filters']['field_music_tid']['expose']['identifier'] = 'field_music_tid';
  $handler->display->display_options['filters']['field_music_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_music_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_music_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_music_tid']['vocabulary'] = 'music';
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event Date -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    15 => '15',
    17 => '17',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Specials';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_types';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid_1']['id'] = 'field_event_type_tid_1';
  $handler->display->display_options['filters']['field_event_type_tid_1']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid_1']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid_1']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_event_type_tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid_1']['vocabulary'] = 'event_types';
  $handler->display->display_options['path'] = 'events/guys-night-out';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Guy\'s Night Out';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['event_gallery'] = $view;

  return $export;
}
