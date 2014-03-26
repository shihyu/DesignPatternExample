using System;
using System.Collections.Generic;
using System.Text;

namespace 訪問者模式
{
    class Program
    {
        static void Main(string[] args)
        {
            IList<Person> persons = new List<Person>();

            Person man1 = new Man();
            man1.Action = "成功";
            persons.Add(man1);
            Person woman1 = new Woman();
            woman1.Action = "成功";
            persons.Add(woman1);

            Person man2 = new Man();
            man2.Action = "失敗";
            persons.Add(man2);
            Person woman2 = new Woman();
            woman2.Action = "失敗";
            persons.Add(woman2);

            Person man3 = new Man();
            man3.Action = "戀愛";
            persons.Add(man3);
            Person woman3 = new Woman();
            woman3.Action = "戀愛";
            persons.Add(woman3);

            foreach (Person item in persons)
            {
                item.GetConclusion();
            }

            Console.Read();
        }
    }

    //人
    abstract class Person
    {
        protected string action;
        public string Action
        {
            get { return action; }
            set { action = value; }
        }
        //得到結論或反應
        public abstract void GetConclusion();
    }
    //男人
    class Man : Person
    {
        //得到結論或反應
        public override void GetConclusion()
        {
            if (action == "成功")
            {
                Console.WriteLine("{0}{1}時，背後多半有一個偉大的女人。", this.GetType().Name, action);
            }
            else if (action == "失敗")
            {
                Console.WriteLine("{0}{1}時，悶頭喝酒，誰也不用勸。", this.GetType().Name, action);
            }
            else if (action == "戀愛")
            {
                Console.WriteLine("{0}{1}時，凡事不懂也要裝懂。", this.GetType().Name, action);
            }
        }
    }
    //女人
    class Woman : Person
    {
        //得到結論或反應
        public override void GetConclusion()
        {
            if (action == "成功")
            {
                Console.WriteLine("{0}{1}時，背後大多有一個不成功的男人。", this.GetType().Name, action);
            }
            else if (action == "失敗")
            {
                Console.WriteLine("{0}{1}時，眼淚汪汪，誰也勸不了。", this.GetType().Name, action);
            }
            else if (action == "戀愛")
            {
                Console.WriteLine("{0}{1}時，遇事懂也裝作不懂。", this.GetType().Name, action);
            }
        }
    }
}
