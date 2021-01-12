/*

======= sasan zare 12/01/2021 =======

======= V 0.02 =======

======= QUESTION =======

You have a box of popsicles and you want to give them all away to a group of brothers and sisters. If you have enough left in the box to give them each an even amount you should go for it! If not, they will fight over them, and you should eat them yourself later.

Task
Given the number of siblings that you are giving popsicles to, determine if you can give them each an even amount or if you shouldn't mention the popsicles at all.

======= Input Format =======
Two integer values, the first one represents the number of siblings, and the second one represents the number of popsicles that you have left in the box.

======= Output Format =======
A string that says 'give away' if you are giving them away, or 'eat them yourself' if you will be eating them yourself.

======= Sample Input =======
3 9

======= Sample Output =======
give away

*/

const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("", function(siblings) {
    rl.question("", function(popsicles) {
        console.log((popsicles%siblings==0)? "give away":"eat them yourself");
        rl.close();
    });
});

rl.on("close", function() {
    process.exit(0);
});
