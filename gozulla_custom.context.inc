<?php
/**
 * @file
 * gozulla_custom.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gozulla_custom_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_blocks';
  $context->description = 'displays blocks or other content that should always be present.';
  $context->tag = 'theme';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => 1,
          'region' => 'top_navigation_bar',
          'weight' => '-10',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'draw',
          'weight' => '-10',
        ),
        'webform-client-block-2528' => array(
          'module' => 'webform',
          'delta' => 'client-block-2528',
          'region' => 'draw',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('displays blocks or other content that should always be present.');
  t('theme');
  $export['sitewide_blocks'] = $context;

  return $export;
}
