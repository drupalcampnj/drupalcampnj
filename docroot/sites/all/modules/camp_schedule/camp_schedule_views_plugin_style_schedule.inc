<?php

/**
 * @file
 * Contains the session grid style plugin.
 */

/**
 * Style plugin to render sessions in a grid.
 *
 * @ingroup views_style_plugins
 */
class camp_schedule_views_plugin_style_schedule extends views_plugin_style {


  /**
   * Overrides views_plugin_style::render().
   *
   */
  function render() {
   return '<pre>' . print_r($this->view->result, 1) . '</pre>';
  }

}
