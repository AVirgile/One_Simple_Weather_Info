/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include <stdlib.h>
#include "../../include/libC.h"

int my_strcmpi(char const *src1, char const *src2)
{
    int result = 0;
    int i = 0;
    int j = 0;
    char *s1 = my_strdup(src1);
    char *s2 = my_strdup(src2);

    s1 = my_strlwr(s1);
    s2 = my_strlwr(s2);
    for(; s1[i] || s2[j]; i++, j++) {
        if (s1[i] != s2[j]) {
            result = (s1[i] - s2[j]);
            free(s1);
            free(s2);
            return (result);
        }
    }
    free(s1);
    free(s2);
    return (0);
}