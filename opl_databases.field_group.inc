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
  $field_group->identifier = 'group_basic|node|database|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title / Description',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_db_abstract',
      2 => 'field_popular_db',
      3 => 'field_resource_note',
      4 => 'title_field',
      5 => 'flag',
      6 => 'language',
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
  $field_groups['group_basic|node|database|form'] = $field_group;

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
  $field_group->identifier = 'group_databases|taxonomy_term|item_formats|form';
  $field_group->group_name = 'group_databases';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'item_formats';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Database(s)',
    'weight' => '1',
    'children' => array(
      0 => 'field_database',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-databases field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_databases|taxonomy_term|item_formats|form'] = $field_group;

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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|database|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images / Files',
    'weight' => '2',
    'children' => array(
      0 => 'field_image_feature_box',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_images|node|database|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_formats|node|database|form';
  $field_group->group_name = 'group_item_formats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Item Formats',
    'weight' => '8',
    'children' => array(
      0 => 'field_browse_local_format',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-item-formats field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_item_formats|node|database|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|database|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links: DB & Help Guides',
    'weight' => '4',
    'children' => array(
      0 => 'field_database_link',
      1 => 'field_help_guide',
      2 => 'field_guide',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_links|node|database|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mobile|node|database|form';
  $field_group->group_name = 'group_mobile';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mobile Links / Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_is_mobile',
      1 => 'field_mobile_description',
      2 => 'field_mobile_link',
      3 => 'field_mobile_link_android',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mobile field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_mobile|node|database|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_terms|node|database|form';
  $field_group->group_name = 'group_terms';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Terms / Descriptors',
    'weight' => '9',
    'children' => array(
      0 => 'taxonomy_vocabulary_30',
      1 => 'taxonomy_vocabulary_38',
      2 => 'taxonomy_vocabulary_21',
      3 => 'field_unilingual_resource',
      4 => 'field_browse_items_catagory',
      5 => 'field_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-terms field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_terms|node|database|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vendor|node|database|form';
  $field_group->group_name = 'group_vendor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vendor, License and Usage Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_resource_in_library',
      1 => 'field_vendor_contact',
      2 => 'field_licence_expires',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Vendor, License and Usage Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-vendor field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_vendor|node|database|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Database(s)');
  t('FAQs / Help Guides');
  t('Images / Files');
  t('Item Formats');
  t('Links: DB & Help Guides');
  t('Mobile Links / Details');
  t('Name / Description');
  t('Terms / Descriptors');
  t('Title / Description');
  t('Vendor, License and Usage Details');

  return $field_groups;
}
