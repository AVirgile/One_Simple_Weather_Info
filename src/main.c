/*
** Virgile AGNEL (Personal Project)
** One_Simple_Weather_info
** File description:
** main.c
*/

#include "libC.h"
#include "callback.h"
#include <curl/curl.h>
#include <cjson/cJSON.h>
#include <stdlib.h>

static int init_stream(string *stream)
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

static size_t function_ptr(void *ptr, size_t size, size_t nmemb, string *stream)
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
    curl_easy_setopt(curl, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Nancy,fra&APPID=26c70706489b3765f03adc58765a7f33");
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, function_ptr);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, stream);
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
    result = curl_easy_perform(curl);
    if (result != CURLE_OK) {
        my_werror("fetching API Failed");
        return (84);
    }
    curl_easy_cleanup(curl);
    return (0);
}

static int parse_data(string *data)
{
    cJSON *json = cJSON_Parse(data->ptr);
    char *string = cJSON_Print(json);

    my_printf("%s\n", string);
    free(data->ptr);
    free(string);
    free(json);
    return (0);
}

int main(int const argc, __attribute__((unused)) char const **argv)
{
    int result = 0;
    string stream;

    if (argc == 1) {
        result = get_http(&stream);
        if (result == 84) return (84);
        if (parse_data(&stream) == -1) return (84);
        return (0);
    }
    my_werror("this program doest not take any arguments\n");
    return (84);
}