<?php
/**
 * @file
 * ogmk_products.strongarm.inc
 */

/**
 * @Issue(
 *   "Move specific internationalisation settings to the application side"
 *   type="bug"
 *   priority="normal"
 *   labels="modularity"
 * )
 */

/**
 * Implements hook_strongarm().
 */
function ogmk_products_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_ogmk_product';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ogmk_product';
  $strongarm->value = 0;
  $export['comment_anonymous_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ogmk_product';
  $strongarm->value = 1;
  $export['comment_default_mode_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ogmk_product';
  $strongarm->value = '50';
  $export['comment_default_per_page_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ogmk_product';
  $strongarm->value = 1;
  $export['comment_form_location_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ogmk_product';
  $strongarm->value = '1';
  $export['comment_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ogmk_product';
  $strongarm->value = '1';
  $export['comment_preview_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ogmk_product';
  $strongarm->value = 1;
  $export['comment_subject_field_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_ogmk_product';
  $strongarm->value = 1;
  $export['entity_translation_hide_translation_links_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_ogmk_product';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_commerce_product__ogmk_product';
  $strongarm->value = array(
    'default_language' => 'und',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_commerce_product__ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__ogmk_product';
  $strongarm->value = array(
    'default_language' => 'und',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_node__ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__ogmk_product';
  $strongarm->value = array(
    'view_modes' => array(
      'ogmk_review' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '-10',
        ),
        'quantity' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'ogmk_review' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'ogmk_review' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_product__ogmk_product';
  $strongarm->value = array(
    'view_modes' => array(
      'ogmk_bootstrap_media' => array(
        'custom_settings' => TRUE,
      ),
      'line_item' => array(
        'custom_settings' => TRUE,
      ),
      'node_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_display' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_token' => array(
        'custom_settings' => FALSE,
      ),
      'node_full' => array(
        'custom_settings' => FALSE,
      ),
      'node_rss' => array(
        'custom_settings' => FALSE,
      ),
      'node_ogmk_manage_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'node_token' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_ogmk_review' => array(
        'custom_settings' => FALSE,
      ),
      'node_info' => array(
        'custom_settings' => FALSE,
      ),
      'node_ogmk_bootstrap_media' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'sku' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'status' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'sku' => array(
          'line_item' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'title' => array(
          'line_item' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'status' => array(
          'line_item' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_product__ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ogmk_product';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'ogmk_bootstrap_media' => array(
        'custom_settings' => TRUE,
      ),
      'ogmk_manage_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'info' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'metatags' => array(
          'weight' => '10',
        ),
        'xmlsitemap' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(
        'ogmk_product:sku' => array(
          'teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'ogmk_bootstrap_media' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'rss' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'ogmk_product:title' => array(
          'teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'ogmk_bootstrap_media' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'rss' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'ogmk_product:status' => array(
          'teaser' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'ogmk_bootstrap_media' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'rss' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'ogmk_product:commerce_price' => array(
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'ogmk_bootstrap_media' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'rss' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'ogmk_product:ogmk_shop_ref' => array(
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'ogmk_bootstrap_media' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'rss' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'sharethis' => array(
          'teaser' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'ogmk_bootstrap_media' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'rss' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'ogmk_product:title_field' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'ogmk_bootstrap_media' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'rss' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ogmk_product';
  $strongarm->value = '4';
  $export['language_content_type_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_product_type_ogmk_product';
  $strongarm->value = '4';
  $export['language_product_type_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ogmk_product';
  $strongarm->value = array();
  $export['menu_options_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ogmk_product';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ogmk_product';
  $strongarm->value = array(
    0 => 'revision',
    1 => 'revision_moderation',
  );
  $export['node_options_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ogmk_product_display';
  $strongarm->value = array();
  $export['node_options_ogmk_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ogmk_product';
  $strongarm->value = '1';
  $export['node_preview_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ogmk_product';
  $strongarm->value = 0;
  $export['node_submitted_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ogmk_product_display';
  $strongarm->value = 0;
  $export['node_submitted_ogmk_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ogmk_product_en_pattern';
  $strongarm->value = 'products/[node:nid]/[node:title]';
  $export['pathauto_node_ogmk_product_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ogmk_product_es_pattern';
  $strongarm->value = 'productos/[node:nid]/[node:title]';
  $export['pathauto_node_ogmk_product_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ogmk_product_pattern';
  $strongarm->value = 'products/[node:nid]/[node:title]';
  $export['pathauto_node_ogmk_product_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ogmk_product_und_pattern';
  $strongarm->value = 'products/[node:nid]/[node:title]';
  $export['pathauto_node_ogmk_product_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_ogmk_product';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_ogmk_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_ogmk_product_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'ogmk_bootstrap_media' => 0,
    'ogmk_manage_teaser' => 0,
    'diff_standard' => 0,
    'token' => 0,
  );
  $export['sharethis_ogmk_product_options'] = $strongarm;

  return $export;
}
