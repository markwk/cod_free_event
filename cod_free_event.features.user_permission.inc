<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function cod_free_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: create free_event content
  $permissions['create free_event content'] = array(
    'name' => 'create free_event content',
    'roles' => array(
      '0' => 'session organizer',
      '1' => 'site administrator',
      '2' => 'sponsor organizer',
    ),
  );

  // Exported permission: delete any free_event content
  $permissions['delete any free_event content'] = array(
    'name' => 'delete any free_event content',
    'roles' => array(
      '0' => 'session organizer',
      '1' => 'site administrator',
      '2' => 'sponsor organizer',
    ),
  );

  // Exported permission: delete own free_event content
  $permissions['delete own free_event content'] = array(
    'name' => 'delete own free_event content',
    'roles' => array(),
  );

  // Exported permission: edit any free_event content
  $permissions['edit any free_event content'] = array(
    'name' => 'edit any free_event content',
    'roles' => array(
      '0' => 'session organizer',
      '1' => 'site administrator',
      '2' => 'sponsor organizer',
    ),
  );

  // Exported permission: edit own free_event content
  $permissions['edit own free_event content'] = array(
    'name' => 'edit own free_event content',
    'roles' => array(),
  );

  return $permissions;
}
