<?php
/**
 * @file
 * magazine_taxonomy_nightlife_hln_05202014.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function magazine_taxonomy_nightlife_hln_05202014_taxonomy_default_vocabularies() {
  return array(
    'nightlife' => array(
      'name' => 'Nightlife',
      'machine_name' => 'nightlife',
      'description' => 'Nightlife spots',
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
