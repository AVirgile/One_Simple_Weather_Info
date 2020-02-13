/*
** Virgile AGNEL (Personal Project)
** One_Simple_Weather_info
** File description:
** warning.c
*/

#include "libC.h"
#include <stdio.h>
#include <stdlib.h>

int warning(void)
{
    char *buffer = NULL;
    size_t i = 0;

    my_printf("Would you like the program to access your localisation ? [Yes]/[No]\n");
    if (getline(&buffer, &i, stdin) == -1) {
        my_printf("Exiting Program....\n");
        return (-1);
    }
    if (my_strcmpi(buffer, "No\n") == 0) {
        my_printf("Exiting Program....\n");
        free(buffer);
        return (-1);
    }
    if (my_strcmpi(buffer, "Yes\n") == 0) {
        free(buffer);
        return (0);
    }
    free(buffer);
    my_werror("Choose between Yes or No\n_______________________\n\n");
    return (warning());
}