<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function asthma_blog_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function asthma_blog_feature_imagecache_default_presets() {
  $items = array(
    'gallery_small' => array(
      'presetname' => 'gallery_small',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_resize',
          'data' => array(
            'width' => '300',
            'height' => '300',
          ),
        ),
      ),
    ),
    'thumbnail_100' => array(
      'presetname' => 'thumbnail_100',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_resize',
          'data' => array(
            'width' => '100',
            'height' => '100',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function asthma_blog_feature_node_info() {
  $items = array(
    'asthma_blog' => array(
      'name' => t('Asthma Blog'),
      'module' => 'features',
      'description' => t('A test blog content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function asthma_blog_feature_views_api() {
  return array(
    'api' => '2',
  );
}
