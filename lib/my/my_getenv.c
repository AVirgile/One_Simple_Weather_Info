/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"

char *my_getenv(char const *var_name, char const **env)
{
    for (int i = 0; env[i]; i++) {
        if (my_strncmp(env[i], var_name, my_strlen(var_name)) == 0)
            return (my_strdup(env[i]));
    }
    my_werror("No such variable in current env\n");
    return (NULL);
}