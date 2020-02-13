/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"

my_div_t my_div(int numerator, int denominator)
{
    my_div_t result;

    if (numerator % denominator != 0)
        result.rem = numerator % denominator;
    else
        result.rem = 0;
    result.quot = numerator / denominator;
    return (result);
}