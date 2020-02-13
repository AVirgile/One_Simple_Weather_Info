/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** task 07
*/

#include "include/my.h"
#include <stdlib.h>

void my_putchar(char c);

void my_nbr_base(unsigned int calc, char *str)
{
    unsigned int len = my_strlen(str);
    unsigned int i;
    char *result = malloc(sizeof(char) * 128);
    unsigned int e = 0;

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