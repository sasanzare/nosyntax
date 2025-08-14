/*

======= Security =======

======= sasan zare 13/01/2021 =======

======= V 0.02 =======

======= QUESTION =======

You are in charge of security at a casino, and there is a thief who is trying to steal the casino's money!  Look over the security diagrams to make sure that you always have a guard between the thief and the money!
There is one money location, one thief, and any number of guards on each floor of the casino.

======= Task  =======

Evaluate a given floor of the casino to determine if there is a guard between the money and the thief, if there is not, you will sound an alarm.

======= Input Format =======

A string of characters that includes $ (money), T (thief), and G (guard), that represents the layout of the casino floor.
Space on the casino floor that is not occupied by either money, the thief, or a guard is represented by the character x.

======= Output Format =======

A string that says 'ALARM' if the money is in danger or 'quiet' if the money is safe.

======= Sample Input =======

xxxxxGxx$xxxT

======= Sample Output =======

 ALARM

*/


#include <stdio.h>
#include <string.h>

void evaluateSecurity(const char* floor) {
    int moneyPos = -1, thiefPos = -1;
    int len = strlen(floor);
    
    // Find positions of money and thief
    for (int i = 0; i < len; i++) {
        if (floor[i] == '$') moneyPos = i;
        if (floor[i] == 'T') thiefPos = i;
    }
    
    if (moneyPos == -1 || thiefPos == -1) {
        printf("quiet\n");
        return;
    }
    
    int start, end;
    if (moneyPos < thiefPos) {
        start = moneyPos;
        end = thiefPos;
    } else {
        start = thiefPos;
        end = moneyPos;
    }
    
    // Check for guards between money and thief
    for (int i = start + 1; i < end; i++) {
        if (floor[i] == 'G') {
            printf("quiet\n");
            return;
        }
    }
    
    printf("ALARM\n");
}

int main() {
    char floor[1000];
    scanf("%s", floor);
    evaluateSecurity(floor);
    return 0;
}