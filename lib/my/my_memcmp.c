/*
** EPITECH PROJECT, 2019
** my_libC
** File description:
** my_libC
*/

#include "../../include/libC.h"

int my_memcmp(void const *ptr1, void const *ptr2, size_t size)
{
    unsigned long pos = 0;
    register const char *s1 = (const char *) ptr1;
    register const char *s2 = (const char *) ptr2;

    for (; pos < size; pos++) {
        if (*s1++ != *s2++)
            return (s1[-1] < s2[-1] ? -1 : 1);
    }
    return (0);
}