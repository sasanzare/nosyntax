/*

======= Symbols =======

======= sasan zare 13/01/2021 =======

======= V 0.02 =======

There is a problem with your keyboard: it randomly writes symbols when you are typing a text. You need to clean up the text by removing all symbols.

======= Task  =======

Take a text that includes some random symbols and translate it into a text that has none of them. The resulting text should only include letters and numbers.

======= Input Format =======

A string with random symbols.

======= Output Format =======

A string of the text with all the symbols removed.

======= Sample Input =======

%l$e%ts go @an#d@@ g***et #l#unch$$$

======= Sample Output =======

lets go and get lunch



*/


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Text.RegularExpressions;
namespace Sasanzare
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Regex.Replace(Console.ReadLine(), @"[^0-9a-zA-Z ]+", ""));
        }
    }
}
