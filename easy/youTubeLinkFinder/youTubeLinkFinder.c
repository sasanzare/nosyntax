
/*

======= YouTube Link Finder =======

======= sasan zare 02/01/2021 =======

======= V 0.01 =======

======= QUESTION =======

You and your friends like to share YouTube links all throughout the day. You want to keep track of all the videos you watch in your own personal notepad, but you find that keeping the entire link is unnecessary.
Keep the video ID (the combination of letters and numbers at the end of the link) in your notepad to slim down the URL.

======= Task  =======

Create a program that parses through a link, extracts and outputs the YouTube video ID.

======= Input Format =======

A string containing the URL to a YouTube video. The format of the string can be in "https://www.youtube.com/watch?v=kbxkaq_w51PM" or the shortened "https://youtu.be/KMBBjzp5hadc" format.

======= Output Format =======

A string containing the extracted YouTube video id.

======= Sample Input =======

https://www.youtube.com/watch?v=RpW2aUSw5uU

======= Sample Output =======

RpW2aUSw5uU

*/

#include <stdio.h>
#include <string.h>

void extract_video_id(const char *url, char *video_id) {
    const char *v_pos = strstr(url, "v=");
    const char *last_slash = strrchr(url, '/');
    
    if (v_pos != NULL) {
        // For long format: copy everything after "v=" until end or next '&'
        const char *start = v_pos + 2;
        const char *end = strchr(start, '&');
        if (end == NULL) {
            strcpy(video_id, start);
        } else {
            strncpy(video_id, start, end - start);
            video_id[end - start] = '\0';
        }
    } else if (last_slash != NULL) {
        // For short format: copy everything after last '/'
        strcpy(video_id, last_slash + 1);
    }
}

int main() {
    char url[100];
    char video_id[20];
    
    fgets(url, sizeof(url), stdin);
    // Remove newline character if present
    url[strcspn(url, "\n")] = '\0';
    
    extract_video_id(url, video_id);
    printf("%s", video_id);
    
    return 0;
}
