/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** MUL_my_runner_2019
*/

#include "../../include/libC.h"
#include <unistd.h>
#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *result = NULL;
    size_t src_length = my_strlen(src);

    if (src == NULL)
        return (NULL);
    result = malloc(sizeof(char) * (src_length + 1));
    if (result == NULL)
        return (NULL);
    for (int i = 0; src[i]; i++)
        result[i] = src[i];
    result[src_length] = '\0';
    return (result);
}