/*
** EPITECH PROJECT, 2019
** PSU_my_printf
** File description:
** PSU_flags_b
*/

#include "include/my.h"
#include <stdarg.h>

void inter_s(va_list aq)
{
    my_putstr(va_arg(aq, char *));
}

void inter_d(va_list aq)
{
    my_put_nbr(va_arg(aq, int));
}

void inter_i(va_list aq)
{
    my_put_nbr(va_arg(aq, int));
}

void inter_c(va_list aq)
{
    my_putchar(va_arg(aq, int));
}

void inter_pc(__attribute__((unused)) va_list aq)
{
    my_putchar('%');
}