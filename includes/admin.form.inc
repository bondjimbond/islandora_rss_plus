<?php
/**
 * @file
 * Admin options
 */
function islandora_rss_plus_admin_form($form, $form_settings) {
  $form['islandora_rss_plus_field_publisher'] = array(
    '#title' => t('Solr field for Publisher element'),
    '#type' => 'textfield',
    '#description' => t('Select a Solr field to provide the Publisher element in the RSS results.'),
    '#default_value' => variable_get('islandora_rss_plus_field_publisher', 'dc.publisher'),
  );
  $form['islandora_rss_plus_field_language'] = array(
    '#title' => t('Solr field for Language element'),
    '#type' => 'textfield',
    '#description' => t('Select a Solr field to provide the Language element in the RSS results.'),
    '#default_value' => variable_get('islandora_rss_plus_field_language', 'dc.language'),
  );
  $form['islandora_rss_plus_field_rights'] = array(
    '#title' => t('Solr field for rights element'),
    '#type' => 'textfield',
    '#description' => t('Select a Solr field to provide the rights element in the RSS results.'),
    '#default_value' => variable_get('islandora_rss_plus_field_rights', 'dc.rights'),
  );
  $form['islandora_rss_plus_field_subject'] = array(
    '#title' => t('Solr field for subject element'),
    '#type' => 'textfield',
    '#description' => t('Select a Solr field to provide the subject element in the RSS results.'),
    '#default_value' => variable_get('islandora_rss_plus_field_subject', 'dc.subject'),
  );
  return system_settings_form($form);
}
