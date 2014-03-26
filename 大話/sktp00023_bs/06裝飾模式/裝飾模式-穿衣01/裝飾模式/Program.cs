using System;
using System.Collections.Generic;
using System.Text;

namespace 裝飾模式
{
    class Program
    {
        static void Main(string[] args)
        {
            Person xc = new Person("小菜");

            Console.WriteLine("\n第一種裝扮：");

            xc.WearTShirts();
            xc.WearBigTrouser();
            xc.WearSneakers();
            xc.Show();

            Console.WriteLine("\n第二種裝扮：");

            xc.WearSuit();
            xc.WearTie();
            xc.WearLeatherShoes();
            xc.Show();

            Console.Read();
        }
    }

    class Person
    {
        private string name;
        public Person(string name)
        {
            this.name = name;
        }

        public void WearTShirts()
        {
            Console.Write("大T恤 ");
        }

        public void WearBigTrouser()
        {
            Console.Write("垮褲 ");
        }

        public void WearSneakers()
        {
            Console.Write("破球鞋 ");
        }

        public void WearSuit()
        {
            Console.Write("西裝 ");
        }

        public void WearTie()
        {
            Console.Write("領帶 ");
        }

        public void WearLeatherShoes()
        {
            Console.Write("皮鞋 ");
        }

        public void Show()
        {
            Console.WriteLine("裝扮的{0}", name);
        }
    }
}
