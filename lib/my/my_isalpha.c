/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"

int my_isalpha(int x)
{
    if (((char) x >= 'A' && (char) x <= 'Z')
    || ((char) x >= 'a' && (char) x <= 'z'))
        return (1);
    return (0);
}