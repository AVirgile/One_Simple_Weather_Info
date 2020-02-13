/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_strcat.c
*/

#include "../../include/libC.h"

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int z;

    for (z = 0; src[z] != '\0'; z++)
        dest[len + z] = src[z];
    dest[len + z] = '\0';
    return (dest);
}
