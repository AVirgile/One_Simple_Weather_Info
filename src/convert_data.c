/*
** Virgile AGNEL (Personal Project)
** One_Simple_Weather_info
** File description:
** convert_data_to_degrees.c
*/

#include "libC.h"

double convert_kelvin_to_degrees(double valuedouble)
{
    double result = valuedouble - 273.15;

    return (result);
}
