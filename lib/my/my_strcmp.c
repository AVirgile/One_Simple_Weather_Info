/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strcmp.c
*/

#include "../../include/libC.h"

int my_strcmp(char const *s1, char const *s2)
{
    int z = 0;
    int y = 0;
    int result = 0;

    while (s1[z] != '\0' || s2[y] != '\0') {
        if (s1[z] != s2[y]) {
            result = (s1[z] - s2[y]);
            return (result);
        }
        z++;
        y++;
    }
    return (0);
}