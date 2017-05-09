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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
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
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_target_id']['id'] = 'field_category_target_id';
  $handler->display->display_options['filters']['field_category_target_id']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_target_id']['field'] = 'field_category_target_id';
  $handler->display->display_options['filters']['field_category_target_id']['value'] = array(
    1782 => '1782',
    1785 => '1785',
    1786 => '1786',
    1787 => '1787',
    1788 => '1788',
    1790 => '1790',
    1792 => '1792',
    1793 => '1793',
    1799 => '1799',
    1800 => '1800',
    1802 => '1802',
    1804 => '1804',
    1809 => '1809',
    1810 => '1810',
    1811 => '1811',
    1812 => '1812',
    1814 => '1814',
    1815 => '1815',
    1817 => '1817',
    1818 => '1818',
    1821 => '1821',
  );
  $handler->display->display_options['filters']['field_category_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id']['expose']['operator_id'] = 'field_category_target_id_op';
  $handler->display->display_options['filters']['field_category_target_id']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_category_target_id']['expose']['operator'] = 'field_category_target_id_op';
  $handler->display->display_options['filters']['field_category_target_id']['expose']['identifier'] = 'subject';
  $handler->display->display_options['filters']['field_category_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
  );
  $handler->display->display_options['filters']['field_category_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: homepage block */
  $handler = $view->new_display('block', 'homepage block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'masonry home-item';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: bookmarks */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bookmarks';
  /* Relationship: Entityqueue: Content Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'home_page_databases' => 'home_page_databases',
    'featured_blogs' => 0,
    'kids_databases' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Entityqueue: Content In Queue */
  $handler->display->display_options['filters']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['filters']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['value'] = '1';
  $handler->display->display_options['block_description'] = 'homepage database block';
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
    t('Apply'),
    t('Reset'),
    t('Category'),
    t('homepage block'),
    t('Content Queue'),
    t('homepage database block'),
  );
  $export['opl_databases_new_'] = $view;

  return $export;
}
