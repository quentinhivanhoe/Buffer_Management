/**
 * @file buffer.h
 * @author Quentin Hivanhoe
 * @brief header file for buffer type and function
 * @version 0.1
 * @date 2025-07-09
 *
 * @copyright Copyright (c) 2025
 *
 */
#pragma once
#include <unistd.h>
#include <stdbool.h>

typedef  struct circular_buffer_s circle_buff_t;

#define BUFFER_SIZE 128

struct circular_buffer_s
{
    bool head;
    circle_buff_t *prev;
    circle_buff_t *next;
    char buffer[BUFFER_SIZE + 1];
};

bool add_buff_node(circle_buff_t **list, const char *buf, const size_t size);