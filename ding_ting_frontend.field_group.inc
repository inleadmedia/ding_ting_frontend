<?php
/**
 * @file
 * ding_ting_frontend.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ding_ting_frontend_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|ting_object|ting_object|teaser';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content group',
    'weight' => '1',
    'children' => array(
      0 => 'ting_series',
      1 => 'ting_author',
      2 => 'ting_subjects',
      3 => 'ding_entity_buttons',
      4 => 'ting_details_description',
      5 => 'ting_details_genre',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_content|ting_object|ting_object|teaser'] = $field_group;

  return $export;
}
