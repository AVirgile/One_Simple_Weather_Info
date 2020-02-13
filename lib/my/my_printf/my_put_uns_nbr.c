/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** task 07
*/

#include "include/my.h"

void my_putchar(char c);

unsigned int my_put_uns_nbr(unsigned int nb)
{
    if (nb < 10) {
        my_putchar(nb+48);
    }
    else if (nb > 9){
        my_put_nbr(nb/10);
        my_put_nbr(nb%10);
    }
    return (0);
}
