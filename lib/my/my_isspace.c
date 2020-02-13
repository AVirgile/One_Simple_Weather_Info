/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"

int my_isspace(int c)
{
    if (((char) c >= '\t' && (char) c <= '\r') || (char) c == ' ')
        return (1);
    return (0);
}