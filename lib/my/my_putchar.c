/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include <unistd.h>
#include "../../include/libC.h"

void my_putchar(char const c)
{
    write(1, &c, 1);
}