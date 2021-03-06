cmake_minimum_required(VERSION 3.15)
project(One_Simple_Weather_Info C)

set(CMAKE_C_STANDARD 11)

include_directories(include)
include_directories(lib/my/my_printf/include)

add_executable(One_Simple_Weather_Info
        include/libC.h
        lib/my/my_printf/include/my.h
        lib/my/my_printf/flag_c.c
        lib/my/my_printf/flags_a.c
        lib/my/my_printf/flags_b.c
        lib/my/my_printf/format.c
        lib/my/my_printf/my_getnbr.c
        lib/my/my_printf/my_printf.c
        lib/my/my_printf/my_put_base_long_nbr.c
        lib/my/my_printf/my_put_base_uns_nbr.c
        lib/my/my_printf/my_put_nbr.c
        lib/my/my_printf/my_put_uns_nbr.c
        lib/my/my_printf/my_putchar.c
        lib/my/my_printf/my_putstr.c
        lib/my/my_printf/my_putstr_s.c
        lib/my/my_printf/my_revstr.c
        lib/my/my_printf/my_strcpy.c
        lib/my/my_printf/my_strlen.c
        lib/my/my_abs.c
        lib/my/my_atoi.c
        lib/my/my_div.c
        lib/my/my_floor.c
        lib/my/my_getenv.c
        lib/my/my_isalnum.c
        lib/my/my_isalpha.c
        lib/my/my_isascii.c
        lib/my/my_isblank.c
        lib/my/my_iscntrl.c
        lib/my/my_isdigit.c
        lib/my/my_isgraph.c
        lib/my/my_islower.c
        lib/my/my_isprint.c
        lib/my/my_ispunct.c
        lib/my/my_isspace.c
        lib/my/my_isupper.c
        lib/my/my_isxdigit.c
        lib/my/my_itoa.c
        lib/my/my_memchr.c
        lib/my/my_memcmp.c
        lib/my/my_memcpy.c
        lib/my/my_memmove.c
        lib/my/my_memset.c
        lib/my/my_putchar.c
        lib/my/my_puts.c
        lib/my/my_realloc.c
        lib/my/my_revstr.c
        lib/my/my_strcat.c
        lib/my/my_strchr.c
        lib/my/my_strcmp.c
        lib/my/my_strcmpi.c
        lib/my/my_strcpy.c
        lib/my/my_strcspn.c
        lib/my/my_strdup.c
        lib/my/my_strlen.c
        lib/my/my_strlwr.c
        lib/my/my_strncat.c
        lib/my/my_strncmp.c
        lib/my/my_strncpy.c
        lib/my/my_strnset.c
        lib/my/my_strset.c
        lib/my/my_strspn.c
        lib/my/my_strstr.c
        lib/my/my_strtok.c
        lib/my/my_strupr.c
        lib/my/my_werror.c
        src/main.c src/warning.c include/weather.h src/geolocalisation.c src/convert_data.c)
