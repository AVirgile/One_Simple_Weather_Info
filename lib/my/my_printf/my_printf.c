/*
** EPITECH PROJECT, 2019
** PSU_my_printf
** File description:
** PSU_my_printf
*/

#include "include/my.h"
#include <stdarg.h>

void tab_parse(int i, char *str, va_list aq)
{
    for (int j = 0; tab[j].flag != '\0'; j++) {
        if (tab[j].flag == str[i])
            tab[j].inter(aq);
    }
}

int my_printf(char *str, ...)
{
    va_list aq;
    int i = 0;

    va_start(aq, str);
    while (str[i]) {
        if (str[i] == '%') {
            i++;
            tab_parse(i, str, aq);
            i++;
        } else
            my_putchar(str[i++]);
    }
    va_end(aq);
    return (my_strlen(str) - 1);
}