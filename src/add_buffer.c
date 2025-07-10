/**
 * @file buffer.c
 * @author Quentin Hivanhoe
 * @brief
 * @version 0.1
 * @date 2025-07-09
 *
 * @copyright Copyright (c) 2025
 *
 */
#include "../includes/buffer.h"
#include <stdlib.h>
#include <string.h>

static bool invalid_add(circle_buff_t **lst, const char *buf, const size_t size)
{
    if (!buf)
    {
        write(STDERR_FILENO, "invalid buffer\n", 16);
        return false;
    }
    if (!size || size > BUFFER_SIZE)
    {
        write(STDERR_FILENO, "invalid buffer size\n", 21);
        return false;
    }
    if (!lst)
    {
        write(STDERR_FILENO, "list null\n", 11);
        return false;
    }
    return true;
}

bool add_buff_node(circle_buff_t **list, const char *buf, const size_t size)
{
    circle_buff_t *node = NULL;
    static circle_buff_t *head = NULL;

    if (!invalid_add(list, buf, size))
        return false;
    node = calloc(1, sizeof(circle_buff_t));
    if (!node)
    {
        write(STDERR_FILENO, "calloc failed\n", 15);
        exit(EXIT_FAILURE);
    }
    memcpy(node->buffer, buf, size);
    node->prev = head;
    node->next = (*list);
    if (!(*list)) {
        node->head = true;
        head = node;
    } else
        (*list)->prev = node;
    head->next = node;
    (*list) = node;
    return true;
}