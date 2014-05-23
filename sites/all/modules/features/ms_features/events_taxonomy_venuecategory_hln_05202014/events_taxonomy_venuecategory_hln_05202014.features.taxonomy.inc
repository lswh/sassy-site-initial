<?php
/**
 * @file
 * events_taxonomy_venuecategory_hln_05202014.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function events_taxonomy_venuecategory_hln_05202014_taxonomy_default_vocabularies() {
  return array(
    'venue_category' => array(
      'name' => 'Venue Category',
      'machine_name' => 'venue_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
