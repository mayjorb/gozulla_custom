<?php
/**
 * @file
 * gozulla_custom.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gozulla_custom_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
