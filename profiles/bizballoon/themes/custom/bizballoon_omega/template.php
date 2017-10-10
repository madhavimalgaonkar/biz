<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * bizballoon_omega theme.
 */

 function bizballoon_omega_preprocess_html(&$vars) {
   // Add font awesome cdn.
   drupal_add_css('//maxcdn.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.css', array(
     'type' => 'external'
   ));

   // Add google fonts cdn.
  drupal_add_css('https://fonts.googleapis.com/css?family=Exo+2',array(
    'type' => 'external'));
 }
