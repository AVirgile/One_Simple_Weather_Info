/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** PSU
*/

#include "include/my.h"
#include <stdarg.h>

void inter_p(va_list aq)
{
    my_putstr("0x");
    my_nbr_long_base(va_arg(aq, long), "0123456789abcdef");
}

void inter_sb(va_list aq)
{
    my_putstr_s(va_arg(aq, char *));
}
