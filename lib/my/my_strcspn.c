/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** PSU_minishell1_2019
*/

#include <stdlib.h>
#include "../../include/libC.h"

size_t my_strcspn(char const *s, char const *reject)
{
    size_t i = 0;

    for (; s[i]; i++) {
        for (size_t j = 0; reject[j]; j++) {
            if (reject[j] == s[i]) return (i);
        }
    }
    return (i);
}