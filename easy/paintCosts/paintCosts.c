/*

======= Paint costs =======

======= sasan zare 25/01/2021 =======

======= V 0.01 =======

======= QUESTION =======

You are getting ready to paint a piece of art. The canvas and brushes that you want to use will cost 40.00. Each color of paint that you buy is an additional 5.00. Determine how much money you will need based on the number of colors that you want to buy if tax at this store is 10%.

======= Task  =======

Given the total number of colors of paint that you need, calculate and output the total cost of your project rounded up to the nearest whole number.

======= Input Format =======

An integer that represents the number of colors that you want to purchase for your project.

======= Output Format =======

A number that represents the cost of your purchase rounded up to the nearest whole number.

======= Sample Input =======

10

======= Sample Output =======

99

*/

#include <stdio.h>
#include <math.h>

int main() {
    int number;
    scanf("%d", &number);
    number = (number * 5) + 40;
    printf("%d\n", (int)round(number * 0.10 + number));
    return 0;
}