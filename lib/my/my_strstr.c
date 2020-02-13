/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strstr.c
*/

#include "../../include/libC.h"

char *my_strstr(char *str, char const *to_find)
{
    int	z = 0;
    int	start = 0;

    while (str[start] != '\n') {
        while (str[start] != to_find[0])
            start = start + 1;
        z = start;
        while (str[z] == (to_find[z - start] != '\0'))
            z = z + 1;
        if (to_find[z - start] == '\0')
            return (&str[start]);
        start++;
    }
    return (0);
}
