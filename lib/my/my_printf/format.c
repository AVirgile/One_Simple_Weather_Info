/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** PSU_format.c
*/

#include "include/my.h"
#include <stdlib.h>

int format_zero(int i, char *str)
{
    char *tmp = malloc(sizeof(char) * i);
    int j = 0;
    int r = 0;
    int s = 0;
    int x = 0;

    i++;
    while (str[i] >= '0' && str[i] <= '9') {
        tmp[j] = str[i];
        i++;
        j++;
    }
    r = my_getnbr(tmp);
    while (x != r) {
        my_putchar('0');
        x++;
    }
    s = my_strlen(tmp);
    free(tmp);
    return (s);
}