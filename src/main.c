/*
** Virgile AGNEL (Personal Project)
** One_Simple_Weather_info
** File description:
** main.c
*/

#include "libC.h"
#include "callback.h"
#include "weather.h"
#include <curl/curl.h>
#include <cjson/cJSON.h>
#include <stdlib.h>

int init_stream(string *stream)
{
    stream->len = 0;
    stream->ptr = malloc(stream->len + 1);
    if (stream->ptr == NULL) {
        my_werror("Error while allocating memory\n");
        return (84);
    }
    stream->ptr[0] = '\0';
    return (0);
}

size_t function_ptr(void *ptr, size_t size, size_t nmemb, string *stream)
{
    size_t new_len = stream->len + size * nmemb;

    stream->ptr = my_realloc(stream->ptr, new_len + 1);
    if (stream->ptr == NULL) {
        my_werror("Error while reallocating memory\n");
        return (-1);
    }
    my_memcpy(stream->ptr + stream->len, ptr, size * nmemb);
    stream->ptr[new_len] = '\0';
    stream->len = new_len;
    return (size * nmemb);
}

static int get_http(string *stream)
{
    CURL *curl = curl_easy_init();
    CURLcode result = 0;

    if (curl == NULL) {
        my_werror("error while init curl\n");
        return (84);
    }
    if (init_stream(stream) == 84) return (84);
    curl_easy_setopt(curl, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Nancy,fr&APPID=26c70706489b3765f03adc58765a7f33");
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, function_ptr);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, stream);
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
    result = curl_easy_perform(curl);
    if (result != CURLE_OK) {
        my_werror("fetching API Failed (check your internet connection)\n");
        return (84);
    }
    curl_easy_cleanup(curl);
    return (0);
}

static int parse_data(string *data)
{
    cJSON *json = cJSON_Parse(data->ptr);
    char *string = cJSON_Print(json);
    cJSON *current_element = NULL;
    cJSON *sub = NULL;
    cJSON *exception = NULL;
    char *sub_data = NULL;
    char *current_key = NULL;
    my_bool_t authorize = MY_FALSE;

    my_printf("**********\n# result #\n**********\n\n");
    cJSON_ArrayForEach(current_element, json) {
        authorize = MY_FALSE;
        current_key = current_element->string;
        if (current_key != NULL) {
           my_printf("%s\n", current_key);
            cJSON_ArrayForEach(sub, current_element) {
                authorize = MY_TRUE;
                sub_data = sub->string;
                if (sub_data != NULL) {
                    my_printf("        %s = ", sub_data);
                    if (sub->type == 8)
                        printf("%f\n", sub->valuedouble);
                    else if (sub->type == 16)
                        my_printf("%s\n", sub->valuestring);
                } else {
                   for (int i = 0; i < cJSON_GetArraySize(sub); i++) {
                       exception = cJSON_GetArrayItem(sub, i);
                       if (exception != NULL) {
                           my_printf("        %s = ", exception->string);
                           if (exception->type == 8)
                               printf("%f\n", exception->valuedouble);
                           else if (exception->type == 16)
                               my_printf("%s\n", exception->valuestring);
                       }
                   }
                }
            }
            if (authorize == MY_FALSE) {
                if (current_element->type == 8)
                    printf("        %f\n", current_element->valuedouble);
                else if (current_element->type == 16)
                    my_printf("        %s\n", current_element->valuestring);
            }
        }
    }
    free(data->ptr);
    free(string);
    cJSON_Delete(json);
    return (0);
}

int main(int const argc, __attribute__((unused)) char const **argv)
{
    string stream;
    string localisation;

    if (argc == 1) {
        my_printf("*******************************************************"
                  "\n#  Welcome to a simple but effective Weather Program  #\n"
                  "*******************************************************\n");
        if (warning() == -1) return (0);
        if (get_loc(&localisation) == 84) return (84);
        if (get_http(&stream) == 84) return (84);
        if (parse_data(&stream) == -1) return (84);
        my_printf("***********************\n# Exiting program.... #\n***********************\n");
        return (0);
    }
    my_werror("this program doest not take any arguments\n");
    return (84);
}