
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

#include <iostream>
#include <string>

using namespace std;

string extract_video_id(const string& url) {
    size_t v_pos = url.find("v=");
    size_t last_slash = url.rfind('/');
    
    if (v_pos != string::npos) {
        size_t start = v_pos + 2;
        size_t end = url.find('&', start);
        return url.substr(start, end == string::npos ? end : end - start);
    }
    else if (last_slash != string::npos) {
        return url.substr(last_slash + 1);
    }
    return "";
}

int main() {
    string url;
    getline(cin, url);
    cout << extract_video_id(url);
    return 0;
}