<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 
function drupalcampnj_alpha_preprocess_html(&$variables) {
  // Add conditional stylesheets for IE.
  drupal_add_css(path_to_theme() . '/css/ie7.css',
    array(
      'group' => CSS_THEME,
      'browsers' => array(
        'IE' => 'lte IE 7',
        '!IE' => FALSE,
      ),
      'weight' => 999,
      'every_page' => TRUE,
    )
  );
}

function drupalcampnj_alpha_preprocess_node(&$vars) {
  // custom functionality here
  // The read more link is ugly...
  if ($vars['type'] == 'page') {
    unset($vars['content']['links']['node']['#links']['node-readmore']);
  }
}


