<?php

/**
 * @file
 * Acquia's MySQL database driver.
 */

// Include the classes we extend.
require_once DRUPAL_ROOT . '/includes/database/database.inc';
require_once DRUPAL_ROOT . '/includes/database/mysql/database.inc';

/**
 * @addtogroup database
 * @{
 */

class DatabaseConnection_ahmysqldseven extends DatabaseConnection_mysql {

  /**
   * Implements SA-CORE-2014-005. No other changes. Eventually, we can extend
   * this driver to do helpful Acquia Cloud optimizations.
   *
   * Expands out shorthand placeholders.
   *
   * Drupal supports an alternate syntax for doing arrays of values. We
   * therefore need to expand them out into a full, executable query string.
   *
   * @param $query
   *   The query string to modify.
   * @param $args
   *   The arguments for the query.
   *
   * @return
   *   TRUE if the query was modified, FALSE otherwise.
   */
  protected function expandArguments(&$query, &$args) {
    $modified = FALSE;

    // If the placeholder value to insert is an array, assume that we need
    // to expand it out into a comma-delimited set of placeholders.
    foreach (array_filter($args, 'is_array') as $key => $data) {
      $new_keys = array();
      foreach (array_values($data) as $i => $value) {
        // This assumes that there are no other placeholders that use the same
        // name.  For example, if the array placeholder is defined as :example
        // and there is already an :example_2 placeholder, this will generate
        // a duplicate key.  We do not account for that as the calling code
        // is already broken if that happens.
        $new_keys[$key . '_' . $i] = $value;
      }

      // Update the query with the new placeholders.
      // preg_replace is necessary to ensure the replacement does not affect
      // placeholders that start with the same exact text. For example, if the
      // query contains the placeholders :foo and :foobar, and :foo has an
      // array of values, using str_replace would affect both placeholders,
      // but using the following preg_replace would only affect :foo because
      // it is followed by a non-word character.
      $query = preg_replace('#' . $key . '\b#', implode(', ', array_keys($new_keys)), $query);

      // Update the args array with the new placeholders.
      unset($args[$key]);
      $args += $new_keys;

      $modified = TRUE;
    }

    return $modified;
  }
}


/**
 * @} End of "addtogroup database".
 */
