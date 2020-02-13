/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** task 02
*/

#include "include/my.h"

void my_putchar(char c);

void oct(char c)
{
    if (c < 7)
        my_putstr("00");
    else if (c <= 32)
        my_putchar('0');

    my_nbr_base(c, "01234567");
}

int my_putstr_s(char const *str)
{
    int z = 0;

    while (str[z] != '\0') {
        if (str[z] >= 32)
            my_putchar(str[z]);
        else {
            my_putchar('\\');
            oct(str[z]);
        }
        z++;
    }
    return (0);
}
