/**
 * @file getter.h
 * @author Quentin Hivanhoe
 * @brief header for getter
 * @version 0.1
 * @date 2025-07-15
 *
 * @copyright Copyright (c) 2025
 *
 */
#include "list.h"

/**
 * @brief Get the head of the list
 *
 * @param list the list to parse
 * @return circle_list_t* head of the list
 */
circle_list_t *get_head(circle_list_t *list);

/**
 * @brief Get a node by is index according to the head for example index 3
 * represent the third node after the head. Index are counted like an array
 * head represent index 0. If the index is greater than the list size it
 * restart from the head until the counter reach the index
 *
 * @param list the list to retrieve node from
 * @param index the index of the node
 * @return circle_list_t* pointer to the node at index precised
 */
circle_list_t *get_node_by_index(circle_list_t *list, size_t index);
