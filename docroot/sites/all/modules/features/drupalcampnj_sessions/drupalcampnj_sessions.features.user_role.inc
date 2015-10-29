<?php
/**
 * @file
 * drupalcampnj_sessions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drupalcampnj_sessions_user_default_roles() {
  $roles = array();

  // Exported role: attendee.
  $roles['attendee'] = array(
    'name' => 'attendee',
    'weight' => 2,
  );

  return $roles;
}
