/*
** EPITECH PROJECT, 2019
** my_strncmp.c
** File description:
** my_strncmp.c
*/

#include "../../include/libC.h"

int	my_strncmp(char const *s1, char const *s2, int n)
{
    int	z = 0;

    while (z < n - 1 && s1[z] == s2[z] && s2[z] && s1[z])
        z++;
    return (s1[z] - s2[z]);
}
