/*

======= Pig Latin =======

======= sasan zare 17/01/2021 =======

======= V 0.01 =======

======= QUESTION =======

You have two friends who are speaking Pig Latin to each other! Pig Latin is the same words in the same order except that you take the first letter of each word and put it on the end, then you add 'ay' to the end of that. ("road" = "oadray")

======= Task  =======

Your task is to take a sentence in English and turn it into the same sentence in Pig Latin!

======= Input Format =======

A string of the sentence in English that you need to translate into Pig Latin. (no punctuation or capitalization)

======= Output Format =======

A string of the same sentence in Pig Latin.

======= Sample Input =======

"nevermind youve got them"

======= Sample Output =======

"evermindnay ouveyay otgay hemtay"


*/


#include <stdio.h>
#include <string.h>

void main() {
	char in[256];
	char *out;
	char f;

	fgets(in,256,stdin);
	out=strtok(in," ");
	while(out){

		f=*out++;
		printf("%s%cay ", out, f);
		out=strtok(NULL," ");
	}
}
