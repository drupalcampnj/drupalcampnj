<?php

/**
 * Implements template_preprocess_node().
 */
function nj2016_preprocess_node(&$vars) {
  $vars['submitted'] = t('By !username', array('!username' => $vars['name']));
}
