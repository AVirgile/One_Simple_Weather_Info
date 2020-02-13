/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"

int my_isalnum(int x)
{
    if (((char) x >= 'A' && (char) x <= 'Z')
        || ((char) x >= 'a' && (char) x <= 'z')
        || ((char) x >= '0' && (char) x <= '9'))
        return (1);
    return (0);
}