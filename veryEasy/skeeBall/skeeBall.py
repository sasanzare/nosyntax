'''
======= Skee-Ball =======

======= sasan zare 19/01/2021 =======

======= V 0.01 =======

======= QUESTION =======

You are playing a game at your local arcade, and you receive 1 ticket from the machine for every 12 points that you score. You want to purchase a squirt gun with your tickets. Given your score, and the price of the squirt gun (in tickets) are you able to buy it?

======= Task  =======

Evaluate whether or not you have scored high enough to earn enough tickets to purchase the squirt gun at the arcade.

======= Input Format =======

The first input is an integer value that represents the points that you scored playing, and the second input is an integer value that represents the cost of the squirt gun (in tickets).

======= Output Format =======

A string that say 'Buy it!' if you will have enough tickets, or a string that says 'Try again' if you will not.

======= Sample Input =======

500
40

======= Sample Output =======

Buy it!

'''

print("Buy it!" if (int(input())/12)>=int(input()) else "Try again")
