<?php
/**
 * @file
 * general_profiletype_didierprofilelist_hln_05202014.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function general_profiletype_didierprofilelist_hln_05202014_default_profile2_type() {
  $items = array();
  $items['bartender'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "bartender",
    "label" : "Bartender",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  $items['dancer'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "dancer",
    "label" : "Dancer",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  $items['dj'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "dj",
    "label" : "Dj",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  $items['event_organizer'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "event_organizer",
    "label" : "Event Organizer",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : true, "use_page" : true },
    "rdf_mapping" : []
  }');
  $items['model'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "model",
    "label" : "Model",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  $items['stripper'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "stripper",
    "label" : "Stripper",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  $items['usher'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "usher",
    "label" : "Usher",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
