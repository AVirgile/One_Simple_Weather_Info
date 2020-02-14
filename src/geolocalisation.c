/*
** Virgile AGNEL (Personal Project)
** One_Simple_Weather_info
** File description:
** geolocalisation.c
*/

#include "libC.h"
#include "callback.h"
#include "weather.h"
#include <curl/curl.h>
#include <cjson/cJSON.h>

char *my_memcat(char *dest, char *src)
{
    size_t l_one = 0;
    size_t l_two = 0;
    size_t l_three = 0;
    char *result = NULL;

    if (dest != NULL)
        for (; dest[l_one]; l_one++);
    for (; src[l_two]; l_two++);
    l_three = l_one + l_two + 1;
    result = malloc(l_three);
    if (result == NULL)
        return (NULL);
    for (l_one = 0; dest != NULL && dest[l_one] != '\0'; l_one++)
        result[l_one] = dest[l_one];
    for (l_two = 0; src != NULL && src[l_two] != '\0'; l_two++) {
        result[l_one] = src[l_two];
        l_one++;
    }
    result[l_one] = '\0';
    free(dest);
    return (result);
}

int get_loc(string *localisation)
{
    CURL *curl = curl_easy_init();
    CURLcode result = 0;

    if (curl == NULL) {
        my_werror("error while init curl\n");
        return (84);
    }
    if (init_stream(localisation) == 84) return (84);
    curl_easy_setopt(curl, CURLOPT_URL, "http://ip-api.com/json/");
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, function_ptr);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, localisation);
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
    result = curl_easy_perform(curl);
    if (result != CURLE_OK) {
        my_werror("fetching API Failed (check your internet connection)\n");
        return (84);
    }
    curl_easy_cleanup(curl);
    return (0);
}

char *get_city(string *localisation)
{
    cJSON *json = cJSON_Parse(localisation->ptr);
    char *string = cJSON_Print(json);
    cJSON *data = NULL;
    char *city = NULL;

    data = cJSON_GetArrayItem(json, 5);
    city = my_strdup(data->valuestring);
    free(localisation->ptr);
    free(string);
    cJSON_Delete(json);
    return (city);
}