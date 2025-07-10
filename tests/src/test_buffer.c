/**
 * @file test_buffer.c
 * @author Quentin Hivanhoe
 * @brief test buffer function like add, del, etc...
 * @version 0.1
 * @date 2025-07-09
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <criterion/criterion.h>
#include "../include/tests.h"

const char valid_buf[] = "bonjour les amis";
const size_t valid_size = 17;
circle_buff_t *list = NULL;

Test(buffer, invalid_parameters)
{
    cr_assert(add_buff_node(NULL, valid_buf, valid_size) == false);
    cr_assert(add_buff_node(&list, NULL, valid_size) == false);
    cr_assert(add_buff_node(NULL, valid_buf, 400) == false);
}

Test(buffer, add_a_simple_node)
{
    add_buff_node(&list, valid_buf, valid_size);
    cr_assert_eq(list->buffer, valid_buf);
}