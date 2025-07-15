/**
 * @file main.c
 * @author Quentin Hivanhoe
 * @brief simple test for the buffer management
 * @version 0.1
 * @date 2025-07-09
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "../includes/buffer.h"

int main(void)
{
    circle_list_t *list = NULL;
    circle_list_t *first = NULL;
    circle_list_t *second = NULL;
    circle_list_t *third = NULL;
    circle_list_t *fourth = NULL;

    add_buff_node(&list, "bonjour", strlen("bonjour"));
    add_buff_node(&list, "les", strlen("les"));
    add_buff_node(&list, "amis", strlen("amis"));
    first = get_node_by_index(list, 0);
    if (first)
    {
        if (strcmp(first->buffer, "bonjour"))
            fprintf(stderr, "failed first is \"%s\" is not bonjour\n", first->buffer);
    } else
        fprintf(stderr, "first is null\n");
    second = get_node_by_index(list, 1);
    if (second)
    {
        if (strcmp(second->buffer, "les"))
            fprintf(stderr, "failed second is \"%s\" and not les\n", second->buffer);
    } else
        fprintf(stderr, "second is null\n");
    third = get_node_by_index(list, 2);
    if (third)
    {
        if (strcmp(third->buffer, "amis"))
            fprintf(stderr, "failed third is \"%s\" and not amis\n", third->buffer);
    } else
        fprintf(stderr, "third is null\n");
    fourth = get_node_by_index(list, 3);
    if (fourth)
    {
        if (strcmp(fourth->buffer, "bonjour"))
            fprintf(stderr, "failed fourth is not the same\n");
    } else
        fprintf(stderr, "fourth is null\n");
    return EXIT_SUCCESS;
}