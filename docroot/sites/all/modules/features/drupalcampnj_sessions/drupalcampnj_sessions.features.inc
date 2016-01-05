<?php
/**
 * @file
 * drupalcampnj_sessions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcampnj_sessions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalcampnj_sessions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupalcampnj_sessions_node_info() {
  $items = array(
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('A session for the camp.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<strong class="msg error"><em>Session submissions will close on Friday, December 18, 2015, so that the full schedule can be posted in early January. No sessions will be considered if submitted after this deadline.</em></strong>'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
