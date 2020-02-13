/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"

char *strnset(char *string, int c, int index)
{
    if (string == NULL)
        return (NULL);
    for (int i = 0; i < index && string[i]; i++)
        string[i] = (char) c;
    return (string);
}