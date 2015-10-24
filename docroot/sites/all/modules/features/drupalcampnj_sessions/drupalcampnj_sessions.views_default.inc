<?php
/**
 * @file
 * drupalcampnj_sessions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalcampnj_sessions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Proposed Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_track',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_track']['id'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['table'] = 'field_data_field_track';
  $handler->display->display_options['fields']['field_track']['field'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['label'] = '';
  $handler->display->display_options['fields']['field_track']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_track']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Proposed' => 'Proposed',
  );
  /* Filter criterion: Content: Audience (field_audience) */
  $handler->display->display_options['filters']['field_audience_value']['id'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['table'] = 'field_data_field_audience';
  $handler->display->display_options['filters']['field_audience_value']['field'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_audience_value']['expose']['operator_id'] = 'field_audience_value_op';
  $handler->display->display_options['filters']['field_audience_value']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['field_audience_value']['expose']['operator'] = 'field_audience_value_op';
  $handler->display->display_options['filters']['field_audience_value']['expose']['identifier'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    16 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Track (field_track) */
  $handler->display->display_options['filters']['field_track_value']['id'] = 'field_track_value';
  $handler->display->display_options['filters']['field_track_value']['table'] = 'field_data_field_track';
  $handler->display->display_options['filters']['field_track_value']['field'] = 'field_track_value';
  $handler->display->display_options['filters']['field_track_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_track_value']['expose']['operator_id'] = 'field_track_value_op';
  $handler->display->display_options['filters']['field_track_value']['expose']['label'] = 'Track';
  $handler->display->display_options['filters']['field_track_value']['expose']['operator'] = 'field_track_value_op';
  $handler->display->display_options['filters']['field_track_value']['expose']['identifier'] = 'field_track_value';
  $handler->display->display_options['filters']['field_track_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    16 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Version (field_version) */
  $handler->display->display_options['filters']['field_version_value']['id'] = 'field_version_value';
  $handler->display->display_options['filters']['field_version_value']['table'] = 'field_data_field_version';
  $handler->display->display_options['filters']['field_version_value']['field'] = 'field_version_value';
  $handler->display->display_options['filters']['field_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_version_value']['expose']['operator_id'] = 'field_version_value_op';
  $handler->display->display_options['filters']['field_version_value']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['field_version_value']['expose']['operator'] = 'field_version_value_op';
  $handler->display->display_options['filters']['field_version_value']['expose']['identifier'] = 'field_version_value';
  $handler->display->display_options['filters']['field_version_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    16 => 0,
    11 => 0,
  );

  /* Display: Proposed Page */
  $handler = $view->new_display('page', 'Proposed Page', 'page');
  $handler->display->display_options['path'] = 'program/sessions/proposed';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Proposed Sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Accepted Page */
  $handler = $view->new_display('page', 'Accepted Page', 'page_1');
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Accepted' => 'Accepted',
  );
  /* Filter criterion: Content: Audience (field_audience) */
  $handler->display->display_options['filters']['field_audience_value']['id'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['table'] = 'field_data_field_audience';
  $handler->display->display_options['filters']['field_audience_value']['field'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_audience_value']['expose']['operator_id'] = 'field_audience_value_op';
  $handler->display->display_options['filters']['field_audience_value']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['field_audience_value']['expose']['operator'] = 'field_audience_value_op';
  $handler->display->display_options['filters']['field_audience_value']['expose']['identifier'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    16 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Track (field_track) */
  $handler->display->display_options['filters']['field_track_value']['id'] = 'field_track_value';
  $handler->display->display_options['filters']['field_track_value']['table'] = 'field_data_field_track';
  $handler->display->display_options['filters']['field_track_value']['field'] = 'field_track_value';
  $handler->display->display_options['filters']['field_track_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_track_value']['expose']['operator_id'] = 'field_track_value_op';
  $handler->display->display_options['filters']['field_track_value']['expose']['label'] = 'Track';
  $handler->display->display_options['filters']['field_track_value']['expose']['operator'] = 'field_track_value_op';
  $handler->display->display_options['filters']['field_track_value']['expose']['identifier'] = 'field_track_value';
  $handler->display->display_options['filters']['field_track_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    16 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Version (field_version) */
  $handler->display->display_options['filters']['field_version_value']['id'] = 'field_version_value';
  $handler->display->display_options['filters']['field_version_value']['table'] = 'field_data_field_version';
  $handler->display->display_options['filters']['field_version_value']['field'] = 'field_version_value';
  $handler->display->display_options['filters']['field_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_version_value']['expose']['operator_id'] = 'field_version_value_op';
  $handler->display->display_options['filters']['field_version_value']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['field_version_value']['expose']['operator'] = 'field_version_value_op';
  $handler->display->display_options['filters']['field_version_value']['expose']['identifier'] = 'field_version_value';
  $handler->display->display_options['filters']['field_version_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    16 => 0,
    11 => 0,
  );
  $handler->display->display_options['path'] = 'program/sessions/accepted';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Accepted Sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['sessions'] = $view;

  return $export;
}
