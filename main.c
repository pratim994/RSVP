#include <stdio.h>


int send_rsvp(const char *event_id, const char* access_token);
//size_t write_callbacks(void *contents, size_t size, size_t nmemb, void *userp);

int main(){
    const char* event_id ="1234567";
    const char *access_token = "YOUR_ACCESS_TOKEN";

    int result = send_rsvp(event_id, access_token);

    if(result == 0){
        printf("Done.\n");

    }else{
        printf("Something went wrong\n");

    }

    return result;
}