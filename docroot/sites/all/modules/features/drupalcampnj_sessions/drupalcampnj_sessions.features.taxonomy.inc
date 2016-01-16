<?php
/**
 * @file
 * drupalcampnj_sessions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalcampnj_sessions_taxonomy_default_vocabularies() {
  return array(
    'rooms' => array(
      'name' => 'Rooms',
      'machine_name' => 'rooms',
      'description' => 'Session rooms ',
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
