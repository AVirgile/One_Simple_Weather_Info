/*
** Virgile AGNEL (Personal Project)
** One_Simple_Weather_info
** File description:
** weather.h
*/

#ifndef weather_h
#define weather_h

typedef struct child_data_s {
    char *name;
    char *string_data;
    double value_data;
    struct child_data_s *next;
} child_data;

typedef struct main_data_s {
    char *name;
    child_data *child;
    struct main_data_s *next;
} main_data;

int warning(void);
int init_stream(string *stream);
size_t function_ptr(void *ptr, size_t size, size_t nmemb, string *stream);
int get_loc(string *localisation);
char *get_city(string *localisation);
char *my_memcat(char *dest, char *src);

#endif /* !weather_h */