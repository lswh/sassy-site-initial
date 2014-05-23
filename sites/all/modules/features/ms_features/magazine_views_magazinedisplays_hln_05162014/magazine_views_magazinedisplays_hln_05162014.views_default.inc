<?php
/**
 * @file
 * magazine_views_magazinedisplays_hln_05162014.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function magazine_views_magazinedisplays_hln_05162014_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'magazine';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Magazine';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Event Features';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Category (field_article_category) */
  $handler->display->display_options['filters']['field_article_category_tid']['id'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['table'] = 'field_data_field_article_category';
  $handler->display->display_options['filters']['field_article_category_tid']['field'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['value'] = array(
    0 => '4',
  );
  $handler->display->display_options['filters']['field_article_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_article_category_tid']['vocabulary'] = 'article_categories';

  /* Display: Magazine */
  $handler = $view->new_display('page', 'Magazine', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Magazine';
  $handler->display->display_options['display_description'] = 'This master display contains magazine articles from all categories';
  $handler->display->display_options['path'] = 'magazine';

  /* Display: Event Features */
  $handler = $view->new_display('page', 'Event Features', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Event Features';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Category (field_article_category) */
  $handler->display->display_options['filters']['field_article_category_tid']['id'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['table'] = 'field_data_field_article_category';
  $handler->display->display_options['filters']['field_article_category_tid']['field'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['field_article_category_tid']['vocabulary'] = 'article_categories';
  $handler->display->display_options['path'] = 'magazine/event';

  /* Display: Fashion */
  $handler = $view->new_display('page', 'Fashion', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fashion';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Category (field_article_category) */
  $handler->display->display_options['filters']['field_article_category_tid']['id'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['table'] = 'field_data_field_article_category';
  $handler->display->display_options['filters']['field_article_category_tid']['field'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['value'] = array(
    0 => '4',
  );
  $handler->display->display_options['filters']['field_article_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_article_category_tid']['vocabulary'] = 'article_categories';
  $handler->display->display_options['path'] = 'magazine/fashion';

  /* Display: Food */
  $handler = $view->new_display('page', 'Food', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Food';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Category (field_article_category) */
  $handler->display->display_options['filters']['field_article_category_tid']['id'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['table'] = 'field_data_field_article_category';
  $handler->display->display_options['filters']['field_article_category_tid']['field'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['value'] = array(
    0 => '3',
  );
  $handler->display->display_options['filters']['field_article_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_article_category_tid']['vocabulary'] = 'article_categories';
  $handler->display->display_options['path'] = 'magazine/food';

  /* Display: Lifestyle */
  $handler = $view->new_display('page', 'Lifestyle', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lifestyle';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Category (field_article_category) */
  $handler->display->display_options['filters']['field_article_category_tid']['id'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['table'] = 'field_data_field_article_category';
  $handler->display->display_options['filters']['field_article_category_tid']['field'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_article_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_article_category_tid']['vocabulary'] = 'article_categories';
  $handler->display->display_options['path'] = 'magazine/lifestyle';

  /* Display: Music */
  $handler = $view->new_display('page', 'Music', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Music';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Category (field_article_category) */
  $handler->display->display_options['filters']['field_article_category_tid']['id'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['table'] = 'field_data_field_article_category';
  $handler->display->display_options['filters']['field_article_category_tid']['field'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['value'] = array(
    0 => '6',
  );
  $handler->display->display_options['filters']['field_article_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_article_category_tid']['vocabulary'] = 'article_categories';
  $handler->display->display_options['path'] = 'magazine/music';

  /* Display: Nightlife */
  $handler = $view->new_display('page', 'Nightlife', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nightlife';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Category (field_article_category) */
  $handler->display->display_options['filters']['field_article_category_tid']['id'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['table'] = 'field_data_field_article_category';
  $handler->display->display_options['filters']['field_article_category_tid']['field'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['value'] = array(
    0 => '7',
  );
  $handler->display->display_options['filters']['field_article_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_article_category_tid']['vocabulary'] = 'article_categories';
  $handler->display->display_options['path'] = 'magazine/nightlife';

  /* Display: Relationships */
  $handler = $view->new_display('page', 'Relationships', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Relationships';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Category (field_article_category) */
  $handler->display->display_options['filters']['field_article_category_tid']['id'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['table'] = 'field_data_field_article_category';
  $handler->display->display_options['filters']['field_article_category_tid']['field'] = 'field_article_category_tid';
  $handler->display->display_options['filters']['field_article_category_tid']['value'] = array(
    0 => '5',
  );
  $handler->display->display_options['filters']['field_article_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_article_category_tid']['vocabulary'] = 'article_categories';
  $handler->display->display_options['path'] = 'magazine/relationships';
  $export['magazine'] = $view;

  return $export;
}
