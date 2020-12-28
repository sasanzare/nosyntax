/*

======= That's odd... =======

======= sasan zare 28/12/2020 =======

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

*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int i=0,n,m,sum=0;
            n = Convert.ToInt32(Console.ReadLine());
            for(;i<n;i++){
                m = Convert.ToInt32(Console.ReadLine());
                if(m%2 ==0)
                    sum+=m;
            }
            Console.WriteLine(sum);
        }
    }
}
