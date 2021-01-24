/*

======= Extra-Terrestrials =======

======= sasan zare 24/01/2021 =======

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

const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("", function(text) {
    console.log(text.split('').reverse().join(''));
    rl.close();
});

rl.on("close", function() {
    process.exit(0);
});
