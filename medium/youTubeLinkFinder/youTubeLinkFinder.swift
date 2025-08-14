
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

import Foundation

func extractVideoID(from url: String) -> String {
    if let vRange = url.range(of: "v=") {
        let startIndex = url.index(vRange.upperBound, offsetBy: 0)
        if let endIndex = url.range(of: "&", range: startIndex..<url.endIndex)?.lowerBound {
            return String(url[startIndex..<endIndex])
        }
        return String(url[startIndex...])
    } else if let lastSlashRange = url.range(of: "/", options: .backwards) {
        let startIndex = url.index(lastSlashRange.upperBound, offsetBy: 0)
        return String(url[startIndex...])
    }
    return ""
}

if let url = readLine() {
    print(extractVideoID(from: url))
}