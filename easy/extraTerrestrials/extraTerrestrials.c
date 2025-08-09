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

#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    scanf("%s", word);
    int length = strlen(word);
    
    for (int i = 0; i < length / 2; i++) {
        char temp = word[i];
        word[i] = word[length - 1 - i];
        word[length - 1 - i] = temp;
    }
    
    printf("%s", word);
    return 0;
}