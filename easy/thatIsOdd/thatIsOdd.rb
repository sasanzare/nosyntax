=begin

======= That's odd... =======

======= sasan zare 30/12/2020 =======

======= V 0.01 =======

======= QUESTION =======

You want to take a list of numbers and find the sum of all of the even numbers in the list. Ignore any odd numbers.

======= Task  =======

Find the sum of all even integers in a list of numbers.

======= Input Format =======

The first input denotes the length of the list (N). The next N lines contain the list elements as integers.

======= Output Format =======

An integer that represents the sum of only the even numbers in the list.

======= Sample Input =======

9
1
2
3
4
5
6
7
8
9

======= Sample Output =======

20


=end
sum=0
for m in 1..gets.chomp.to_i do
    m=gets.chomp.to_i
    if m%2 ==0
        sum+=m
    end
end
puts sum
