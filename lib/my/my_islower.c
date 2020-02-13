/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"

int my_islower(int c)
{
    if ((char) c >= 'a' && (char) c <= 'z')
        return (1);
    return (0);
}