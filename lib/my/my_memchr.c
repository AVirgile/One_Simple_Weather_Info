/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"
#include <stdlib.h>

void *my_memchr(void const *s, int c, size_t n)
{
    unsigned char *p = (unsigned char *) s;

    for (size_t i = 0; i < n; p++, i++) {
        if (*p == (unsigned char) c)
            return (p);
    }
    return (NULL);
}