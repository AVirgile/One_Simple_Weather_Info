/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** task 03
*/

#include "../../include/libC.h"
#include <stddef.h>

int my_strlen(char const *str)
{
    int z = 0;

    if (str == NULL)
        return (0);
    while (str[z] != '\0') {
        z++;
    }
    return (z);
}
