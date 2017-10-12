<?php
/**
 * @file
 * bizballoon_user_registration.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function bizballoon_user_registration_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_register_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['user_register_form'] = $captcha;

  return $export;
}
