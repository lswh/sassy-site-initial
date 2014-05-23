<?php
/**
 * @file
 * general_userroles_didierroles_hln_05202014.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function general_userroles_didierroles_hln_05202014_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: bartender.
  $roles['bartender'] = array(
    'name' => 'bartender',
    'weight' => 10,
  );

  // Exported role: dancer.
  $roles['dancer'] = array(
    'name' => 'dancer',
    'weight' => 8,
  );

  // Exported role: dj.
  $roles['dj'] = array(
    'name' => 'dj',
    'weight' => 4,
  );

  // Exported role: event organizer.
  $roles['event organizer'] = array(
    'name' => 'event organizer',
    'weight' => 5,
  );

  // Exported role: model.
  $roles['model'] = array(
    'name' => 'model',
    'weight' => 6,
  );

  // Exported role: stripper.
  $roles['stripper'] = array(
    'name' => 'stripper',
    'weight' => 11,
  );

  // Exported role: usher.
  $roles['usher'] = array(
    'name' => 'usher',
    'weight' => 9,
  );

  // Exported role: writer contributor.
  $roles['writer contributor'] = array(
    'name' => 'writer contributor',
    'weight' => 3,
  );

  return $roles;
}
