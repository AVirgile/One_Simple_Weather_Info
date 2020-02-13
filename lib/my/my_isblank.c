/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"

int my_isblank(int c)
{
    if ((char) c == ' ' || (char) c == '\t')
        return (1);
    return (0);
}