<?php
/**
 * @file
 * camp_schedule.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function camp_schedule_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'camp_session_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'camp_session_grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nothing for this time.';
  $handler->display->display_options['empty']['area']['format'] = 'wiki_filter';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_session_timeslot_target_id']['id'] = 'field_session_timeslot_target_id';
  $handler->display->display_options['relationships']['field_session_timeslot_target_id']['table'] = 'field_data_field_session_timeslot';
  $handler->display->display_options['relationships']['field_session_timeslot_target_id']['field'] = 'field_session_timeslot_target_id';
  $handler->display->display_options['relationships']['field_session_timeslot_target_id']['label'] = 'Timeslots';
  $handler->display->display_options['relationships']['field_session_timeslot_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_timeslot_room_target_id']['id'] = 'field_timeslot_room_target_id';
  $handler->display->display_options['relationships']['field_timeslot_room_target_id']['table'] = 'field_data_field_timeslot_room';
  $handler->display->display_options['relationships']['field_timeslot_room_target_id']['field'] = 'field_timeslot_room_target_id';
  $handler->display->display_options['relationships']['field_timeslot_room_target_id']['relationship'] = 'field_session_timeslot_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_timeslot_time_target_id']['id'] = 'field_timeslot_time_target_id';
  $handler->display->display_options['relationships']['field_timeslot_time_target_id']['table'] = 'field_data_field_timeslot_time';
  $handler->display->display_options['relationships']['field_timeslot_time_target_id']['field'] = 'field_timeslot_time_target_id';
  $handler->display->display_options['relationships']['field_timeslot_time_target_id']['relationship'] = 'field_session_timeslot_target_id';
  $handler->display->display_options['relationships']['field_timeslot_time_target_id']['label'] = 'Time entity';
  $handler->display->display_options['relationships']['field_timeslot_time_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Room: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'cod_event_room';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_timeslot_room_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field collection item: Room (field_timeslot_room) */
  $handler->display->display_options['sorts']['field_timeslot_room_target_id']['id'] = 'field_timeslot_room_target_id';
  $handler->display->display_options['sorts']['field_timeslot_room_target_id']['table'] = 'field_data_field_timeslot_room';
  $handler->display->display_options['sorts']['field_timeslot_room_target_id']['field'] = 'field_timeslot_room_target_id';
  $handler->display->display_options['sorts']['field_timeslot_room_target_id']['relationship'] = 'field_session_timeslot_target_id';
  /* Contextual filter: Time: Time ID */
  $handler->display->display_options['arguments']['evttid']['id'] = 'evttid';
  $handler->display->display_options['arguments']['evttid']['table'] = 'cod_event_time';
  $handler->display->display_options['arguments']['evttid']['field'] = 'evttid';
  $handler->display->display_options['arguments']['evttid']['relationship'] = 'field_timeslot_time_target_id';
  $handler->display->display_options['arguments']['evttid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['evttid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['evttid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['evttid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['evttid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field collection item: Allowed Types (field_timeslot_allowed_types) */
  $handler->display->display_options['arguments']['field_timeslot_allowed_types_value']['id'] = 'field_timeslot_allowed_types_value';
  $handler->display->display_options['arguments']['field_timeslot_allowed_types_value']['table'] = 'field_data_field_timeslot_allowed_types';
  $handler->display->display_options['arguments']['field_timeslot_allowed_types_value']['field'] = 'field_timeslot_allowed_types_value';
  $handler->display->display_options['arguments']['field_timeslot_allowed_types_value']['relationship'] = 'field_session_timeslot_target_id';
  $handler->display->display_options['arguments']['field_timeslot_allowed_types_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_timeslot_allowed_types_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_timeslot_allowed_types_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_timeslot_allowed_types_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_timeslot_allowed_types_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_timeslot_allowed_types_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_timeslot_allowed_types_value']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Saturday Schedule';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'camp_schedule_grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Room: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'cod_event_room';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_timeslot_room_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  /* Field: Time: Date and time */
  $handler->display->display_options['fields']['field_evttime_date']['id'] = 'field_evttime_date';
  $handler->display->display_options['fields']['field_evttime_date']['table'] = 'field_data_field_evttime_date';
  $handler->display->display_options['fields']['field_evttime_date']['field'] = 'field_evttime_date';
  $handler->display->display_options['fields']['field_evttime_date']['relationship'] = 'field_timeslot_time_target_id';
  $handler->display->display_options['fields']['field_evttime_date']['label'] = 'time';
  $handler->display->display_options['fields']['field_evttime_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_evttime_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_evttime_date']['settings'] = array(
    'format_type' => 'camp_schedule_session',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_speakers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Content: Experience level */
  $handler->display->display_options['fields']['field_experience']['id'] = 'field_experience';
  $handler->display->display_options['fields']['field_experience']['table'] = 'field_data_field_experience';
  $handler->display->display_options['fields']['field_experience']['field'] = 'field_experience';
  $handler->display->display_options['fields']['field_experience']['label'] = '';
  $handler->display->display_options['fields']['field_experience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_experience']['element_type'] = 'span';
  /* Field: Content: Session Track */
  $handler->display->display_options['fields']['og_vocabulary']['id'] = 'og_vocabulary';
  $handler->display->display_options['fields']['og_vocabulary']['table'] = 'field_data_og_vocabulary';
  $handler->display->display_options['fields']['og_vocabulary']['field'] = 'og_vocabulary';
  $handler->display->display_options['fields']['og_vocabulary']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_vocabulary']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Sticky */
  $handler->display->display_options['fields']['sticky']['id'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['table'] = 'node';
  $handler->display->display_options['fields']['sticky']['field'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sticky']['not'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Time: Date and time -  start date (field_evttime_date) */
  $handler->display->display_options['sorts']['field_evttime_date_value']['id'] = 'field_evttime_date_value';
  $handler->display->display_options['sorts']['field_evttime_date_value']['table'] = 'field_data_field_evttime_date';
  $handler->display->display_options['sorts']['field_evttime_date_value']['field'] = 'field_evttime_date_value';
  $handler->display->display_options['sorts']['field_evttime_date_value']['relationship'] = 'field_timeslot_time_target_id';
  /* Sort criterion: Field collection item: Room (field_timeslot_room) */
  $handler->display->display_options['sorts']['field_timeslot_room_target_id']['id'] = 'field_timeslot_room_target_id';
  $handler->display->display_options['sorts']['field_timeslot_room_target_id']['table'] = 'field_data_field_timeslot_room';
  $handler->display->display_options['sorts']['field_timeslot_room_target_id']['field'] = 'field_timeslot_room_target_id';
  $handler->display->display_options['sorts']['field_timeslot_room_target_id']['relationship'] = 'field_session_timeslot_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Event (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['relationship'] = 'field_timeslot_time_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'cod_events_default_event';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field collection item: Allowed Types (field_timeslot_allowed_types) */
  $handler->display->display_options['filters']['field_timeslot_allowed_types_value']['id'] = 'field_timeslot_allowed_types_value';
  $handler->display->display_options['filters']['field_timeslot_allowed_types_value']['table'] = 'field_data_field_timeslot_allowed_types';
  $handler->display->display_options['filters']['field_timeslot_allowed_types_value']['field'] = 'field_timeslot_allowed_types_value';
  $handler->display->display_options['filters']['field_timeslot_allowed_types_value']['relationship'] = 'field_session_timeslot_target_id';
  $handler->display->display_options['filters']['field_timeslot_allowed_types_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_timeslot_allowed_types_value']['value'] = 'bof_session';
  $handler->display->display_options['path'] = 'camp/session-schedule/sessions';

  $export['camp_session_grid'] = $view;

  return $export;
}
