/*
======= sasan zare 19/12/2020 =======

======= V 0.01 =======

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
            int siblings, popsicles;
            siblings = Convert.ToInt32(Console.ReadLine());
            popsicles = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine((popsicles%siblings == 0)?"give away":"eat them yourself");
        }
    }
}
