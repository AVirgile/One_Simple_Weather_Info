/*
** Virgile AGNEL (Personal Project)
** One_Simple_Weather_info
** File description:
** main.c
*/

#include "libC.h"
#include <curl/curl.h>
#include <cjson/cJSON.h>

static CURLcode get_http(void)
{
    CURL *curl = curl_easy_init();
    CURLcode result = 0;

    if (curl == NULL) {
        my_werror("error while init curl\n");
        return (-1);
    }
    curl_easy_setopt(curl, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=London,uk&APPID=26c70706489b3765f03adc58765a7f33");
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    result = curl_easy_perform(curl);
    if (result != CURLE_OK) {
        my_werror("fetching API Failed");
        return (-1);
    }
    curl_easy_cleanup(curl);
    return (result);
}

int main(int const argc, __attribute__((unused)) char const **argv)
{
    CURLcode result = 0;

    if (argc == 1) {
        result = get_http();
        if (result == -1) return (84);
        return (0);
    }
    my_werror("this program doest not take any arguments\n");
    return (84);
}