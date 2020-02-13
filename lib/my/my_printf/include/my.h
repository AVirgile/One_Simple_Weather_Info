/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/
#include <stdarg.h>

#ifndef my_h
#define my_h

int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_revstr(char *str);
void my_putchar(char c);
void my_nbr_base(unsigned int calc, char *str);
void my_nbr_long_base(long calc, char *str);
int my_putstr_s(char const *str);
unsigned int my_put_uns_nbr(unsigned int nb);
void my_nbr_long_base(long calc, char *str);
int my_putstr_s(char const *str);
void oct(char c);
void tab_parse(int i, char *str, va_list aq);
// Flags of my_printf
void inter_c(va_list aq);
void inter_s(va_list aq);
void inter_d(va_list aq);
void inter_pc(__attribute__((unused)) va_list aq);
void inter_i(va_list aq);
void inter_o(va_list aq);
void inter_u(va_list aq);
void inter_x(va_list aq);
void inter_xma(va_list aq);
void inter_b(va_list aq);
void inter_p(va_list aq);
void inter_sb(va_list aq);

typedef struct parse_printf_s {
    char flag;
    void (*inter)(va_list);
} parse_printf_t;

static const parse_printf_t tab[] = {
        {'s', &inter_s},
        {'c', &inter_c},
        {'d', &inter_d},
        {'%', &inter_pc},
        {'i', &inter_i},
        {'o', &inter_o},
        {'u', &inter_u},
        {'x', &inter_x},
        {'X', &inter_xma},
        {'b', &inter_b},
        {'p', &inter_p},
        {'S', &inter_sb},
        {'\0'}
};
#endif /* !my_h */
