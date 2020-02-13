/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"

int my_isascii(int c)
{
    if ((unsigned char) c > 127)
        return (0);
    return (1);
}