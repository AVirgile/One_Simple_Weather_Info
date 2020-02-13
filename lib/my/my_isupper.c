/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"

int my_isupper(int c)
{
    if ((char) c >= 'A' && (char) c <= 'Z')
        return (1);
    return (0);
}