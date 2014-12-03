<?php
/**
 * @file
 * dcnj_custom_cod.features.inc
 */

/**
 * Implements hook_field_default_field_bases_alter().
 */
function dcnj_custom_cod_field_default_field_bases_alter(&$data) {
  if (isset($data['field_timeslot_allowed_types'])) {
    unset($data['field_timeslot_allowed_types']['settings']['allowed_values']['bof_session']);
  }
  if (isset($data['field_timeslot_room'])) {
    unset($data['field_timeslot_room']['foreign keys']['cod_event_room']);
  }
  if (isset($data['field_timeslot_time'])) {
    unset($data['field_timeslot_time']['foreign keys']['cod_event_time']);
  }
  if (isset($data['field_twitter_url'])) {
    $data['field_twitter_url']['field_permissions'] = array(
      'type' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['og_group_ref'])) {
    unset($data['og_group_ref']['foreign keys']['node']);
  }
  if (isset($data['og_vocabulary'])) {
    $data['og_vocabulary']['settings']['handler_settings']['target_bundles']['session_tracks_1'] = 'session_tracks_1'; /* WAS: '' */
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function dcnj_custom_cod_field_group_info_alter(&$data) {
  if (isset($data['group_audience|node|session|default'])) {
    $data['group_audience|node|session|default']->data['weight'] = 7; /* WAS: 8 */
  }
  if (isset($data['group_schedule_info|node|session|default'])) {
    $data['group_schedule_info|node|session|default']->data['weight'] = 6; /* WAS: 7 */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function dcnj_custom_cod_field_default_field_instances_alter(&$data) {
  if (isset($data['node-event-body'])) {
    $data['node-event-body']['display']['default']['weight'] = 0; /* WAS: 1 */
  }
  if (isset($data['node-event-field_dates'])) {
    $data['node-event-field_dates']['display']['default']['type'] = 'hidden'; /* WAS: 'date_default' */
    $data['node-event-field_dates']['display']['default']['weight'] = 3; /* WAS: 0 */
    unset($data['node-event-field_dates']['display']['default']['module']);
    unset($data['node-event-field_dates']['display']['default']['settings']['format_type']);
    unset($data['node-event-field_dates']['display']['default']['settings']['fromto']);
    unset($data['node-event-field_dates']['display']['default']['settings']['multiple_from']);
    unset($data['node-event-field_dates']['display']['default']['settings']['multiple_number']);
    unset($data['node-event-field_dates']['display']['default']['settings']['multiple_to']);
  }
  if (isset($data['node-event-field_event_default_session_view'])) {
    $data['node-event-field_event_default_session_view']['display']['default']['weight'] = 6; /* WAS: 10 */
  }
  if (isset($data['node-event-field_event_image'])) {
    $data['node-event-field_event_image']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-event-field_event_image']['display']['default']['type'] = 'hidden'; /* WAS: 'image' */
    unset($data['node-event-field_event_image']['display']['default']['module']);
    unset($data['node-event-field_event_image']['display']['default']['settings']['image_link']);
    unset($data['node-event-field_event_image']['display']['default']['settings']['image_style']);
  }
  if (isset($data['node-event-field_event_program'])) {
    $data['node-event-field_event_program']['display']['default']['module'] = 'text'; /* WAS: '' */
    $data['node-event-field_event_program']['display']['default']['type'] = 'text_default'; /* WAS: 'hidden' */
    $data['node-event-field_event_program']['display']['default']['weight'] = 1; /* WAS: 11 */
  }
  if (isset($data['node-news-body'])) {
    $data['node-news-body']['display']['listing']['label'] = 'hidden'; /* WAS: 'above' */
  }
  if (isset($data['node-news-og_group_ref'])) {
    $data['node-news-og_group_ref']['display']['default']['type'] = 'hidden'; /* WAS: 'og_list_default' */
    $data['node-news-og_group_ref']['display']['default']['weight'] = 2; /* WAS: 1 */
    $data['node-news-og_group_ref']['display']['listing']['weight'] = 1; /* WAS: 0 */
    unset($data['node-news-og_group_ref']['display']['default']['module']);
  }
  if (isset($data['node-session-body'])) {
    $data['node-session-body']['required'] = 1; /* WAS: 0 */
  }
  if (isset($data['node-session-field_experience'])) {
    $data['node-session-field_experience']['display']['default']['weight'] = 1; /* WAS: 2 */
    $data['node-session-field_experience']['required'] = 1; /* WAS: 0 */
  }
  if (isset($data['node-session-field_news_image'])) {
    $data['node-session-field_news_image']['display']['default']['weight'] = 8; /* WAS: 9 */
  }
  if (isset($data['node-session-field_session_timeslot'])) {
    $data['node-session-field_session_timeslot']['display']['default']['weight'] = 3; /* WAS: 4 */
  }
  if (isset($data['node-session-field_slides'])) {
    $data['node-session-field_slides']['display']['default']['weight'] = 5; /* WAS: 1 */
  }
  if (isset($data['node-session-field_speakers'])) {
    $data['node-session-field_speakers']['display']['default']['weight'] = 2; /* WAS: 3 */
  }
  if (isset($data['node-session-og_group_ref'])) {
    $data['node-session-og_group_ref']['display']['default']['weight'] = 9; /* WAS: 10 */
  }
  if (isset($data['node-session-og_vocabulary'])) {
    $data['node-session-og_vocabulary']['display']['default']['settings']['concatenate'] = 1; /* WAS: FALSE */
    $data['node-session-og_vocabulary']['display']['default']['weight'] = 4; /* WAS: 6 */
    $data['node-session-og_vocabulary']['required'] = 1; /* WAS: 0 */
  }
  if (isset($data['node-sponsor-field_sponsor_body'])) {
    $data['node-sponsor-field_sponsor_body']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-sponsor-field_sponsor_body']['display']['default']['weight'] = 1; /* WAS: 4 */
  }
  if (isset($data['node-sponsor-field_sponsor_logo'])) {
    $data['node-sponsor-field_sponsor_logo']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-sponsor-field_sponsor_logo']['display']['default']['settings']['image_style'] = 'diamond_sponsor'; /* WAS: '' */
    $data['node-sponsor-field_sponsor_logo']['widget']['weight'] = 5; /* WAS: 4 */
  }
  if (isset($data['node-sponsor-field_sponsor_related_attendees'])) {
    $data['node-sponsor-field_sponsor_related_attendees']['display']['default']['weight'] = 5; /* WAS: 1 */
  }
  if (isset($data['node-sponsor-field_sponsor_sponsorship_level'])) {
    $data['node-sponsor-field_sponsor_sponsorship_level']['display']['default']['label'] = 'inline'; /* WAS: 'above' */
    $data['node-sponsor-field_sponsor_sponsorship_level']['display']['default']['type'] = 'taxonomy_term_reference_plain'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-sponsor-field_sponsor_sponsorship_level']['display']['default']['weight'] = 4; /* WAS: 5 */
    $data['node-sponsor-field_sponsor_sponsorship_level']['widget']['weight'] = 8; /* WAS: 7 */
  }
  if (isset($data['node-sponsor-field_sponsor_url'])) {
    $data['node-sponsor-field_sponsor_url']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
  }
  if (isset($data['node-sponsor-og_group_ref'])) {
    $data['node-sponsor-og_group_ref']['display']['default']['type'] = 'hidden'; /* WAS: 'entityreference_label' */
    $data['node-sponsor-og_group_ref']['widget']['weight'] = 7; /* WAS: 6 */
    unset($data['node-sponsor-og_group_ref']['display']['default']['module']);
    unset($data['node-sponsor-og_group_ref']['display']['default']['settings']['link']);
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function dcnj_custom_cod_filter_default_formats_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['weight'] = -9; /* WAS: 0 */
  }
  if (isset($data['full_html'])) {
    $data['full_html']['weight'] = -10; /* WAS: 1 */
  }
}

/**
 * Implements hook_flag_default_flags_alter().
 */
function dcnj_custom_cod_flag_default_flags_alter(&$data) {
  if (isset($data['session_schedule'])) {
    $data['session_schedule']['show_as_field'] = 0; /* WAS: FALSE */
    $data['session_schedule']['show_in_links']['diff_standard'] = 0; /* WAS: '' */
    $data['session_schedule']['show_in_links']['full'] = 'full'; /* WAS: TRUE */
    $data['session_schedule']['show_in_links']['listing'] = 0; /* WAS: '' */
    $data['session_schedule']['show_in_links']['rss'] = 0; /* WAS: '' */
    $data['session_schedule']['show_in_links']['search_index'] = 0; /* WAS: '' */
    $data['session_schedule']['show_in_links']['search_result'] = 0; /* WAS: '' */
    $data['session_schedule']['show_in_links']['teaser'] = 0; /* WAS: '' */
    $data['session_schedule']['show_in_links']['token'] = 0; /* WAS: '' */
    $data['session_schedule']['types'][0] = 'session'; /* WAS: 'bof_session' */
    unset($data['session_schedule']['types'][1]);
    unset($data['session_schedule']['types'][2]);
  }
}

/**
 * Implements hook_og_features_default_permissions_alter().
 */
function dcnj_custom_cod_og_features_default_permissions_alter(&$data) {
  if (isset($data['node:event:administer cod_event_room'])) {
    $data['node:event:administer cod_event_room']['roles']['administrator member'] = 'administrator member'; /* WAS: '' */
  }
  if (isset($data['node:event:administer cod_event_time'])) {
    $data['node:event:administer cod_event_time']['roles']['administrator member'] = 'administrator member'; /* WAS: '' */
  }
  if (isset($data['node:event:create cod_event_room'])) {
    $data['node:event:create cod_event_room']['roles']['administrator member'] = 'administrator member'; /* WAS: '' */
  }
  if (isset($data['node:event:create cod_event_time'])) {
    $data['node:event:create cod_event_time']['roles']['administrator member'] = 'administrator member'; /* WAS: '' */
  }
  if (isset($data['node:event:edit any cod_event_room'])) {
    $data['node:event:edit any cod_event_room']['roles']['administrator member'] = 'administrator member'; /* WAS: '' */
  }
  if (isset($data['node:event:edit any cod_event_time'])) {
    $data['node:event:edit any cod_event_time']['roles']['administrator member'] = 'administrator member'; /* WAS: '' */
  }
  if (isset($data['node:event:edit own cod_event_room'])) {
    $data['node:event:edit own cod_event_room']['roles']['administrator member'] = 'administrator member'; /* WAS: '' */
  }
  if (isset($data['node:event:edit own cod_event_time'])) {
    $data['node:event:edit own cod_event_time']['roles']['administrator member'] = 'administrator member'; /* WAS: '' */
  }
  if (isset($data['node:event:view cod_event_room'])) {
    $data['node:event:view cod_event_room']['roles']['administrator member'] = 'administrator member'; /* WAS: '' */
  }
  if (isset($data['node:event:view cod_event_time'])) {
    $data['node:event:view cod_event_time']['roles']['administrator member'] = 'administrator member'; /* WAS: '' */
  }
}

/**
 * Implements hook_default_og_membership_type_alter().
 */
function dcnj_custom_cod_default_og_membership_type_alter(&$data) {
  if (isset($data['og_membership_type_default'])) {
    $data['og_membership_type_default']->language = ''; /* WAS: '' */
    unset($data['og_membership_type_default']->rdf_mapping);
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function dcnj_custom_cod_default_page_manager_pages_alter(&$data) {
  if (isset($data['cod_schedule_admin_page'])) {
    $data['cod_schedule_admin_page']->access['plugins'][1]['settings']['rids'][0] = 16; /* WAS: 7 */
    $data['cod_schedule_admin_page']->path = 'admin/conference/%node/schedule'; /* WAS: 'admin/conference/events/%node/schedule' */
    unset($data['cod_schedule_admin_page']->access['plugins'][1]['settings']['rids'][1]);
    unset($data['cod_schedule_admin_page']->access['plugins'][1]['settings']['rids'][2]);
    unset($data['cod_schedule_admin_page']->access['plugins'][1]['settings']['rids'][3]);
  }
  if (isset($data['event_dashboard'])) {
    $data['event_dashboard']->access['plugins'][3]['settings']['rids'][0] = 16; /* WAS: 7 */
    $data['event_dashboard']->default_handlers['page_event_dashboard_panel_context']->conf['display']->content['new-2d5361da-fead-4dbe-9250-fc7eabea8011'] = (object) array(
          'pid' => 'new-2d5361da-fead-4dbe-9250-fc7eabea8011',
          'panel' => 'middle',
          'type' => 'views',
          'subtype' => 'og_members_admin',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_pager_settings' => 0,
            'use_pager' => 1,
            'nodes_per_page' => 25,
            'pager_id' => 0,
            'offset' => 0,
            'more_link' => 0,
            'feed_icons' => 0,
            'panel_args' => 0,
            'link_to_view' => 0,
            'args' => '',
            'url' => '',
            'display' => 'default',
            'context' => array(
              0 => '',
              1 => '',
            ),
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '2d5361da-fead-4dbe-9250-fc7eabea8011',
        ); /* WAS: '' */
    $data['event_dashboard']->default_handlers['page_event_dashboard_panel_context']->conf['display']->panels['middle'][2] = 'new-2d5361da-fead-4dbe-9250-fc7eabea8011'; /* WAS: '' */
    unset($data['event_dashboard']->access['plugins'][3]['settings']['rids'][1]);
    unset($data['event_dashboard']->access['plugins'][3]['settings']['rids'][2]);
    unset($data['event_dashboard']->access['plugins'][3]['settings']['rids'][3]);
    unset($data['event_dashboard']->access['plugins'][3]['settings']['rids'][4]);
  }
  if (isset($data['program'])) {
    $data['program']->menu['parent']['type'] = 'none'; /* WAS: 'tab' */
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function dcnj_custom_cod_user_default_permissions_alter(&$data) {
  if (isset($data['create session content'])) {
    $data['create session content']['roles']['camp attendee'] = 'camp attendee'; /* WAS: '' */
    unset($data['create session content']['roles']['authenticated user']);
  }
  if (isset($data['edit own session content'])) {
    $data['edit own session content']['roles']['camp attendee'] = 'camp attendee'; /* WAS: '' */
  }
  if (isset($data['use text format filtered_html'])) {
    unset($data['use text format filtered_html']['roles']['anonymous user']);
  }
  if (isset($data['view field_session_timeslot'])) {
    $data['view field_session_timeslot']['roles']['administrator'] = 'administrator'; /* WAS: '' */
  }
  if (isset($data['view own field_session_timeslot'])) {
    $data['view own field_session_timeslot']['roles']['administrator'] = 'administrator'; /* WAS: '' */
  }
  if (isset($data['view program'])) {
    $data['view program']['roles']['anonymous user'] = 'anonymous user'; /* WAS: '' */
  }
  if (isset($data['view schedule'])) {
    $data['view schedule']['roles']['anonymous user'] = 'anonymous user'; /* WAS: '' */
  }
  if (isset($data['view sessions'])) {
    $data['view sessions']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    $data['view sessions']['roles']['anonymous user'] = 'anonymous user'; /* WAS: '' */
  }
  if (isset($data['view speakers'])) {
    $data['view speakers']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    $data['view speakers']['roles']['anonymous user'] = 'anonymous user'; /* WAS: '' */
  }
  if (isset($data['view sponsors'])) {
    $data['view sponsors']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    $data['view sponsors']['roles']['anonymous user'] = 'anonymous user'; /* WAS: '' */
  }
}

/**
 * Implements hook_user_default_roles_alter().
 */
function dcnj_custom_cod_user_default_roles_alter(&$data) {
  if (isset($data['session organizer'])) {
    $data['session organizer']['weight'] = 5; /* WAS: 3 */
  }
  if (isset($data['sponsor organizer'])) {
    $data['sponsor organizer']['weight'] = 6; /* WAS: 3 */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function dcnj_custom_cod_strongarm_alter(&$data) {
  if (isset($data['comment_news'])) {
    $data['comment_news']->value = 1; /* WAS: 2 */
  }
  if (isset($data['comment_session'])) {
    $data['comment_session']->value = 1; /* WAS: 2 */
  }
  if (isset($data['field_bundle_settings_node__sponsor'])) {
    $data['field_bundle_settings_node__sponsor']->value['extra_fields']['form']['path']['weight'] = 6; /* WAS: 5 */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['full'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['listing'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['rss'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['search_index'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['search_result'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['teaser'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['token'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['node_options_news'])) {
    $data['node_options_news']->value[0] = 'promote'; /* WAS: 'status' */
    $data['node_options_news']->value[1] = 'revision'; /* WAS: 'promote' */
  }
  if (isset($data['node_options_page'])) {
    $data['node_options_page']->value[1] = 'revision'; /* WAS: '' */
  }
  if (isset($data['node_submitted_news'])) {
    $data['node_submitted_news']->value = 0; /* WAS: 1 */
  }
  if (isset($data['node_submitted_page'])) {
    $data['node_submitted_page']->value = 0; /* WAS: FALSE */
  }
  if (isset($data['node_submitted_schedule_item'])) {
    $data['node_submitted_schedule_item']->value = 0; /* WAS: 1 */
  }
  if (isset($data['node_submitted_session'])) {
    $data['node_submitted_session']->value = 0; /* WAS: 1 */
  }
  if (isset($data['og_group_manager_default_rids_node_event'])) {
    $data['og_group_manager_default_rids_node_event']->value[11] = 11; /* WAS: '' */
    unset($data['og_group_manager_default_rids_node_event']->value[7]);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function dcnj_custom_cod_views_default_views_alter(&$data) {
  if (isset($data['archive'])) {
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
  }
  if (isset($data['backlinks'])) {
    $data['backlinks']->display['block']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['block']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['backlinks']->display['default']->display_options['empty']['text']['empty']);
    unset($data['backlinks']->display['default']->display_options['fields']['title']['link_to_node']);
  }
  if (isset($data['cod_events_admin'])) {
    $data['cod_events_admin']->display['default']->display_options['header']['area']['content'] = 'All conferences should have at least one event. Many have more than one. You may administer your event(s) below, or create an event.<ul class="action-links"><li><a href="/node/add/event">Add Event</a></li></ul>'; /* WAS: 'All conferences should have at least one event. Many have more than one. You may administer your event(s) below, or create an event.' */
  }
  if (isset($data['cod_news'])) {
    $data['cod_news']->display['default']->display_options['fields']['body'] = array(
      'id' => 'body',
      'table' => 'field_data_body',
      'field' => 'body',
      'label' => '',
      'alter' => array(
        'more_link_text' => 'Read more',
        'trim' => TRUE,
      ),
      'element_label_colon' => FALSE,
      'type' => 'text_summary_or_trimmed',
      'settings' => array(
        'trim_length' => 600,
      ),
    ); /* WAS: '' */
    $data['cod_news']->display['default']->display_options['fields']['field_news_image'] = array(
      'id' => 'field_news_image',
      'table' => 'field_data_field_news_image',
      'field' => 'field_news_image',
      'label' => '',
      'element_class' => 'pull-left',
      'element_label_colon' => FALSE,
      'element_wrapper_class' => 'media pull-left',
      'click_sort_column' => 'fid',
      'settings' => array(
        'image_style' => 'medium',
        'image_link' => 'content',
      ),
    ); /* WAS: '' */
    $data['cod_news']->display['default']->display_options['fields']['title']['element_label_colon'] = FALSE; /* WAS: '' */
    $data['cod_news']->display['default']->display_options['fields']['title']['element_type'] = 'h4'; /* WAS: '' */
    $data['cod_news']->display['default']->display_options['fields']['view_node'] = array(
      'id' => 'view_node',
      'table' => 'views_entity_node',
      'field' => 'view_node',
      'label' => '',
      'alter' => array(
        'make_link' => TRUE,
        'link_class' => 'btn btn-primary',
      ),
      'element_type' => 'p',
      'element_class' => 'node-readmore',
      'element_label_colon' => FALSE,
      'text' => 'Read more',
    ); /* WAS: '' */
    $data['cod_news']->display['default']->display_options['row_plugin'] = 'fields'; /* WAS: 'node' */
    $data['cod_news']->display['multi_news_block']->display_options['pager']['options']['items_per_page'] = 2; /* WAS: 3 */
    $data['cod_news']->display['multi_news_block']->display_options['row_plugin'] = 'fields'; /* WAS: 'node' */
    $data['cod_news']->display['multi_news_block']->display_options['style_plugin'] = 'default'; /* WAS: 'list' */
    unset($data['cod_news']->display['default']->display_options['arguments']['gid']['default_action']);
  }
  if (isset($data['cod_session_speakers'])) {
    unset($data['cod_session_speakers']->display['page_1']->display_options['menu']['type']);
  }
  if (isset($data['cod_sponsors'])) {
    $data['cod_sponsors']->display['block_1'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:11:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:13:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"header";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:6:"<none>";s:5:"pager";a:2:{s:4:"type";s:4:"none";s:7:"options";a:1:{s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:6:"header";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:15:"Sponsors header";s:7:"content";s:22:"<h3>Gold Sponsors</h3>";s:6:"format";s:9:"full_html";}}s:6:"fields";a:1:{s:18:"field_sponsor_logo";a:7:{s:2:"id";s:18:"field_sponsor_logo";s:5:"table";s:29:"field_data_field_sponsor_logo";s:5:"field";s:18:"field_sponsor_logo";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:12:"cod_sponsors";s:10:"image_link";s:7:"content";}}}s:5:"sorts";a:2:{s:35:"field_sponsor_sponsorship_level_tid";a:3:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";}s:5:"title";a:3:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";}}s:9:"arguments";a:1:{s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:3:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:7:"sponsor";s:7:"sponsor";}}s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:5:"value";a:1:{i:11;s:2:"11";}s:4:"type";s:6:"select";s:10:"vocabulary";s:17:"sponsorship_level";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_1";s:13:"display_title";s:28:"Sponsor Block: Gold (Footer)";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}'); /* WAS: '' */
    $data['cod_sponsors']->display['block_2'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:9:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:11:{s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"header";b:0;s:6:"fields";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"pager";a:2:{s:4:"type";s:4:"none";s:7:"options";a:1:{s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:6:"header";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:15:"Sponsors header";s:7:"content";s:26:"<h3>Platinum Sponsors</h3>";s:6:"format";s:9:"full_html";}}s:6:"fields";a:2:{s:18:"field_sponsor_logo";a:7:{s:2:"id";s:18:"field_sponsor_logo";s:5:"table";s:29:"field_data_field_sponsor_logo";s:5:"field";s:18:"field_sponsor_logo";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:15:"diamond_sponsor";s:10:"image_link";s:7:"content";}}s:31:"field_sponsor_sponsorship_level";a:10:{s:2:"id";s:31:"field_sponsor_sponsorship_level";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:31:"field_sponsor_sponsorship_level";s:5:"label";s:0:"";s:7:"exclude";b:1;s:5:"alter";a:1:{s:4:"text";s:41:"[field_sponsor_sponsorship_level] Sponsor";}s:12:"element_type";s:2:"h4";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:4:"type";s:29:"taxonomy_term_reference_plain";}}s:9:"arguments";a:1:{s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:3:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:7:"sponsor";s:7:"sponsor";}}s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:5:"value";a:1:{i:6;s:1:"6";}s:4:"type";s:6:"select";s:10:"vocabulary";s:17:"sponsorship_level";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_2";s:13:"display_title";s:23:"Platinum Sponsors Block";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}'); /* WAS: '' */
    $data['cod_sponsors']->display['block_3'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:10:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:12:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:6:"<none>";s:5:"pager";a:2:{s:4:"type";s:4:"none";s:7:"options";a:1:{s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:6:"fields";a:1:{s:18:"field_sponsor_logo";a:7:{s:2:"id";s:18:"field_sponsor_logo";s:5:"table";s:29:"field_data_field_sponsor_logo";s:5:"field";s:18:"field_sponsor_logo";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:14:"silver_sponsor";s:10:"image_link";s:7:"content";}}}s:5:"sorts";a:2:{s:35:"field_sponsor_sponsorship_level_tid";a:3:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";}s:5:"title";a:3:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";}}s:9:"arguments";a:1:{s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:3:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:7:"sponsor";s:7:"sponsor";}}s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:5:"value";a:1:{i:16;s:2:"16";}s:4:"type";s:6:"select";s:10:"vocabulary";s:17:"sponsorship_level";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_3";s:13:"display_title";s:30:"Sponsor Block: Silver (Footer)";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}'); /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['defaults']['header'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['defaults']['row_options'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['defaults']['row_plugin'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['defaults']['style_options'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['defaults']['style_plugin'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['defaults']['title'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['fields']['field_sponsor_logo']['settings']['image_style'] = 'diamond_sponsor'; /* WAS: 'medium' */
    $data['cod_sponsors']->display['block']->display_options['fields']['field_sponsor_sponsorship_level'] = array(
      'id' => 'field_sponsor_sponsorship_level',
      'table' => 'field_data_field_sponsor_sponsorship_level',
      'field' => 'field_sponsor_sponsorship_level',
      'label' => '',
      'exclude' => TRUE,
      'alter' => array(
        'text' => '[field_sponsor_sponsorship_level] Sponsor',
      ),
      'element_type' => 'h4',
      'element_label_colon' => FALSE,
      'element_default_classes' => FALSE,
      'type' => 'taxonomy_term_reference_plain',
    ); /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['filters']['field_sponsor_sponsorship_level_tid'] = array(
      'id' => 'field_sponsor_sponsorship_level_tid',
      'table' => 'field_data_field_sponsor_sponsorship_level',
      'field' => 'field_sponsor_sponsorship_level_tid',
      'value' => array(
        1 => 1,
      ),
      'type' => 'select',
      'vocabulary' => 'sponsorship_level',
    ); /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['header'] = array(
      'area' => array(
        'id' => 'area',
        'table' => 'views',
        'field' => 'area',
        'label' => 'Basic header',
        'content' => '<h3>Diamond Sponsor</h3>',
        'format' => 'full_html',
      ),
    ); /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['row_plugin'] = 'fields'; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['style_plugin'] = 'default'; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_title = 'Diamond Sponsor Block'; /* WAS: 'Sponsor Block' */
    $data['cod_sponsors']->display['default']->display_options['header'] = array(
      'area' => array(
        'id' => 'area',
        'table' => 'views',
        'field' => 'area',
        'label' => 'Sponsors header',
        'content' => '<h3>Silver Sponsors</h3>',
        'format' => 'full_html',
      ),
    ); /* WAS: '' */
    $data['cod_sponsors']->display['default']->display_options['sorts']['title'] = array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
    ); /* WAS: '' */
    $data['cod_sponsors']->display['default']->display_options['style_options'] = array(
      'grouping' => array(
        0 => array(
          'field' => 'field_sponsor_sponsorship_level',
          'rendered' => 1,
          'rendered_strip' => 0,
        ),
      ),
    ); /* WAS: '' */
    $data['cod_sponsors']->display['default']->display_options['style_plugin'] = 'default'; /* WAS: 'list' */
    $data['cod_sponsors']->display['default']->display_options['title'] = '<none>'; /* WAS: 'Sponsors' */
    $data['cod_sponsors']->display['page']->display_options['defaults']['filter_groups'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['page']->display_options['defaults']['filters'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['page']->display_options['defaults']['header'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['page']->display_options['defaults']['title'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['page']->display_options['filters'] = array(
      'status' => array(
        'id' => 'status',
        'table' => 'node',
        'field' => 'status',
        'value' => 1,
        'group' => 1,
        'expose' => array(
          'operator' => FALSE,
        ),
      ),
      'type' => array(
        'id' => 'type',
        'table' => 'node',
        'field' => 'type',
        'value' => array(
          'sponsor' => 'sponsor',
        ),
      ),
      'field_sponsor_sponsorship_level_tid' => array(
        'id' => 'field_sponsor_sponsorship_level_tid',
        'table' => 'field_data_field_sponsor_sponsorship_level',
        'field' => 'field_sponsor_sponsorship_level_tid',
        'value' => array(
          1 => 1,
        ),
        'type' => 'select',
        'vocabulary' => 'sponsorship_level',
      ),
      'status_1' => array(
        'id' => 'status_1',
        'table' => 'node',
        'field' => 'status',
        'value' => 0,
      ),
    ); /* WAS: '' */
    $data['cod_sponsors']->display['page']->display_options['title'] = 'Sponsors'; /* WAS: '' */
    unset($data['cod_sponsors']->display['block']->display_options['fields']['title']);
    unset($data['cod_sponsors']->display['default']->display_options['empty']);
    unset($data['cod_sponsors']->display['default']->display_options['sorts']['random']);
    unset($data['cod_sponsors']->display['page']->display_options['fields']['field_sponsor_sponsorship_level']);
    unset($data['cod_sponsors']->display['page']->display_options['fields']['title']);
    unset($data['cod_sponsors']->display['page']->display_options['menu']['type']);
    unset($data['cod_sponsors']->display['page']->display_options['style_options']['grouping']);
  }
  if (isset($data['comments_recent'])) {
    $data['comments_recent']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['comments_recent']->display['default']->display_options['fields']['subject']['link_to_comment']);
    unset($data['comments_recent']->display['page']->display_options['fields']['subject']['link_to_comment']);
    unset($data['comments_recent']->display['page']->display_options['fields']['title']['link_to_node']);
  }
  if (isset($data['frontpage'])) {
    $data['frontpage']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['frontpage']->display['default']->display_options['row_options']);
  }
  if (isset($data['glossary'])) {
    $data['glossary']->display['attachment']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['summary_options']['inline'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['inherit_arguments'] = FALSE; /* WAS: 0 */
    $data['glossary']->display['default']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['glossary']->display['attachment']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['glossary']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['glossary']->display['default']->display_options['style_options']['override']);
    unset($data['glossary']->display['default']->display_options['style_options']['sticky']);
  }
  if (isset($data['taxonomy_term'])) {
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
  }
  if (isset($data['tracker'])) {
    $data['tracker']->display['default']->display_options['arguments']['uid_touch']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['arguments']['uid_touch']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['arguments']['uid_touch']['title_enable'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['fields']['timestamp']['comments'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['tracker']->display['default']->display_options['fields']['new_comments']['link_to_comment']);
    unset($data['tracker']->display['default']->display_options['fields']['timestamp']['link_to_node']);
    unset($data['tracker']->display['default']->display_options['style_options']['override']);
  }
}
