<?php
/**
 * @file
 * issues_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function issues_feature_default_rules_configuration() {
  $items = array();
  $items['rules_create_answer'] = entity_import('rules_config', '{ "rules_create_answer" : {
      "LABEL" : "Create answer",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--answer" : { "bundle" : "answer" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_question" } },
        { "entity_has_field" : { "entity" : [ "node:field-question" ], "field" : "field_answered" } },
        { "data_is_empty" : { "data" : [ "node:field-question:field-answered" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-question:field-answered" ], "value" : "1" } }
      ]
    }
  }');
  $items['rules_update_answer'] = entity_import('rules_config', '{ "rules_update_answer" : {
      "LABEL" : "Update answer",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--answer" : { "bundle" : "answer" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_question" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-question" ] } },
        { "entity_has_field" : { "entity" : [ "node:field-question" ], "field" : "field_answered" } },
        { "data_is_empty" : { "data" : [ "node:field-question:field-answered" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-question:field-answered" ], "value" : "1" } }
      ]
    }
  }');
  return $items;
}
