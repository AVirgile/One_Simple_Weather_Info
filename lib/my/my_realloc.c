/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include <stdlib.h>
#include "../../include/libC.h"

void *my_realloc(void *ptr, size_t size)
{
    void *new = malloc(size);

    if (new == NULL)
        return (NULL);
    my_memset(new, 0, size);
    my_memmove(new, ptr, size);
    free(ptr);
    return (new);
}