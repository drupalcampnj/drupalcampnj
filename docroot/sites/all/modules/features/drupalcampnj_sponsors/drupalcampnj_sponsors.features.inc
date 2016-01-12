<?php
/**
 * @file
 * drupalcampnj_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcampnj_sponsors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalcampnj_sponsors_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function drupalcampnj_sponsors_image_default_styles() {
  $styles = array();

  // Exported image style: sponsor-large.
  $styles['sponsor-large'] = array(
    'label' => 'sponsor-large',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => 200,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sponsor-medium.
  $styles['sponsor-medium'] = array(
    'label' => 'sponsor-medium',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => 175,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sponsor-small.
  $styles['sponsor-small'] = array(
    'label' => 'sponsor-small',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function drupalcampnj_sponsors_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('A sponsor of the camp.'),
      'has_title' => '1',
      'title_label' => t('Organization Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
