/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_strncat.c
*/

#include "../../include/libC.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int len;
    int z = 0;

    len = my_strlen(dest);

    while (z < nb && src[z]) {
        dest[len + z] = src[z];
        z++;
    }
    dest[len + z] = '\0';
    return (dest);
}
