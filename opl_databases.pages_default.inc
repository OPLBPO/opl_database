<?php
/**
 * @file
 * opl_databases.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function opl_databases_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_node_database_search_result__panel_context_16516cb0-3836-4ef6-9393-7f8abc58cb60';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-database-search_result';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Database - search result',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'no-main-content-container-bg',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'search_result_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '54cb90e2-9d4d-4142-b31b-fbb37f5222a5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_database_search_result__panel_context_16516cb0-3836-4ef6-9393-7f8abc58cb60';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e8788139-4c5b-4f2c-aca2-7ab0d60391b1';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_feature_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'search-result-image',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e8788139-4c5b-4f2c-aca2-7ab0d60391b1';
  $display->content['new-e8788139-4c5b-4f2c-aca2-7ab0d60391b1'] = $pane;
  $display->panels['left'][0] = 'new-e8788139-4c5b-4f2c-aca2-7ab0d60391b1';
  $pane = new stdClass();
  $pane->pid = 'new-5dc91fa2-ea02-4cf8-a210-963f02846666';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => 'h3',
      'title_link' => 'content',
      'title_class' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'search-result-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5dc91fa2-ea02-4cf8-a210-963f02846666';
  $display->content['new-5dc91fa2-ea02-4cf8-a210-963f02846666'] = $pane;
  $display->panels['right'][0] = 'new-5dc91fa2-ea02-4cf8-a210-963f02846666';
  $pane = new stdClass();
  $pane->pid = 'new-82a6b529-dc37-4583-acb9-39b65e0c1fd0';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'smart_trim_format',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'readmore_trim_length' => '160',
      'readmore_trim_on_break' => 1,
      'readmore_show_readless' => 0,
      'readmore_ellipsis' => 1,
      'readmore_wordsafe' => 1,
      'trim_length' => '40',
      'trim_type' => 'words',
      'trim_suffix' => '...',
      'trim_link' => '0',
      'more_link' => '0',
      'more_text' => 'Read more',
      'summary_handler' => 'full',
      'trim_options' => array(
        'text' => 'text',
      ),
      'trim_preserve_tags' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'search-result-body',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '82a6b529-dc37-4583-acb9-39b65e0c1fd0';
  $display->content['new-82a6b529-dc37-4583-acb9-39b65e0c1fd0'] = $pane;
  $display->panels['right'][1] = 'new-82a6b529-dc37-4583-acb9-39b65e0c1fd0';
  $pane = new stdClass();
  $pane->pid = 'new-63649d8b-270f-41d0-b718-3d2128fcb4e9';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_database_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'formatted_database_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'search-result-location',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '63649d8b-270f-41d0-b718-3d2128fcb4e9';
  $display->content['new-63649d8b-270f-41d0-b718-3d2128fcb4e9'] = $pane;
  $display->panels['right'][2] = 'new-63649d8b-270f-41d0-b718-3d2128fcb4e9';
  $pane = new stdClass();
  $pane->pid = 'new-bf9c410f-6149-4f50-9811-61abcac2f476';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_resource_note';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bf9c410f-6149-4f50-9811-61abcac2f476';
  $display->content['new-bf9c410f-6149-4f50-9811-61abcac2f476'] = $pane;
  $display->panels['right'][3] = 'new-bf9c410f-6149-4f50-9811-61abcac2f476';
  $pane = new stdClass();
  $pane->pid = 'new-6a528eef-05d1-42a5-8116-59ddd85b78a5';
  $pane->panel = 'right';
  $pane->type = 'flag_link';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'flag_name' => 'bookmarks',
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6a528eef-05d1-42a5-8116-59ddd85b78a5';
  $display->content['new-6a528eef-05d1-42a5-8116-59ddd85b78a5'] = $pane;
  $display->panels['right'][4] = 'new-6a528eef-05d1-42a5-8116-59ddd85b78a5';
  $pane = new stdClass();
  $pane->pid = 'new-5ef7ac22-66af-4611-91f0-ef303ed295de';
  $pane->panel = 'right';
  $pane->type = 'token';
  $pane->subtype = 'node:content-type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '5ef7ac22-66af-4611-91f0-ef303ed295de';
  $display->content['new-5ef7ac22-66af-4611-91f0-ef303ed295de'] = $pane;
  $display->panels['right'][5] = 'new-5ef7ac22-66af-4611-91f0-ef303ed295de';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e8788139-4c5b-4f2c-aca2-7ab0d60391b1';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_database_search_result__panel_context_16516cb0-3836-4ef6-9393-7f8abc58cb60'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_node_database_teaser__panel_context_ca3c21ee-8ed3-471e-9845-2e942315eccb';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-database-teaser';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Database default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '106e860e-e684-4519-9f7a-ea2d74496c70';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_database_teaser__panel_context_ca3c21ee-8ed3-471e-9845-2e942315eccb';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b4c02eac-413c-4c58-b07a-92ff820ba200';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<header><a>Online resource</a> / %node:taxonomy-vocabulary-21</header>
',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b4c02eac-413c-4c58-b07a-92ff820ba200';
  $display->content['new-b4c02eac-413c-4c58-b07a-92ff820ba200'] = $pane;
  $display->panels['middle'][0] = 'new-b4c02eac-413c-4c58-b07a-92ff820ba200';
  $pane = new stdClass();
  $pane->pid = 'new-80c1ec26-9599-46e5-a4d3-dfe917b41577';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_feature_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => 'content',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '80c1ec26-9599-46e5-a4d3-dfe917b41577';
  $display->content['new-80c1ec26-9599-46e5-a4d3-dfe917b41577'] = $pane;
  $display->panels['middle'][1] = 'new-80c1ec26-9599-46e5-a4d3-dfe917b41577';
  $pane = new stdClass();
  $pane->pid = 'new-017c4ad4-9f96-4d78-84b8-3f79a7759046';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => 'h3',
      'title_link' => 'content',
      'title_class' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '017c4ad4-9f96-4d78-84b8-3f79a7759046';
  $display->content['new-017c4ad4-9f96-4d78-84b8-3f79a7759046'] = $pane;
  $display->panels['middle'][2] = 'new-017c4ad4-9f96-4d78-84b8-3f79a7759046';
  $pane = new stdClass();
  $pane->pid = 'new-f3de3e20-9b83-4b66-941b-64464d5205d2';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_database_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_url',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f3de3e20-9b83-4b66-941b-64464d5205d2';
  $display->content['new-f3de3e20-9b83-4b66-941b-64464d5205d2'] = $pane;
  $display->panels['middle'][3] = 'new-f3de3e20-9b83-4b66-941b-64464d5205d2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_database_teaser__panel_context_ca3c21ee-8ed3-471e-9845-2e942315eccb'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_1d444265-3361-49f4-85e4-0cf1ddcff98d';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Database',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'database' => 'database',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_70_30_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title_field';
  $display->uuid = '80c1d4ee-631f-4b00-9b80-2ce31e447f03';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_1d444265-3361-49f4-85e4-0cf1ddcff98d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1a78d45b-a727-48a3-8436-3e6a84cbe6da';
  $pane->panel = 'bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_resource_note';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1a78d45b-a727-48a3-8436-3e6a84cbe6da';
  $display->content['new-1a78d45b-a727-48a3-8436-3e6a84cbe6da'] = $pane;
  $display->panels['bottom'][0] = 'new-1a78d45b-a727-48a3-8436-3e6a84cbe6da';
  $pane = new stdClass();
  $pane->pid = 'new-47c1037d-31d0-4811-a578-da09305b3c34';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_feature_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'single-event-blog-image',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '47c1037d-31d0-4811-a578-da09305b3c34';
  $display->content['new-47c1037d-31d0-4811-a578-da09305b3c34'] = $pane;
  $display->panels['left'][0] = 'new-47c1037d-31d0-4811-a578-da09305b3c34';
  $pane = new stdClass();
  $pane->pid = 'new-9201b5fa-eec9-46b2-bca5-81e6d28dd3c8';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9201b5fa-eec9-46b2-bca5-81e6d28dd3c8';
  $display->content['new-9201b5fa-eec9-46b2-bca5-81e6d28dd3c8'] = $pane;
  $display->panels['left'][1] = 'new-9201b5fa-eec9-46b2-bca5-81e6d28dd3c8';
  $pane = new stdClass();
  $pane->pid = 'new-5bab5c06-306d-47e3-a92c-61ac31690e14';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_database_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'formatted_database_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5bab5c06-306d-47e3-a92c-61ac31690e14';
  $display->content['new-5bab5c06-306d-47e3-a92c-61ac31690e14'] = $pane;
  $display->panels['left'][2] = 'new-5bab5c06-306d-47e3-a92c-61ac31690e14';
  $pane = new stdClass();
  $pane->pid = 'new-fce7313d-f5da-4ee8-ac9b-cce145cd7de5';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_category';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'database_subjects_new',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'More like this',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fce7313d-f5da-4ee8-ac9b-cce145cd7de5';
  $display->content['new-fce7313d-f5da-4ee8-ac9b-cce145cd7de5'] = $pane;
  $display->panels['right'][0] = 'new-fce7313d-f5da-4ee8-ac9b-cce145cd7de5';
  $pane = new stdClass();
  $pane->pid = 'new-6bae96fa-5789-4b68-923f-3be8f369210c';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_help_guide';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Help guide',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6bae96fa-5789-4b68-923f-3be8f369210c';
  $display->content['new-6bae96fa-5789-4b68-923f-3be8f369210c'] = $pane;
  $display->panels['right'][1] = 'new-6bae96fa-5789-4b68-923f-3be8f369210c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_1d444265-3361-49f4-85e4-0cf1ddcff98d'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function opl_databases_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'databases_search_all';
  $page->task = 'page';
  $page->admin_title = 'Databases - search all';
  $page->admin_description = '';
  $page->path = 'databases/search-all';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_databases_search_all__panel';
  $handler->task = 'page';
  $handler->subtask = 'databases_search_all';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'no-main-content-container-bg',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1ae6a01f-1577-4794-9954-de5fe4f7727f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_databases_search_all__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-820b45b4-fb67-4562-b130-220f99fb4cc6';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'opl_databases_new_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '820b45b4-fb67-4562-b130-220f99fb4cc6';
  $display->content['new-820b45b4-fb67-4562-b130-220f99fb4cc6'] = $pane;
  $display->panels['middle'][0] = 'new-820b45b4-fb67-4562-b130-220f99fb4cc6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-820b45b4-fb67-4562-b130-220f99fb4cc6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['databases_search_all'] = $page;

  return $pages;

}
