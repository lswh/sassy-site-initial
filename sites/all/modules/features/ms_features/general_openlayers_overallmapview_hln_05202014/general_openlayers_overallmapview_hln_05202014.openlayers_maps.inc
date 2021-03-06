<?php
/**
 * @file
 * general_openlayers_overallmapview_hln_05202014.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function general_openlayers_overallmapview_hln_05202014_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'map_view';
  $openlayers_maps->title = 'Map View';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '120.9374999711504, 14.604847159448763',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '13453452.030179,1616031.656515,13488918.811297,1663575.4881',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_geolocate' => array(
        'bind' => '1',
        'zoom_level' => '12',
        'watch' => '1',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => 'ASC',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
        'div' => '',
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_permalink' => array(
        'anchor' => 0,
      ),
      'openlayers_behavior_tooltip' => array(
        'layers' => array(
          'all_magazine_articles_openlayers_1' => 'all_magazine_articles_openlayers_1',
        ),
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_hybrid' => 'google_hybrid',
      'google_normal' => 'google_normal',
      'google_physical' => 'google_physical',
      'mapquest_osm' => 'mapquest_osm',
      'mapquest_openaerial' => 'mapquest_openaerial',
      'osm_mapnik' => 'osm_mapnik',
      'mapbox_world_dark' => 'mapbox_world_dark',
      'mapbox_world_black' => 'mapbox_world_black',
      'all_magazine_articles_openlayers_1' => 'all_magazine_articles_openlayers_1',
    ),
    'layer_weight' => array(
      'all_magazine_articles_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'all_magazine_articles_openlayers_1' => '0',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'all_magazine_articles_openlayers_1' => '0',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'all_magazine_articles_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'all_magazine_articles_openlayers_1' => 'all_magazine_articles_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'all_magazine_articles_openlayers_1' => 'all_magazine_articles_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['map_view'] = $openlayers_maps;

  return $export;
}
