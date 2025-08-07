/*

======= Symbols =======

======= sasan zare 14/01/2021 =======

======= V 0.01 =======

There is a problem with your keyboard: it randomly writes symbols when you are typing a text. You need to clean up the text by removing all symbols.

======= Task  =======

Take a text that includes some random symbols and translate it into a text that has none of them. The resulting text should only include letters and numbers.

======= Input Format =======

A string with random symbols.

======= Output Format =======

A string of the text with all the symbols removed.

======= Sample Input =======

%l$e%ts go @an#d@@ g***et #l#unch$$$

======= Sample Output =======

lets go and get lunch


*/

#include <stdio.h>
#include <ctype.h>

void remove_symbols(char *str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (isalnum(str[i]) || str[i] == ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char text[1000];
    fgets(text, sizeof(text), stdin);
    
    remove_symbols(text);
    printf("%s\n", text);
    
    return 0;
}