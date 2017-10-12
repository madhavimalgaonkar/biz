<?php
/**
 * @file
 * bizballoon_user_registration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bizballoon_user_registration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
