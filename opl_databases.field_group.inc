<?php
/**
 * @file
 * opl_databases.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function opl_databases_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|taxonomy_term|item_formats|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'item_formats';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name / Description',
    'weight' => '0',
    'children' => array(
      0 => 'field_database',
      1 => 'path',
      2 => 'name',
      3 => 'description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_basic|taxonomy_term|item_formats|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq|taxonomy_term|item_formats|form';
  $field_group->group_name = 'group_faq';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'item_formats';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FAQs / Help Guides',
    'weight' => '1',
    'children' => array(
      0 => 'field_faq',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-faq field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_faq|taxonomy_term|item_formats|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('FAQs / Help Guides');
  t('Name / Description');

  return $field_groups;
}
