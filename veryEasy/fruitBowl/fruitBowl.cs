/*

======= Fruit Bowl =======

======= sasan zare 13/01/2021 =======

======= V 0.02 =======

======= QUESTION =======

You have a bowl on your counter with an even number of pieces of fruit in it. Half of them are bananas, and the other half are apples. You need 3 apples to make a pie.

======= Task  =======

Your task is to evaluate the total number of pies that you can make with the apples that are in your bowl given to total amount of fruit in the bowl.

======= Input Format =======

An integer that represents the total amount of fruit in the bowl.

======= Output Format =======

An integer representing the total number of whole apple pies that you can make.

======= Sample Input =======

26

======= Sample Output =======

4

*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sasanzare
{
    class Program
    {
        static void Main(string[] args)
        {
            int fruit;
            fruit = Convert.ToInt32(Console.ReadLine());
             Console.WriteLine((fruit/2)/3);

        }
    }
}
