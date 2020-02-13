/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** PSU_minishell1_2019
*/

#include <stdlib.h>
#include "../../include/libC.h"

char *my_strchr(char const *str, char c)
{
    for (size_t i = 0; str[i]; i++) {
        if (str[i] == c)
            return ((char *) str + i);
    }
    return (NULL);
}