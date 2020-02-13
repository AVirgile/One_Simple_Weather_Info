/*
** Virgile AGNEL (Personal Project)
** my_CHIP-8_emulator
** File description:
** Libc.h
*/

#include "../lib/my/my_printf/include/my.h"
#include <stddef.h>

#ifndef libC_h
#define libC_h

#ifndef  __my_div_is_difined
#define  __my_div_is_difined (1)

typedef struct my_div_s {
    int quot;
    int rem;
} my_div_t;

#endif

#ifndef  __my_bool_is_difined
#define  __my_bool_is_difined (1)

typedef enum {
    MY_FALSE = 0,
    MY_TRUE = 1,
} my_bool_t;

#endif

//assert.h
//conio.h
//ctype.h
int my_isalpha(int x);
int my_isalnum(int x);
int my_isascii(int c);
int my_isblank(int c);
int my_iscntrl(int c);
int my_isdigit(int c);
int my_isgraph(int c);
int my_isprint(int c);
int my_islower(int c);
int my_isspace(int c);
int my_isupper(int c);
int my_isxdigit(int c);
//errno.h
//locale.h
//math.h
double my_floor(double x);
//setjmp.h
//signal.h
//stdarg.h
//stdio.h
void my_putchar(char const c);
void my_puts(char const *str);
int my_printf(char *str, ...);
//stdlib.h
void *my_realloc(void *ptr, size_t size);
int my_abs(int j);
my_div_t my_div(int numerator, int denominator);
int	my_atoi(char const *str);
char *my_getenv(char const *var_name, char const **env);
//string.h
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
int my_strlen(char const *str);
int	my_strncmp(char const *s1, char const *s2, int n);
int my_strcmp(char const *s1, char const *s2);
char *my_strchr(char const *str, char c);
size_t my_strspn(char const *s, char const *accept);
char *my_strtok(char *str, char const *end);
size_t my_strcspn(char const *s, char const *reject);
char *my_strdup(char const *src);
char *my_strstr(char *str, char const *to_find);
char *my_revstr(char *str);
char *my_strlwr(char *s);
char *my_strupr(char *s);
int my_strcmpi(char const *src1, char const *src2);
char *strset(char *string, int c);
char *strnset(char *string, int c, int index);
char *my_memset(char *a, char b, size_t size);
void my_memcpy(void *dest, void const *src, size_t size);
void my_memmove(void const *dest, void const *src, size_t size);
int my_memcmp(void const *ptr1, void const *ptr2, size_t size);
void *my_memchr(const void *s, int c, size_t n);
//time.h
//others
void my_werror(char const *message);
char *my_itoa(int nbr);
#endif /* !libC_h */
