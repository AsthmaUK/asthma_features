<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function asthma_blog_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create asthma_blog content
  $permissions['create asthma_blog content'] = array(
    'name' => 'create asthma_blog content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own asthma_blog content
  $permissions['delete own asthma_blog content'] = array(
    'name' => 'delete own asthma_blog content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_asthmablog_entry_image
  $permissions['edit field_asthmablog_entry_image'] = array(
    'name' => 'edit field_asthmablog_entry_image',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_asthmablog_subtitle
  $permissions['edit field_asthmablog_subtitle'] = array(
    'name' => 'edit field_asthmablog_subtitle',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own asthma_blog content
  $permissions['edit own asthma_blog content'] = array(
    'name' => 'edit own asthma_blog content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_asthmablog_entry_image
  $permissions['view field_asthmablog_entry_image'] = array(
    'name' => 'view field_asthmablog_entry_image',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_asthmablog_subtitle
  $permissions['view field_asthmablog_subtitle'] = array(
    'name' => 'view field_asthmablog_subtitle',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache gallery_small
  $permissions['view imagecache gallery_small'] = array(
    'name' => 'view imagecache gallery_small',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache thumbnail_100
  $permissions['view imagecache thumbnail_100'] = array(
    'name' => 'view imagecache thumbnail_100',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
