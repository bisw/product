<?php
/**
 * @file
 * product_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function product_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_product';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search Product';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Product';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_product_id' => 'field_product_id',
    'field_brand' => 'field_brand',
    'field_price' => 'field_price',
    'field_retailer' => 'field_retailer',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_product_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_brand' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_retailer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Product_id */
  $handler->display->display_options['fields']['field_product_id']['id'] = 'field_product_id';
  $handler->display->display_options['fields']['field_product_id']['table'] = 'field_data_field_product_id';
  $handler->display->display_options['fields']['field_product_id']['field'] = 'field_product_id';
  $handler->display->display_options['fields']['field_product_id']['label'] = 'Product id';
  /* Field: Content: Branded Name */
  $handler->display->display_options['fields']['field_branded_name']['id'] = 'field_branded_name';
  $handler->display->display_options['fields']['field_branded_name']['table'] = 'field_data_field_branded_name';
  $handler->display->display_options['fields']['field_branded_name']['field'] = 'field_branded_name';
  /* Field: Content: Cost */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = 'Price';
  /* Field: Content: Retailer */
  $handler->display->display_options['fields']['field_retailer']['id'] = 'field_retailer';
  $handler->display->display_options['fields']['field_retailer']['table'] = 'field_data_field_retailer';
  $handler->display->display_options['fields']['field_retailer']['field'] = 'field_retailer';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search by product id, brand, retailer';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_product_id' => 'field_product_id',
    'field_retailer' => 'field_retailer',
    'field_branded_name' => 'field_branded_name',
  );
  /* Filter criterion: Content: Stock (field_stock) */
  $handler->display->display_options['filters']['field_stock_value']['id'] = 'field_stock_value';
  $handler->display->display_options['filters']['field_stock_value']['table'] = 'field_data_field_stock';
  $handler->display->display_options['filters']['field_stock_value']['field'] = 'field_stock_value';
  $handler->display->display_options['filters']['field_stock_value']['group'] = 1;
  $handler->display->display_options['filters']['field_stock_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_stock_value']['expose']['operator_id'] = 'field_stock_value_op';
  $handler->display->display_options['filters']['field_stock_value']['expose']['label'] = 'In Stock';
  $handler->display->display_options['filters']['field_stock_value']['expose']['operator'] = 'field_stock_value_op';
  $handler->display->display_options['filters']['field_stock_value']['expose']['identifier'] = 'field_stock_value';
  $handler->display->display_options['filters']['field_stock_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Cost (field_price) */
  $handler->display->display_options['filters']['field_price_value']['id'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['table'] = 'field_data_field_price';
  $handler->display->display_options['filters']['field_price_value']['field'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['group'] = 1;
  $handler->display->display_options['filters']['field_price_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_price_value']['expose']['operator_id'] = 'field_price_value_op';
  $handler->display->display_options['filters']['field_price_value']['expose']['label'] = 'Price (field_price)';
  $handler->display->display_options['filters']['field_price_value']['expose']['operator'] = 'field_price_value_op';
  $handler->display->display_options['filters']['field_price_value']['expose']['identifier'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_price_value']['group_info']['label'] = 'Price';
  $handler->display->display_options['filters']['field_price_value']['group_info']['identifier'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '0-100',
      'operator' => 'regular_expression',
      'value' => '^([0-9]|[1-9][0-9]|100)$',
    ),
    2 => array(
      'title' => '100-200',
      'operator' => 'regular_expression',
      'value' => '^(1[0-9][0-9]|200)$',
    ),
    3 => array(
      'title' => '200-300',
      'operator' => 'regular_expression',
      'value' => '^(:2[0-9][0-9]|300)$',
    ),
    4 => array(
      'title' => '300+',
      'operator' => 'regular_expression',
      'value' => '^([3-9][0-9][1-9]|[0-9]{4,})$',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-product';
  $translatables['search_product'] = array(
    t('Master'),
    t('Search Product'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Product id'),
    t('Branded Name'),
    t('Price'),
    t('Retailer'),
    t('Search by product id, brand, retailer'),
    t('In Stock'),
    t('Price (field_price)'),
    t('Page'),
  );
  $export['search_product'] = $view;

  return $export;
}
