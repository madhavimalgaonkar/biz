<?php
/**
 * @file
 * bizballoon_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bizballoon_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bizballoon_omega_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'omega_toggle_front_page_content' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'omega_enable_warning' => TRUE,
    'omega_toggle_extension_assets' => 0,
    'omega_js_footer' => NULL,
    'omega_css_exclude' => NULL,
    'omega_js_exclude' => NULL,
    'omega_libraries' => array(
      'selectivizr' => array(
        'status' => '0',
      ),
      'respond' => array(
        'status' => '0',
      ),
      'pie' => array(
        'status' => '0',
      ),
      'html5shiv' => array(
        'status' => '1',
      ),
      'messages' => array(
        'status' => '1',
      ),
    ),
    'omega_toggle_extension_development' => 1,
    'omega_enable_export_reminder' => 1,
    'omega_rebuild_theme_registry' => 0,
    'omega_rebuild_aggregates' => 0,
    'omega_browser_width_indicator' => 0,
    'omega_livereload' => 0,
    'omega_livereload_script' => 'http://localhost:35729/livereload.js',
    'omega_livereload_host' => 'localhost',
    'omega_livereload_port' => '35729',
    'omega_demo_regions' => 1,
    'omega_demo_regions_list' => array(
      'header' => 'header',
      'navigation' => 'navigation',
      'highlighted' => 'highlighted',
      'help' => 'help',
      'content' => 'content',
      'sidebar_first' => 'sidebar_first',
      'sidebar_second' => 'sidebar_second',
      'footer' => 'footer',
      'branding' => 0,
    ),
    'omega_toggle_extension_layouts' => 1,
    'omega_layout' => 'hero',
    'omega_toggle_extension_compatibility' => 1,
    'omega_conditional_classes_html' => 1,
    'omega_apple_touch' => 1,
    'omega_cleartype' => 1,
    'omega_handheld_friendly' => 1,
    'omega_mobile_optimized' => 1,
    'omega_viewport' => 1,
    'omega_viewport_initial_scale' => '_default',
    'omega_viewport_user_scaleable' => 1,
    'omega_viewport_minimum_scale' => '_default',
    'omega_viewport_maximum_scale' => '_default',
    'omega_chrome_edge' => 1,
    'omega_internet_explorer_support' => '_none',
  );
  $export['theme_bizballoon_omega_settings'] = $strongarm;

  return $export;
}
