/**
 * @file get_buffer.c
 * @author Quentin Hivanhoe
 * @brief get a node or a buffer content in the list
 * @version 0.1
 * @date 2025-07-15
 *
 * @copyright Copyright (c) 2025
 *
 */
#include "../includes/getter.h"

/**
 * @brief check the validity of parameters
 *
 * @param dest the destination of the node buffer
 * @param tok a token to found in the node buffer
 * @return true everything is okay
 * @return false invalid paramaters
 */
// static bool check_params(char *dest, const char *tok)
// {
//     if (!dest || !tok)
//         return false;
//     return true;
// }

circle_list_t *get_head(circle_list_t *list)
{
    circle_list_t *parser = NULL;

    if (!list)
        return NULL;
    parser = list;
    for (; !parser->head; parser = parser->next);
    return parser;
}

circle_list_t *get_node_by_index(circle_list_t *list, size_t index)
{
    circle_list_t *parser = NULL;

    if (!list)
        return NULL;
    parser = get_head(list);
    for (size_t i = 0; i < index; i++)
        parser = parser->prev;
    return parser;
}

/**
 * @brief Get a buffer of the list, parse the list until the tok is found
 *
 * @param list list to parse
 * @param dest store the buffer the content of the buffer in dest
 * @return char* return a pointer to the buffer
 */
char *get_buffer(circle_list_t **list, char *dest, char *tok)
{
    (void)list;
    (void)tok;
    return dest;
}