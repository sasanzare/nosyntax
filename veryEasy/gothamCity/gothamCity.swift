/*

======= Gotham City =======

======= sasan zare 10/01/2021 =======

======= V 0.01 =======

======= QUESTION =======

You are a police officer, and you get a report of criminal activity! Should you go on your own, or should you call a superhero to help you fight the crime? If there are less than 5, you can handle this on your own, if there are 5-10, you will want to go with Batman for backup, and if there are more than 10, you should stay where it is safe and let Batman handle this on his own!

======= Task  =======

Determine whether you need to call backup based on the total number of criminals being reported.

======= Input Format =======

An integer that represents the total number of criminals present at the scene.

======= Output Format =======

A string that says 'I got this!', 'Help me Batman', or 'Good Luck out there!' depending on the scenario.

======= Sample Input =======

7

======= Sample Output =======

'Help me Batman'

*/

if let input = readLine(), let val = Int(input) {
    if(val<5){print("I got this!")}
    else if(val>=5 && val<10){print("Help me Batman")}
    else{print("Good Luck out there!")}
}
