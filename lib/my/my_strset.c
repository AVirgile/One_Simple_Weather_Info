/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"
#include <stddef.h>

char *strset(char *string, int c)
{
    if (string == NULL)
        return (NULL);
    for (int i = 0; string[i]; i++)
        string[i] = (char) c;
    return (string);
}