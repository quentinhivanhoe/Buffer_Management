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
#include "../includes/buffer.h"

int main(void)
{
    printf("buffer alignement: [%lu]\n", _Alignof(circle_buff_t));
    printf("buffer alignement: [%lu]\n", sizeof(circle_buff_t));
    printf("size of a bool: %lu\n", sizeof(false));
    return 0;
}