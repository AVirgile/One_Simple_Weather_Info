/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** my_itoa.c
*/

#include <stdlib.h>
#include "../../include/libC.h"

char *my_itoa(int nbr)
{
    char *result;
    int count = 1;
    int temp = nbr;

    while (temp >= 10) {
        temp = temp / 10;
        count = count + 1;
    }
    result = malloc(sizeof(char) * count + 1);
    temp = nbr;
    result[count] = '\0';
    count = count - 1;
    while (count != -1) {
        result[count] = temp % 10 + 48;
        temp = temp / 10;
        count = count - 1;
    }
    return (result);
}