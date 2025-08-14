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

#include <iostream>
#include <string>

using namespace std;

void evaluateSecurity(const string& floor) {
    size_t moneyPos = floor.find('$');
    size_t thiefPos = floor.find('T');
    
    if (moneyPos == string::npos || thiefPos == string::npos) {
        cout << "quiet" << endl;
        return;
    }
    
    size_t start = min(moneyPos, thiefPos);
    size_t end = max(moneyPos, thiefPos);
    
    // Check for guards between money and thief
    for (size_t i = start + 1; i < end; ++i) {
        if (floor[i] == 'G') {
            cout << "quiet" << endl;
            return;
        }
    }
    
    cout << "ALARM" << endl;
}

int main() {
    string floor;
    cin >> floor;
    evaluateSecurity(floor);
    return 0;
}