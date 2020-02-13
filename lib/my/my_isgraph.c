/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"

int my_isgraph(int c)
{
    if ((char) c >= 33 && (char) c <= 126)
        return (1);
    return (0);
}