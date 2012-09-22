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
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'draw',
          'weight' => '-38',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'draw',
          'weight' => '-37',
        ),
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'draw',
          'weight' => '-36',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'tertiary_content',
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
