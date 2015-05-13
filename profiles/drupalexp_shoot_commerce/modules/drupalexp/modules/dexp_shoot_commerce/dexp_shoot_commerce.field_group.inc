<?php
/**
 * @file
 * dexp_shoot_commerce.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dexp_shoot_commerce_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attributes|commerce_product|product|form';
  $field_group->group_name = 'group_attributes';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attributes',
    'weight' => '6',
    'children' => array(
      0 => 'field_product_size',
      1 => 'field_product_color',
      2 => 'field_product_material',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-attributes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_attributes|commerce_product|product|form'] = $field_group;

  return $export;
}
