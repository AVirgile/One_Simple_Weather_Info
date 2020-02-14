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
    my_printf("\n%s\n\n", localisation->ptr);
    return (0);
}