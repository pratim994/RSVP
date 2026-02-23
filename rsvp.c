#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<curl/curl.h>

#define API_URL "https://httpbin.org/post"


int send_rsvp(const char *event_id, const char *access_token){
    CURL *curl;
    CURLcode res;
    long response_code = 0;
    
    char url[512];
    snprintf(url, sizeof(url),"%s", "https://httpbin.org/post");

    const char *json_body = "{\"response\":\"yes\"}";
    
    curl =curl_easy_init();
    if(!curl){
        fprintf(stderr,"failed to initiliaze curl\n");
        return 1;
    }

    struct curl_slist *headers = NULL;
    headers = curl_slist_append(headers, "content-type: application/json");


    char auth_header[512];
    snprintf(auth_header , sizeof(auth_header), "Authorization: Bearer %s" ,access_token );
    headers = curl_slist_append(headers, auth_header);



 size_t write_callback(void *contents, size_t size, size_t nmemb, void *userp)
{
    size_t total_size = size * nmemb;

    printf("%.*s", (int)total_size, (char *)contents);

    return total_size;
}

    printf("FINAL URL: %s\n", url);
    curl_easy_setopt(curl,CURLOPT_URL, url);

    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, json_body);

     curl_easy_setopt(curl,CURLOPT_POST, 1l);
     curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION , write_callback);
     curl_easy_setopt(curl, CURLOPT_VERBOSE,1l);
     curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10L);
    curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 5L);


     res = curl_easy_perform(curl);

     if(res!= CURLE_OK){
        fprintf(stderr, "Curl error: %s\n", curl_easy_strerror(res));
     } else{
            curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
            printf("HTTP response code: %ld\n", response_code);

            if(response_code == 200 || response_code == 201){
                printf("RSVP successfull !\n");

            }else{
                printf("RSVP failed >:-(\n");
            }

     }
     curl_slist_free_all(headers);
     curl_easy_cleanup(curl);


     return (response_code == 200 || response_code == 201 ) ? 0 : 1;
    



}







