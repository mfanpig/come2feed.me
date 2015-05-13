<?php
/**
 * @file
 * dexp_shoot_commerce.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function dexp_shoot_commerce_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_autop' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'shortcode' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'box' => 1,
          'animate' => 1,
          'button' => 1,
          'skillbar' => 1,
          'piegraph' => 1,
          'carousels' => 1,
          'carousel' => 1,
          'title' => 1,
          'embeded' => 1,
          'stats' => 1,
          'accordions' => 1,
          'accordion' => 1,
          'icon' => 1,
          'flipbox' => 1,
          'tabs' => 1,
          'tab' => 1,
          'column' => 1,
          'social' => 1,
          'testimonials' => 1,
          'testimonial' => 1,
          'rating' => 0,
          'maps' => 1,
          'bxslider' => 0,
          'bxitem' => 0,
          'lightbox' => 1,
          'tab_testimonials' => 1,
          'tab_testimonial' => 1,
          'callout' => 1,
        ),
      ),
      'shortcode_text_corrector' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
