/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** task 02
*/

#include <unistd.h>
#include "../../include/libC.h"

void my_puts(char const *str)
{
    write(1, str, my_strlen(str));
}