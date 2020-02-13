/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"
#include <stddef.h>

void my_memcpy(void *dest, void const *src, size_t size)
{
    char *string_src = (char *) src;
    char *string_dest = (char *) dest;

    for (size_t i = 0; i < size; i++)
        string_dest[i] = string_src[i];
}