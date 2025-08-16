/*
======= New Driver's License =======

======= sasan zare 19/01/2021 =======

======= V 0.01 =======

======= QUESTION =======

 You have to get a new driver's license and you show up at the office at the same time as 4 other people. The office says that they will see everyone in alphabetical order and it takes 20 minutes for them to process each new license. All of the agents are available now, and they can each see one customer at a time. How long will it take for you to walk out of the office with your new license?

======= Task  =======

 Given everyone's name that showed up at the same time, determine how long it will take to get your new license.

======= Input Format =======

 Your input will be a string of your name, then an integer of the number of available agents, and lastly a string of the other four names separated by spaces.

======= Output Format =======

 You will output an integer of the number of minutes that it will take to get your license.

======= Sample Input =======

 'Eric'
 2
 'Adam Caroline Rebecca Frank'

======= Sample Output =======

 40

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string myName;
    int agents;
    vector<string> names(5);
    
    cin >> myName;
    cin >> agents;
    for (int i = 0; i < 4; i++) {
        cin >> names[i];
    }
    names[4] = myName;
    
    sort(names.begin(), names.end());
    
    int myPos = find(names.begin(), names.end(), myName) - names.begin();
    int time = (myPos / agents + 1) * 20;
    
    cout << time << endl;
    
    return 0;
}