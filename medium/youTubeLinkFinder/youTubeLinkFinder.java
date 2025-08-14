
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

import java.util.Scanner;

public class YouTubeLinkFinder {
    public static String extractVideoId(String url) {
        int vPos = url.indexOf("v=");
        int lastSlash = url.lastIndexOf('/');
        
        if (vPos != -1) {
            int start = vPos + 2;
            int end = url.indexOf('&', start);
            return end == -1 ? url.substring(start) : url.substring(start, end);
        }
        else if (lastSlash != -1) {
            return url.substring(lastSlash + 1);
        }
        return "";
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String url = scanner.nextLine();
        System.out.println(extractVideoId(url));
    }
}