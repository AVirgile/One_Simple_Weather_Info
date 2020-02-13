/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_revstr.c
*/

#include "include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int len = my_strlen(str) - 1;
    char temp;

    while (i <= len) {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return (str);
}
