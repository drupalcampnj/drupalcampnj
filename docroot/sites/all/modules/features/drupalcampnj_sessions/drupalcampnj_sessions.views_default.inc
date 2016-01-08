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
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_track',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_track']['id'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['table'] = 'field_data_field_track';
  $handler->display->display_options['fields']['field_track']['field'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['label'] = '';
  $handler->display->display_options['fields']['field_track']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_track']['element_wrapper_class'] = 'track-[field_track]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Timeslot */
  $handler->display->display_options['fields']['field_timeslot']['id'] = 'field_timeslot';
  $handler->display->display_options['fields']['field_timeslot']['table'] = 'field_data_field_timeslot';
  $handler->display->display_options['fields']['field_timeslot']['field'] = 'field_timeslot';
  $handler->display->display_options['fields']['field_timeslot']['label'] = '';
  $handler->display->display_options['fields']['field_timeslot']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_timeslot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_timeslot']['settings'] = array(
    'format_type' => 'drupalcampnj_sessions_grid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_audience']['id'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['table'] = 'field_data_field_audience';
  $handler->display->display_options['fields']['field_audience']['field'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['label'] = '';
  $handler->display->display_options['fields']['field_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audience']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_audience']['delta_offset'] = '0';
  /* Sort criterion: Content: Track (field_track) */
  $handler->display->display_options['sorts']['field_track_value']['id'] = 'field_track_value';
  $handler->display->display_options['sorts']['field_track_value']['table'] = 'field_data_field_track';
  $handler->display->display_options['sorts']['field_track_value']['field'] = 'field_track_value';
  $handler->display->display_options['sorts']['field_track_value']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['field_audience_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_audience_value']['group_info']['label'] = 'Audience';
  $handler->display->display_options['filters']['field_audience_value']['group_info']['identifier'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Beginner',
      'operator' => 'or',
      'value' => array(
        'Beginner' => 'Beginner',
      ),
    ),
    2 => array(
      'title' => 'Intermediate',
      'operator' => 'or',
      'value' => array(
        'Intermediate' => 'Intermediate',
      ),
    ),
    3 => array(
      'title' => 'Advanced',
      'operator' => 'or',
      'value' => array(
        'Advanced' => 'Advanced',
      ),
    ),
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Proposed Sessions';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-sessions--proposed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_track',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>The window for session submissions has ended. The full schedule for the 2016 camp will be posted in early January.</p>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_audience']['id'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['table'] = 'field_data_field_audience';
  $handler->display->display_options['fields']['field_audience']['field'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['label'] = '';
  $handler->display->display_options['fields']['field_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audience']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_audience']['delta_offset'] = '0';
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_track']['id'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['table'] = 'field_data_field_track';
  $handler->display->display_options['fields']['field_track']['field'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['label'] = '';
  $handler->display->display_options['fields']['field_track']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_track']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_track']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'program/sessions/propose';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Proposed Session';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Accepted Page */
  $handler = $view->new_display('page', 'Accepted Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-sessions--accepted';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>As sessions are confirmed, we will add them to the list below. Check back in mid to late January for the camp day schedule.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'A list of accepted session will be made available in December of 2015.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  $handler->display->display_options['filters']['field_audience_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_audience_value']['group_info']['label'] = 'Audience';
  $handler->display->display_options['filters']['field_audience_value']['group_info']['identifier'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Beginner',
      'operator' => 'or',
      'value' => array(
        'Beginner' => 'Beginner',
      ),
    ),
    2 => array(
      'title' => 'Intermediate',
      'operator' => 'or',
      'value' => array(
        'Intermediate' => 'Intermediate',
      ),
    ),
    3 => array(
      'title' => 'Advanced',
      'operator' => 'or',
      'value' => array(
        'Advanced' => 'Advanced',
      ),
    ),
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
  $handler->display->display_options['path'] = 'program/sessions';
  $handler->display->display_options['menu']['title'] = 'Accepted Sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['sessions'] = $view;

  return $export;
}
