<?php
/**
 * @file
 * dexp_shoot_commerce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dexp_shoot_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dexp_shoot_commerce_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function dexp_shoot_commerce_flag_default_flags() {
  $flags = array();
  // Exported flag: "Like".
  $flags['like'] = array(
    'entity_type' => 'node',
    'title' => 'Like',
    'global' => 0,
    'types' => array(
      0 => 'article',
      1 => 'dexp_portfolio',
    ),
    'flag_short' => '<i class=\'fa fa-heart-o\'></i>',
    'flag_long' => 'Like this item',
    'flag_message' => '',
    'unflag_short' => '<i class=\'fa fa-heart-o\'></i>',
    'unflag_long' => 'Unlike this item',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'dexp_portfolio' => 'dexp_portfolio',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'large_title' => 0,
      'large' => 0,
      'medium' => 0,
      'hover_image' => 0,
      'portfolio_bxslider' => 0,
      'product_sidebar' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'dexp_shoot_commerce',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Wishlist".
  $flags['wishlist'] = array(
    'entity_type' => 'commerce_product',
    'title' => 'Wishlist',
    'global' => 0,
    'types' => array(
      0 => 'product',
    ),
    'flag_short' => '<i class=\'fa fa-heart\'></i>',
    'flag_long' => 'Add to Wishlist',
    'flag_message' => '',
    'unflag_short' => '<i class="fa fa-trash-o"></i>',
    'unflag_long' => 'Remove from Wishlist',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'node_full' => 'node_full',
      'node_teaser' => 'node_teaser',
      'token' => 0,
      'line_item' => 0,
      'commerce_line_item_display' => 0,
      'commerce_line_item_token' => 0,
      'node_rss' => 0,
      'node_search_index' => 0,
      'node_search_result' => 0,
      'node_dexp_portfolio' => 0,
      'node_time_line' => 0,
      'node_large' => 0,
      'node_gallery' => 0,
      'node_medium' => 0,
      'node_hover_image' => 0,
      'node_popup_image' => 0,
      'node_portfolio_bxslider' => 0,
      'node_product_sidebar' => 0,
      'node_token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'api_version' => 3,
    'module' => 'dexp_shoot_commerce',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function dexp_shoot_commerce_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'bxslider_testimonial' => array(
      'name' => t('BXSlider Testimonial'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'clients' => array(
      'name' => t('Clients'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dexp_portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_display' => array(
      'name' => t('Product Display'),
      'base' => 'node_content',
      'description' => t('This content type is used for show product on page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
