/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** PSU_minishell1_2019
*/

#include <stdlib.h>
#include "../../include/libC.h"

char *my_strtok(char *str, char const *end)
{
    static char *token = 0;

    if (str)
        token = str;
    else if (!token)
        return (0);
    str = token + my_strspn(token, end);
    token = str + my_strcspn(str, end);
    if (token == str)
        return (NULL);
    if (*token) {
        *token = 0;
        token += 1;
    }
    return (str);
}