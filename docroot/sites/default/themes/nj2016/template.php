<?php

/**
 * Implements template_preprocess_page().
 */
function cbii_preprocess_page(&$variables) {
  
// Add JS and CSS for meanmenu
  if ($path = libraries_get_path('meanmenu')) {
    drupal_add_js($path . '/jquery.meanmenu.js');
    drupal_add_js(drupal_get_path('theme', 'cbii') . '/js/meanmenu.js');
  }
}