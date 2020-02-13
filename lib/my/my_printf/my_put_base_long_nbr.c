/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** task 07
*/

#include "include/my.h"
#include <stdlib.h>

void my_putchar(char c);

void my_nbr_long_base(long calc, char *str)
{
    long len = my_strlen(str);
    long i;
    char *result = malloc(sizeof(char) * 128);
    long e = 0;

    for (; calc != 0; e++) {
        i = calc % len;
        calc = (calc/len);
        result[e] = str[i];
    }
    result[e] = '\0';
    if (calc == 0) {
        my_revstr(result);
        my_putstr(result);
    }
}