/*
** EPITECH PROJECT, 2019
** PSU_my_printf
** File description:
** PSU_flags_b
*/

#include "include/my.h"
#include <stdarg.h>

void inter_o(va_list aq)
{
    my_nbr_base(va_arg(aq, unsigned int), "01234567");
}

void inter_u(va_list aq)
{
    my_put_uns_nbr(va_arg(aq, unsigned int));
}

void inter_x(va_list aq)
{
    my_nbr_base(va_arg(aq, unsigned int), "0123456789abcdef");
}

void inter_xma(va_list aq)
{
    my_nbr_base(va_arg(aq, unsigned int), "0123456789ABCDEF");
}

void inter_b(va_list aq)
{
    my_nbr_base(va_arg(aq, unsigned int), "01");
}