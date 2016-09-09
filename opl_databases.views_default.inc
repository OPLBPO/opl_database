<?php
/**
 * @file
 * opl_databases.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opl_databases_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'opl_databases_new_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OPL databases (new)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Online resources';
  $handler->display->display_options['css_class'] = 'masonry';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'taxonomy_vocabulary_21_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'search-result-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_result';
  /* Relationship: Flags: bookmarks */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bookmarks';
  /* Field: Content: Database Link */
  $handler->display->display_options['fields']['field_database_link']['id'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['table'] = 'field_data_field_database_link';
  $handler->display->display_options['fields']['field_database_link']['field'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['label'] = '';
  $handler->display->display_options['fields']['field_database_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_database_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_database_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_database_link']['type'] = 'link_plain';
  /* Field: Content: Feature Box Image */
  $handler->display->display_options['fields']['field_image_feature_box']['id'] = 'field_image_feature_box';
  $handler->display->display_options['fields']['field_image_feature_box']['table'] = 'field_data_field_image_feature_box';
  $handler->display->display_options['fields']['field_image_feature_box']['field'] = 'field_image_feature_box';
  $handler->display->display_options['fields']['field_image_feature_box']['label'] = '';
  $handler->display->display_options['fields']['field_image_feature_box']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_feature_box']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_feature_box']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_feature_box']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_db_abstract']['id'] = 'field_db_abstract';
  $handler->display->display_options['fields']['field_db_abstract']['table'] = 'field_data_field_db_abstract';
  $handler->display->display_options['fields']['field_db_abstract']['field'] = 'field_db_abstract';
  $handler->display->display_options['fields']['field_db_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_db_abstract']['element_label_colon'] = FALSE;
  /* Field: Content: Note */
  $handler->display->display_options['fields']['field_resource_note']['id'] = 'field_resource_note';
  $handler->display->display_options['fields']['field_resource_note']['table'] = 'field_data_field_resource_note';
  $handler->display->display_options['fields']['field_resource_note']['field'] = 'field_resource_note';
  $handler->display->display_options['fields']['field_resource_note']['hide_empty'] = TRUE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: In library use only */
  $handler->display->display_options['fields']['field_resource_in_library']['id'] = 'field_resource_in_library';
  $handler->display->display_options['fields']['field_resource_in_library']['table'] = 'field_data_field_resource_in_library';
  $handler->display->display_options['fields']['field_resource_in_library']['field'] = 'field_resource_in_library';
  $handler->display->display_options['fields']['field_resource_in_library']['element_label_colon'] = FALSE;
  /* Field: Content: Unilingual resource */
  $handler->display->display_options['fields']['field_unilingual_resource']['id'] = 'field_unilingual_resource';
  $handler->display->display_options['fields']['field_unilingual_resource']['table'] = 'field_data_field_unilingual_resource';
  $handler->display->display_options['fields']['field_unilingual_resource']['field'] = 'field_unilingual_resource';
  $handler->display->display_options['fields']['field_unilingual_resource']['label'] = '';
  $handler->display->display_options['fields']['field_unilingual_resource']['element_label_colon'] = FALSE;
  /* Field: Content: Licence expires */
  $handler->display->display_options['fields']['field_licence_expires']['id'] = 'field_licence_expires';
  $handler->display->display_options['fields']['field_licence_expires']['table'] = 'field_data_field_licence_expires';
  $handler->display->display_options['fields']['field_licence_expires']['field'] = 'field_licence_expires';
  $handler->display->display_options['fields']['field_licence_expires']['settings'] = array(
    'format_type' => 'event_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'database' => 'database',
  );
  /* Filter criterion: Content: Master subject list (taxonomy_vocabulary_21) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['id'] = 'taxonomy_vocabulary_21_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['table'] = 'field_data_taxonomy_vocabulary_21';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['field'] = 'taxonomy_vocabulary_21_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['value'] = array(
    1559 => '1559',
    250 => '250',
    253 => '253',
    234 => '234',
    1560 => '1560',
    236 => '236',
    941 => '941',
    259 => '259',
    438 => '438',
    261 => '261',
    241 => '241',
    256 => '256',
    1163 => '1163',
    258 => '258',
    1095 => '1095',
    244 => '244',
    596 => '596',
    238 => '238',
    433 => '433',
    243 => '243',
    237 => '237',
    883 => '883',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['expose']['operator_id'] = 'taxonomy_vocabulary_21_target_id_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['expose']['label'] = 'Browse by subject';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['expose']['operator'] = 'taxonomy_vocabulary_21_target_id_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['expose']['identifier'] = 'subject';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['expose']['remember_roles'] = array(
    2 => 0,
    15 => 0,
    6 => 0,
    1 => 0,
    24 => 0,
    7 => 0,
    12 => 0,
    14 => 0,
    16 => 0,
    9 => 0,
    3 => 0,
    21 => 0,
    20 => 0,
    18 => 0,
    22 => 0,
    5 => 0,
    26 => 0,
    11 => 0,
    23 => 0,
    10 => 0,
    19 => 0,
    4 => 0,
    25 => 0,
    13 => 0,
    8 => 0,
    17 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['group_info']['label'] = 'Master subject list (taxonomy_vocabulary_21)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['group_info']['identifier'] = 'taxonomy_vocabulary_21_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page -- all online resources */
  $handler = $view->new_display('page', 'Page -- all online resources', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p class="help-note">Need help with your eReader? <a href="http://biblioottawalibrary.ca/en/ebook-support">Visit our support page.</a></p>
';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['path'] = 'databases/search-all';
  $handler->display->display_options['menu']['title'] = 'Online resources';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Magazines and newspapers */
  $handler = $view->new_display('page', 'Magazines and newspapers', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Magazines and Newspapers';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'database' => 'database',
  );
  /* Filter criterion: Content: Master subject list (taxonomy_vocabulary_21) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['id'] = 'taxonomy_vocabulary_21_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['table'] = 'field_data_taxonomy_vocabulary_21';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['field'] = 'taxonomy_vocabulary_21_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['value'] = array(
    238 => '238',
    237 => '237',
  );
  $handler->display->display_options['path'] = 'magazines-newspapers';

  /* Display: Music */
  $handler = $view->new_display('page', 'Music', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Music and videos';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'database' => 'database',
  );
  /* Filter criterion: Content: Master subject list (taxonomy_vocabulary_21) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['id'] = 'taxonomy_vocabulary_21_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['table'] = 'field_data_taxonomy_vocabulary_21';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['field'] = 'taxonomy_vocabulary_21_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['value'] = array(
    433 => '433',
  );
  $handler->display->display_options['path'] = 'music';

  /* Display: ebooks3 */
  $handler = $view->new_display('page', 'ebooks3', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'eBooks and audiobooks';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p class="help-note">Need help with your eReader? <a href="http://biblioottawalibrary.ca/en/ebook-support">Visit our support page.</a></p>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'database' => 'database',
  );
  /* Filter criterion: Content: Master subject list (taxonomy_vocabulary_21) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['id'] = 'taxonomy_vocabulary_21_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['table'] = 'field_data_taxonomy_vocabulary_21';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['field'] = 'taxonomy_vocabulary_21_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_21_target_id']['value'] = array(
    941 => '941',
  );
  $handler->display->display_options['path'] = 'downloads';

  /* Display: Embed */
  $handler = $view->new_display('embed', 'Embed', 'embed_1');
  $translatables['opl_databases_new_'] = array(
    t('Master'),
    t('Online resources'),
    t('plus'),
    t('Search'),
    t('Clear'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('flag'),
    t('Note'),
    t('In library use only'),
    t('Licence expires'),
    t('Browse by subject'),
    t('Master subject list (taxonomy_vocabulary_21)'),
    t('Page -- all online resources'),
    t('more'),
    t('<p class="help-note">Need help with your eReader? <a href="http://biblioottawalibrary.ca/en/ebook-support">Visit our support page.</a></p>
'),
    t('Magazines and newspapers'),
    t('Magazines and Newspapers'),
    t('Music'),
    t('Music and videos'),
    t('ebooks3'),
    t('eBooks and audiobooks'),
    t('<p class="help-note">Need help with your eReader? <a href="http://biblioottawalibrary.ca/en/ebook-support">Visit our support page.</a></p>'),
    t('Embed'),
  );
  $export['opl_databases_new_'] = $view;

  return $export;
}
