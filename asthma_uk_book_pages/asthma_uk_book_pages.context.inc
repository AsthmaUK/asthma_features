<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function asthma_uk_book_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'book-page-navigation';
  $context->description = 'The book page navigation';
  $context->tag = 'Book';
  $context->conditions = array(
    'bookroot' => array(
      'values' => array(
        'book' => 'book',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'book-0' => array(
          'module' => 'book',
          'delta' => 0,
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Book');
  t('The book page navigation');
  $export['book-page-navigation'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content-book-page';
  $context->description = 'The book page page';
  $context->tag = 'Book';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'content_book_page:page_1' => 'content_book_page:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'commons_core-group_create_content' => array(
          'module' => 'commons_core',
          'delta' => 'group_create_content',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-a8062287ac6a360ca81b0f580a90d12e' => array(
          'module' => 'views',
          'delta' => 'a8062287ac6a360ca81b0f580a90d12e',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Book');
  t('The book page page');
  $export['content-book-page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group-book-page-node';
  $context->description = 'A book page node inside a group';
  $context->tag = 'Book';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'node' => array(
      'values' => array(
        'book' => 'book',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'book-0' => array(
          'module' => 'book',
          'delta' => 0,
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-4e409dc7766249be814aed586f0cd4c3' => array(
          'module' => 'views',
          'delta' => '4e409dc7766249be814aed586f0cd4c3',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'views-a8062287ac6a360ca81b0f580a90d12e' => array(
          'module' => 'views',
          'delta' => 'a8062287ac6a360ca81b0f580a90d12e',
          'region' => 'sidebar_last',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('A book page node inside a group');
  t('Book');
  $export['group-book-page-node'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group-tab-book-page';
  $context->description = 'The book page tab on a group';
  $context->tag = 'Book';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'group_tab_book_pages:page_1' => 'group_tab_book_pages:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-368a0c33b7667ebec27e4c54d29484b1' => array(
          'module' => 'views',
          'delta' => '368a0c33b7667ebec27e4c54d29484b1',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Book');
  t('The book page tab on a group');
  $export['group-tab-book-page'] = $context;

  return $export;
}
