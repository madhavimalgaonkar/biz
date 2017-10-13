<?php
/**
 * @file
 * bizballoon_mail_feat.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bizballoon_mail_feat_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
