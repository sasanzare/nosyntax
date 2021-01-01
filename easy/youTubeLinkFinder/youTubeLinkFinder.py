'''

======= YouTube Link Finder =======

======= sasan zare 01/01/2021 =======

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

'''

arr = input().split('/')
print(arr[-1][arr[-1].find('=')+1:] if arr[-1].find('=')else arr[-1])
