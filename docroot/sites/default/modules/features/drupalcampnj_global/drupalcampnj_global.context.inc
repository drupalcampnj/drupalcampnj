<?php
/**
 * @file
 * drupalcampnj_global.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalcampnj_global_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcampnj_global';
  $context->description = 'Block settings for every page';
  $context->tag = '';
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
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'njblocks-footer_contact_info' => array(
          'module' => 'njblocks',
          'delta' => 'footer_contact_info',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block settings for every page');
  $export['drupalcampnj_global'] = $context;

  return $export;
}
