<?php
/**
 * @file
 * bizballoon_user_registration.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function bizballoon_user_registration_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'register';
  $page->task = 'page';
  $page->admin_title = 'Register';
  $page->admin_description = '';
  $page->path = 'register';
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
  $handler->name = 'page_register__panel';
  $handler->task = 'page';
  $handler->subtask = 'register';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '50.83200451178071',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '49.16799548821975',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 3,
          1 => 2,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'login',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'login' => array(
        'type' => 'region',
        'title' => 'login',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'login' => NULL,
      'farleft' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ba5262d7-b18d-4012-b014-2ac5ffb4992e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_register__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-21498489-6628-4af5-a835-adffe27f1083';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'formblock-user_register';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Sign Up',
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
  $pane->uuid = '21498489-6628-4af5-a835-adffe27f1083';
  $display->content['new-21498489-6628-4af5-a835-adffe27f1083'] = $pane;
  $display->panels['center'][0] = 'new-21498489-6628-4af5-a835-adffe27f1083';
  $pane = new stdClass();
  $pane->pid = 'new-a87e8f4f-fc30-4bc1-8777-0534935f4f1a';
  $pane->panel = 'login';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'OR',
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
  $pane->uuid = 'a87e8f4f-fc30-4bc1-8777-0534935f4f1a';
  $display->content['new-a87e8f4f-fc30-4bc1-8777-0534935f4f1a'] = $pane;
  $display->panels['login'][0] = 'new-a87e8f4f-fc30-4bc1-8777-0534935f4f1a';
  $pane = new stdClass();
  $pane->pid = 'new-e221f1a6-aa1c-41dd-afa7-785ca7186228';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'hybridauth-hybridauth';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Login With',
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
  $pane->uuid = 'e221f1a6-aa1c-41dd-afa7-785ca7186228';
  $display->content['new-e221f1a6-aa1c-41dd-afa7-785ca7186228'] = $pane;
  $display->panels['top'][0] = 'new-e221f1a6-aa1c-41dd-afa7-785ca7186228';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['register'] = $page;

  return $pages;

}
