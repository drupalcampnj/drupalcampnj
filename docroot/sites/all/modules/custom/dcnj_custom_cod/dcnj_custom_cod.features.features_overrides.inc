<?php
/**
 * @file
 * dcnj_custom_cod.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function dcnj_custom_cod_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_timeslot_allowed_types.settings|allowed_values|bof_session"]["DELETED"] = TRUE;
  $overrides["field_base.field_timeslot_room.foreign keys|cod_event_room"]["DELETED"] = TRUE;
  $overrides["field_base.field_timeslot_time.foreign keys|cod_event_time"]["DELETED"] = TRUE;
  $overrides["field_base.field_twitter_url.field_permissions"] = array(
    'type' => 0,
  );
  $overrides["field_base.og_group_ref.foreign keys|node"]["DELETED"] = TRUE;
  $overrides["field_base.og_vocabulary.settings|handler_settings|target_bundles|session_tracks_1"] = 'session_tracks_1';

  // Exported overrides for: field_group
  $overrides["field_group.group_audience|node|session|default.data|weight"] = 7;
  $overrides["field_group.group_schedule_info|node|session|default.data|weight"] = 6;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-event-body.display|default|weight"] = 0;
  $overrides["field_instance.node-event-field_dates.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_dates.display|default|settings|format_type"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_dates.display|default|settings|fromto"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_dates.display|default|settings|multiple_from"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_dates.display|default|settings|multiple_number"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_dates.display|default|settings|multiple_to"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_dates.display|default|type"] = 'hidden';
  $overrides["field_instance.node-event-field_dates.display|default|weight"] = 3;
  $overrides["field_instance.node-event-field_event_default_session_view.display|default|weight"] = 6;
  $overrides["field_instance.node-event-field_event_image.display|default|label"] = 'hidden';
  $overrides["field_instance.node-event-field_event_image.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_event_image.display|default|settings|image_link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_event_image.display|default|settings|image_style"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_event_image.display|default|type"] = 'hidden';
  $overrides["field_instance.node-event-field_event_program.display|default|module"] = 'text';
  $overrides["field_instance.node-event-field_event_program.display|default|type"] = 'text_default';
  $overrides["field_instance.node-event-field_event_program.display|default|weight"] = 1;
  $overrides["field_instance.node-news-body.display|listing|label"] = 'hidden';
  $overrides["field_instance.node-news-og_group_ref.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-news-og_group_ref.display|default|type"] = 'hidden';
  $overrides["field_instance.node-news-og_group_ref.display|default|weight"] = 2;
  $overrides["field_instance.node-news-og_group_ref.display|listing|weight"] = 1;
  $overrides["field_instance.node-session-body.required"] = 1;
  $overrides["field_instance.node-session-field_experience.display|default|weight"] = 1;
  $overrides["field_instance.node-session-field_experience.required"] = 1;
  $overrides["field_instance.node-session-field_news_image.display|default|weight"] = 8;
  $overrides["field_instance.node-session-field_session_timeslot.display|default|weight"] = 3;
  $overrides["field_instance.node-session-field_slides.display|default|weight"] = 5;
  $overrides["field_instance.node-session-field_speakers.display|default|weight"] = 2;
  $overrides["field_instance.node-session-og_group_ref.display|default|weight"] = 9;
  $overrides["field_instance.node-session-og_vocabulary.display|default|settings|concatenate"] = 1;
  $overrides["field_instance.node-session-og_vocabulary.display|default|weight"] = 4;
  $overrides["field_instance.node-session-og_vocabulary.required"] = 1;
  $overrides["field_instance.node-sponsor-field_sponsor_body.display|default|label"] = 'hidden';
  $overrides["field_instance.node-sponsor-field_sponsor_body.display|default|weight"] = 1;
  $overrides["field_instance.node-sponsor-field_sponsor_logo.display|default|label"] = 'hidden';
  $overrides["field_instance.node-sponsor-field_sponsor_logo.display|default|settings|image_style"] = 'diamond_sponsor';
  $overrides["field_instance.node-sponsor-field_sponsor_logo.widget|weight"] = 5;
  $overrides["field_instance.node-sponsor-field_sponsor_related_attendees.display|default|weight"] = 5;
  $overrides["field_instance.node-sponsor-field_sponsor_sponsorship_level.display|default|label"] = 'inline';
  $overrides["field_instance.node-sponsor-field_sponsor_sponsorship_level.display|default|type"] = 'taxonomy_term_reference_plain';
  $overrides["field_instance.node-sponsor-field_sponsor_sponsorship_level.display|default|weight"] = 4;
  $overrides["field_instance.node-sponsor-field_sponsor_sponsorship_level.widget|weight"] = 8;
  $overrides["field_instance.node-sponsor-field_sponsor_url.display|default|label"] = 'hidden';
  $overrides["field_instance.node-sponsor-og_group_ref.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-sponsor-og_group_ref.display|default|settings|link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-sponsor-og_group_ref.display|default|type"] = 'hidden';
  $overrides["field_instance.node-sponsor-og_group_ref.widget|weight"] = 7;

  // Exported overrides for: filter
  $overrides["filter.filtered_html.weight"] = -9;
  $overrides["filter.full_html.weight"] = -10;

  // Exported overrides for: flag
  $overrides["flag.session_schedule.show_as_field"] = 0;
  $overrides["flag.session_schedule.show_in_links|diff_standard"] = 0;
  $overrides["flag.session_schedule.show_in_links|full"] = 'full';
  $overrides["flag.session_schedule.show_in_links|listing"] = 0;
  $overrides["flag.session_schedule.show_in_links|rss"] = 0;
  $overrides["flag.session_schedule.show_in_links|search_index"] = 0;
  $overrides["flag.session_schedule.show_in_links|search_result"] = 0;
  $overrides["flag.session_schedule.show_in_links|teaser"] = 0;
  $overrides["flag.session_schedule.show_in_links|token"] = 0;
  $overrides["flag.session_schedule.types|0"] = 'session';
  $overrides["flag.session_schedule.types|1"]["DELETED"] = TRUE;
  $overrides["flag.session_schedule.types|2"]["DELETED"] = TRUE;

  // Exported overrides for: og_features_permission
  $overrides["og_features_permission.node:event:administer cod_event_room.roles|administrator member"] = 'administrator member';
  $overrides["og_features_permission.node:event:administer cod_event_time.roles|administrator member"] = 'administrator member';
  $overrides["og_features_permission.node:event:create cod_event_room.roles|administrator member"] = 'administrator member';
  $overrides["og_features_permission.node:event:create cod_event_time.roles|administrator member"] = 'administrator member';
  $overrides["og_features_permission.node:event:edit any cod_event_room.roles|administrator member"] = 'administrator member';
  $overrides["og_features_permission.node:event:edit any cod_event_time.roles|administrator member"] = 'administrator member';
  $overrides["og_features_permission.node:event:edit own cod_event_room.roles|administrator member"] = 'administrator member';
  $overrides["og_features_permission.node:event:edit own cod_event_time.roles|administrator member"] = 'administrator member';
  $overrides["og_features_permission.node:event:view cod_event_room.roles|administrator member"] = 'administrator member';
  $overrides["og_features_permission.node:event:view cod_event_time.roles|administrator member"] = 'administrator member';

  // Exported overrides for: og_membership_type
  $overrides["og_membership_type.og_membership_type_default.language"] = '';
  $overrides["og_membership_type.og_membership_type_default.rdf_mapping"]["DELETED"] = TRUE;

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.cod_schedule_admin_page.access|plugins|1|settings|rids|0"] = 16;
  $overrides["page_manager_pages.cod_schedule_admin_page.access|plugins|1|settings|rids|1"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.cod_schedule_admin_page.access|plugins|1|settings|rids|2"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.cod_schedule_admin_page.access|plugins|1|settings|rids|3"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.cod_schedule_admin_page.path"] = 'admin/conference/%node/schedule';
  $overrides["page_manager_pages.event_dashboard.access|plugins|3|settings|rids|0"] = 16;
  $overrides["page_manager_pages.event_dashboard.access|plugins|3|settings|rids|1"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.event_dashboard.access|plugins|3|settings|rids|2"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.event_dashboard.access|plugins|3|settings|rids|3"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.event_dashboard.access|plugins|3|settings|rids|4"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.event_dashboard.default_handlers|page_event_dashboard_panel_context|conf|display|content|new-2d5361da-fead-4dbe-9250-fc7eabea8011"] = (object) array(
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
    );
  $overrides["page_manager_pages.event_dashboard.default_handlers|page_event_dashboard_panel_context|conf|display|panels|middle|2"] = 'new-2d5361da-fead-4dbe-9250-fc7eabea8011';
  $overrides["page_manager_pages.program.menu|parent|type"] = 'none';

  // Exported overrides for: user_permission
  $overrides["user_permission.create session content.roles|authenticated user"]["DELETED"] = TRUE;
  $overrides["user_permission.create session content.roles|camp attendee"] = 'camp attendee';
  $overrides["user_permission.edit own session content.roles|camp attendee"] = 'camp attendee';
  $overrides["user_permission.use text format filtered_html.roles|anonymous user"]["DELETED"] = TRUE;
  $overrides["user_permission.view field_session_timeslot.roles|administrator"] = 'administrator';
  $overrides["user_permission.view own field_session_timeslot.roles|administrator"] = 'administrator';
  $overrides["user_permission.view program.roles|anonymous user"] = 'anonymous user';
  $overrides["user_permission.view schedule.roles|anonymous user"] = 'anonymous user';
  $overrides["user_permission.view sessions.roles|administrator"] = 'administrator';
  $overrides["user_permission.view sessions.roles|anonymous user"] = 'anonymous user';
  $overrides["user_permission.view speakers.roles|administrator"] = 'administrator';
  $overrides["user_permission.view speakers.roles|anonymous user"] = 'anonymous user';
  $overrides["user_permission.view sponsors.roles|administrator"] = 'administrator';
  $overrides["user_permission.view sponsors.roles|anonymous user"] = 'anonymous user';

  // Exported overrides for: user_role
  $overrides["user_role.session organizer.weight"] = 5;
  $overrides["user_role.sponsor organizer.weight"] = 6;

  // Exported overrides for: variable
  $overrides["variable.comment_news.value"] = 1;
  $overrides["variable.comment_session.value"] = 1;
  $overrides["variable.field_bundle_settings_node__sponsor.value|extra_fields|form|path|weight"] = 6;
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|full"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|listing"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|rss"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|search_index"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|search_result"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|teaser"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|token"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.node_options_news.value|0"] = 'promote';
  $overrides["variable.node_options_news.value|1"] = 'revision';
  $overrides["variable.node_options_page.value|1"] = 'revision';
  $overrides["variable.node_submitted_news.value"] = 0;
  $overrides["variable.node_submitted_page.value"] = 0;
  $overrides["variable.node_submitted_schedule_item.value"] = 0;
  $overrides["variable.node_submitted_session.value"] = 0;
  $overrides["variable.og_group_manager_default_rids_node_event.value|11"] = 11;
  $overrides["variable.og_group_manager_default_rids_node_event.value|7"]["DELETED"] = TRUE;

  // Exported overrides for: views_view
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|empty|text|empty"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.cod_events_admin.display|default|display_options|header|area|content"] = 'All conferences should have at least one event. Many have more than one. You may administer your event(s) below, or create an event.<ul class="action-links"><li><a href="/node/add/event">Add Event</a></li></ul>';
  $overrides["views_view.cod_news.display|default|display_options|arguments|gid|default_action"]["DELETED"] = TRUE;
  $overrides["views_view.cod_news.display|default|display_options|fields|body"] = array(
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
  );
  $overrides["views_view.cod_news.display|default|display_options|fields|field_news_image"] = array(
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
  );
  $overrides["views_view.cod_news.display|default|display_options|fields|title|element_label_colon"] = FALSE;
  $overrides["views_view.cod_news.display|default|display_options|fields|title|element_type"] = 'h4';
  $overrides["views_view.cod_news.display|default|display_options|fields|view_node"] = array(
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
  );
  $overrides["views_view.cod_news.display|default|display_options|row_plugin"] = 'fields';
  $overrides["views_view.cod_news.display|multi_news_block|display_options|pager|options|items_per_page"] = 2;
  $overrides["views_view.cod_news.display|multi_news_block|display_options|row_plugin"] = 'fields';
  $overrides["views_view.cod_news.display|multi_news_block|display_options|style_plugin"] = 'default';
  $overrides["views_view.cod_session_speakers.display|page_1|display_options|menu|type"]["DELETED"] = TRUE;
  $overrides["views_view.cod_sponsors.display|block_1"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:11:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:13:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"header";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:6:"<none>";s:5:"pager";a:2:{s:4:"type";s:4:"none";s:7:"options";a:1:{s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:6:"header";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:15:"Sponsors header";s:7:"content";s:22:"<h3>Gold Sponsors</h3>";s:6:"format";s:9:"full_html";}}s:6:"fields";a:1:{s:18:"field_sponsor_logo";a:7:{s:2:"id";s:18:"field_sponsor_logo";s:5:"table";s:29:"field_data_field_sponsor_logo";s:5:"field";s:18:"field_sponsor_logo";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:12:"cod_sponsors";s:10:"image_link";s:7:"content";}}}s:5:"sorts";a:2:{s:35:"field_sponsor_sponsorship_level_tid";a:3:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";}s:5:"title";a:3:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";}}s:9:"arguments";a:1:{s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:3:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:7:"sponsor";s:7:"sponsor";}}s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:5:"value";a:1:{i:11;s:2:"11";}s:4:"type";s:6:"select";s:10:"vocabulary";s:17:"sponsorship_level";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_1";s:13:"display_title";s:28:"Sponsor Block: Gold (Footer)";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}');
  $overrides["views_view.cod_sponsors.display|block_2"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:9:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:11:{s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"header";b:0;s:6:"fields";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"pager";a:2:{s:4:"type";s:4:"none";s:7:"options";a:1:{s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:6:"header";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:15:"Sponsors header";s:7:"content";s:26:"<h3>Platinum Sponsors</h3>";s:6:"format";s:9:"full_html";}}s:6:"fields";a:2:{s:18:"field_sponsor_logo";a:7:{s:2:"id";s:18:"field_sponsor_logo";s:5:"table";s:29:"field_data_field_sponsor_logo";s:5:"field";s:18:"field_sponsor_logo";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:15:"diamond_sponsor";s:10:"image_link";s:7:"content";}}s:31:"field_sponsor_sponsorship_level";a:10:{s:2:"id";s:31:"field_sponsor_sponsorship_level";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:31:"field_sponsor_sponsorship_level";s:5:"label";s:0:"";s:7:"exclude";b:1;s:5:"alter";a:1:{s:4:"text";s:41:"[field_sponsor_sponsorship_level] Sponsor";}s:12:"element_type";s:2:"h4";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:4:"type";s:29:"taxonomy_term_reference_plain";}}s:9:"arguments";a:1:{s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:3:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:7:"sponsor";s:7:"sponsor";}}s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:5:"value";a:1:{i:6;s:1:"6";}s:4:"type";s:6:"select";s:10:"vocabulary";s:17:"sponsorship_level";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_2";s:13:"display_title";s:23:"Platinum Sponsors Block";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}');
  $overrides["views_view.cod_sponsors.display|block_3"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:10:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:12:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:6:"<none>";s:5:"pager";a:2:{s:4:"type";s:4:"none";s:7:"options";a:1:{s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:6:"fields";a:1:{s:18:"field_sponsor_logo";a:7:{s:2:"id";s:18:"field_sponsor_logo";s:5:"table";s:29:"field_data_field_sponsor_logo";s:5:"field";s:18:"field_sponsor_logo";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:14:"silver_sponsor";s:10:"image_link";s:7:"content";}}}s:5:"sorts";a:2:{s:35:"field_sponsor_sponsorship_level_tid";a:3:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";}s:5:"title";a:3:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";}}s:9:"arguments";a:1:{s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:3:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:7:"sponsor";s:7:"sponsor";}}s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:5:"value";a:1:{i:16;s:2:"16";}s:4:"type";s:6:"select";s:10:"vocabulary";s:17:"sponsorship_level";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_3";s:13:"display_title";s:30:"Sponsor Block: Silver (Footer)";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}');
  $overrides["views_view.cod_sponsors.display|block|display_options|defaults|header"] = FALSE;
  $overrides["views_view.cod_sponsors.display|block|display_options|defaults|row_options"] = FALSE;
  $overrides["views_view.cod_sponsors.display|block|display_options|defaults|row_plugin"] = FALSE;
  $overrides["views_view.cod_sponsors.display|block|display_options|defaults|style_options"] = FALSE;
  $overrides["views_view.cod_sponsors.display|block|display_options|defaults|style_plugin"] = FALSE;
  $overrides["views_view.cod_sponsors.display|block|display_options|defaults|title"] = FALSE;
  $overrides["views_view.cod_sponsors.display|block|display_options|fields|field_sponsor_logo|settings|image_style"] = 'diamond_sponsor';
  $overrides["views_view.cod_sponsors.display|block|display_options|fields|field_sponsor_sponsorship_level"] = array(
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
  );
  $overrides["views_view.cod_sponsors.display|block|display_options|fields|title"]["DELETED"] = TRUE;
  $overrides["views_view.cod_sponsors.display|block|display_options|filters|field_sponsor_sponsorship_level_tid"] = array(
    'id' => 'field_sponsor_sponsorship_level_tid',
    'table' => 'field_data_field_sponsor_sponsorship_level',
    'field' => 'field_sponsor_sponsorship_level_tid',
    'value' => array(
      1 => 1,
    ),
    'type' => 'select',
    'vocabulary' => 'sponsorship_level',
  );
  $overrides["views_view.cod_sponsors.display|block|display_options|header"] = array(
    'area' => array(
      'id' => 'area',
      'table' => 'views',
      'field' => 'area',
      'label' => 'Basic header',
      'content' => '<h3>Diamond Sponsor</h3>',
      'format' => 'full_html',
    ),
  );
  $overrides["views_view.cod_sponsors.display|block|display_options|row_plugin"] = 'fields';
  $overrides["views_view.cod_sponsors.display|block|display_options|style_plugin"] = 'default';
  $overrides["views_view.cod_sponsors.display|block|display_title"] = 'Diamond Sponsor Block';
  $overrides["views_view.cod_sponsors.display|default|display_options|empty"]["DELETED"] = TRUE;
  $overrides["views_view.cod_sponsors.display|default|display_options|header"] = array(
    'area' => array(
      'id' => 'area',
      'table' => 'views',
      'field' => 'area',
      'label' => 'Sponsors header',
      'content' => '<h3>Silver Sponsors</h3>',
      'format' => 'full_html',
    ),
  );
  $overrides["views_view.cod_sponsors.display|default|display_options|sorts|random"]["DELETED"] = TRUE;
  $overrides["views_view.cod_sponsors.display|default|display_options|sorts|title"] = array(
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
  );
  $overrides["views_view.cod_sponsors.display|default|display_options|style_options"] = array(
    'grouping' => array(
      0 => array(
        'field' => 'field_sponsor_sponsorship_level',
        'rendered' => 1,
        'rendered_strip' => 0,
      ),
    ),
  );
  $overrides["views_view.cod_sponsors.display|default|display_options|style_plugin"] = 'default';
  $overrides["views_view.cod_sponsors.display|default|display_options|title"] = '<none>';
  $overrides["views_view.cod_sponsors.display|page|display_options|defaults|filter_groups"] = FALSE;
  $overrides["views_view.cod_sponsors.display|page|display_options|defaults|filters"] = FALSE;
  $overrides["views_view.cod_sponsors.display|page|display_options|defaults|header"] = FALSE;
  $overrides["views_view.cod_sponsors.display|page|display_options|defaults|title"] = FALSE;
  $overrides["views_view.cod_sponsors.display|page|display_options|fields|field_sponsor_sponsorship_level"]["DELETED"] = TRUE;
  $overrides["views_view.cod_sponsors.display|page|display_options|fields|title"]["DELETED"] = TRUE;
  $overrides["views_view.cod_sponsors.display|page|display_options|filters"] = array(
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
  );
  $overrides["views_view.cod_sponsors.display|page|display_options|menu|type"]["DELETED"] = TRUE;
  $overrides["views_view.cod_sponsors.display|page|display_options|style_options|grouping"]["DELETED"] = TRUE;
  $overrides["views_view.cod_sponsors.display|page|display_options|title"] = 'Sponsors';
  $overrides["views_view.comments_recent.display|default|display_options|fields|subject|link_to_comment"]["DELETED"] = TRUE;
  $overrides["views_view.comments_recent.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.comments_recent.display|page|display_options|fields|subject|link_to_comment"]["DELETED"] = TRUE;
  $overrides["views_view.comments_recent.display|page|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|exception|title_enable"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|summary_options|inline"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|inherit_arguments"] = FALSE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|exception|title_enable"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|name|link_to_user"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|sticky"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|break_phrase"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.tracker.display|default|display_options|arguments|uid_touch|exception|title_enable"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|arguments|uid_touch|specify_validation"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|arguments|uid_touch|title_enable"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|fields|new_comments|link_to_comment"]["DELETED"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|fields|timestamp|comments"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|fields|timestamp|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|use_more_always"] = FALSE;

 return $overrides;
}
