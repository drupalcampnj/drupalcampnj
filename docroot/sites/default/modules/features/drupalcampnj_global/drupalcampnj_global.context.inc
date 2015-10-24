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
  $context->name = 'drupalcampnj_front';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block' => array(
          'module' => 'views',
          'delta' => 'news-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['drupalcampnj_front'] = $context;

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
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'views-sponsors-block' => array(
          'module' => 'views',
          'delta' => 'sponsors-block',
          'region' => 'sponsors',
          'weight' => '-10',
        ),
        'views-sponsors-block_1' => array(
          'module' => 'views',
          'delta' => 'sponsors-block_1',
          'region' => 'sponsors',
          'weight' => '-9',
        ),
        'views-sponsors-block_2' => array(
          'module' => 'views',
          'delta' => 'sponsors-block_2',
          'region' => 'sponsors',
          'weight' => '-8',
        ),
        'views-sponsors-block_3' => array(
          'module' => 'views',
          'delta' => 'sponsors-block_3',
          'region' => 'sponsors',
          'weight' => '-7',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcampnj_subpages';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'njblocks-tickets_registration' => array(
          'module' => 'njblocks',
          'delta' => 'tickets_registration',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['drupalcampnj_subpages'] = $context;

  return $export;
}