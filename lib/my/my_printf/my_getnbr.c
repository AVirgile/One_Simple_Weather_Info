/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** task 05
*/

#include "include/my.h"

int	my_getnbr(char const *str)
{
    int s = 1;
    int r = 0;
    int i = 0;

    if (str == 0)
        return (0);
    while ((*str < 47 || *str > 58) && *str != 0) {
        str = str + 1;
        i++;
    }
    if (i > 0 && *(str - 1) == 45)
        s = -1;
    while (*str != 0 && *str >= '0' && *str <= '9') {
        r = r * 10;
        r = r + *str - 48;
        str = str + 1;
    }
    r = r * s;
    return (r);
}
