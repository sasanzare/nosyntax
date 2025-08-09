/*

======= Extra-Terrestrials =======

======= sasan zare 18/01/2021 =======

======= V 0.01 =======

======= QUESTION =======

You meet a group of aliens, and their language is just like English except that they say every word backwards.
How will you learn to communicate with them?

======= Task  =======

Take a word in English that you would like to say, and turn it into language that these aliens will understand.

======= Input Format =======

A string of a word in English.

======= Output Format =======

A string of the reversed word that represents the original word translated into alien language.

======= Sample Input =======

howdy

======= Sample Output =======

ydwoh

*/

#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string word;
    std::cin >> word;
    std::reverse(word.begin(), word.end());
    std::cout << word;
    return 0;
}