/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"
#include <stdlib.h>

void my_memmove(void const *dest, void const *src, size_t size)
{
    char *string_src = (char *) src;
    char *string_dest = (char *) dest;
    char *temp = malloc(sizeof(char) * (size + 1));
    size_t j = 0;

    if (temp == NULL)
        return;
    for (j = 0; string_src[j]; j++)
        temp[j] = string_src[j];
    temp[j] = 0;
    for (size_t i = 0; i < size; i++)
        string_dest[i] = temp[i];
    free(temp);
}