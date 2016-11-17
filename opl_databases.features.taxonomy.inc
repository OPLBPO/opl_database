<?php
/**
 * @file
 * opl_databases.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function opl_databases_taxonomy_default_vocabularies() {
  return array(
    'item_formats' => array(
      'name' => 'Item formats',
      'machine_name' => 'item_formats',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
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
    'vocabulary_21' => array(
      'name' => 'Master subject list',
      'machine_name' => 'vocabulary_21',
      'description' => 'Master subject list',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => '',
      'i18n_mode' => 1,
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
