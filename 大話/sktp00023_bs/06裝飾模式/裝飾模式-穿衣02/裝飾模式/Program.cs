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

            Finery dtx = new TShirts();
            Finery kk = new BigTrouser();
            Finery pqx = new Sneakers();

            dtx.Show();
            kk.Show();
            pqx.Show();
            xc.Show();

            Console.WriteLine("\n第二種裝扮：");

            Finery xz = new Suit();
            Finery ld = new Tie();
            Finery px = new LeatherShoes();

            xz.Show();
            ld.Show();
            px.Show();
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

        public void Show()
        {
            Console.WriteLine("裝扮的{0}", name);
        }
    }

    //服飾
    abstract class Finery
    {
        public abstract void Show();
    }

    //大T恤
    class TShirts : Finery
    {
        public override void Show()
        {
            Console.Write("大T恤 ");
        }
    }

    //垮褲
    class BigTrouser : Finery
    {
        public override void Show()
        {

            Console.Write("垮褲 ");
        }
    }

    //破球鞋
    class Sneakers : Finery
    {

        public override void Show()
        {

            Console.Write("破球鞋 ");
        }
    }

    //西裝
    class Suit : Finery
    {

        public override void Show()
        {

            Console.Write("西裝 ");
        }
    }

    //領帶
    class Tie : Finery
    {

        public override void Show()
        {

            Console.Write("領帶 ");
        }
    }

    //皮鞋
    class LeatherShoes : Finery
    {

        public override void Show()
        {

            Console.Write("皮鞋 ");
        }
    }

}
