<?php
/**
 * @file
 * general_openlayers_overallmapview_hln_05202014.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function general_openlayers_overallmapview_hln_05202014_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}
