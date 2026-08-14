using System;

namespace Problems._800.Watermelon
{
    class Watermelon
    {
        static void Main(string[] args)
        {
            int input = int.Parse(Console.ReadLine());
            string result = input % 2 == 0 && input > 2 ? "YES" : "NO";
            Console.WriteLine(result);
        }
    }
}