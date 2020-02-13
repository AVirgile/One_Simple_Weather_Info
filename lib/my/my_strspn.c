/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** PSU_minishell1_2019
*/

#include <stdlib.h>
#include "../../include/libC.h"

size_t my_strspn(char const *s, char const *accept)
{
    size_t i = 0;

    for (; my_strchr(accept, s[i]) != NULL; i++);
    return (i);
}