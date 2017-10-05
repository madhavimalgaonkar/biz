<?php
/**
 * @file
 * Provides functionality to be used for setting local instance.
 */

// Disable css and js aggregation.
$conf['preprocess_css'] = 0;
$conf['preprocess_js'] = 0;

// Disable caching
$conf['cache'] = 0;

// Enable full error reporting.
$conf['error_level'] = 2;

// Configure local database connection.
$databases = array(
  'default' =>
  array(
    'default' =>
    array(
      'database' => '',
      'username' => '',
      'password' => '',
      'host' => '',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);

/**
 * Smart start:
 *
 * If you would prefer to be redirected to the installation system when a
 * valid settings.php file is present but no tables are installed, remove
 * the leading hash sign below.
 */
$conf['pressflow_smart_start'] = TRUE;

if (!defined('MAINTENANCE_MODE')) {
  // Set the environment mode to develpoment.
  $conf['environment_override'] = 'development';
}
