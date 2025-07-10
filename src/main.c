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
const char buffer[] = "bonjour";
const char buffer1[] = "les";
const char buffer2[] = "amis";
const size_t size = 7;
const size_t size1 = 3;
const size_t size2 = 4;
circle_buff_t *list = NULL;

int main(void)
{
    if (add_buff_node(NULL, buffer, size))
    {
        fprintf(stderr, "failed for invalid list\n");
        exit(EXIT_FAILURE);
    }
    if (add_buff_node(&list, NULL, size))
    {
        fprintf(stderr, "failed for invalid buffer\n");
        exit(EXIT_FAILURE);
    }
    if (add_buff_node(&list, buffer, BUFFER_SIZE + 1))
    {
        fprintf(stderr, "failed for invalid size\n");
        exit(EXIT_FAILURE);
    }
    if (!add_buff_node(&list, buffer, size))
    {
        fprintf(stderr, "failed for correct parameters\n");
        exit(EXIT_SUCCESS);
    }
    if (strcmp(list->buffer, buffer))
    {
        fprintf(stderr, "Failed for adding one element\n");
        free(list);
        return EXIT_FAILURE;
    }
    add_buff_node(&list, buffer1, size1);
    add_buff_node(&list, buffer2, size2);
    for (; !list->head; list = list->next) {
        printf("%s\n", list->buffer);
        if (!list->prev->head)
            free(list->prev);
    }
    printf("%s\n", list->buffer);
    free(list->prev);
    free(list);
    return EXIT_SUCCESS;
}