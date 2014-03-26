using System;
using System.Collections.Generic;
using System.Text;

namespace 訪問者模式
{
    class Program
    {
        static void Main(string[] args)
        {
            ObjectStructure o = new ObjectStructure();
            o.Attach(new Man());
            o.Attach(new Woman());

            Success v1 = new Success();
            o.Display(v1);

            Failing v2 = new Failing();
            o.Display(v2);

            Amativeness v3 = new Amativeness();
            o.Display(v3);

            Marriage v4 = new Marriage();
            o.Display(v4);

            Console.Read();
        }
    }

    //狀態
    abstract class Action
    {
        //得到男人結論或反應
        public abstract void GetManConclusion(Man concreteElementA);
        //得到女人結論或反應
        public abstract void GetWomanConclusion(Woman concreteElementB);
    }


    //成功
    class Success : Action
    {
        public override void GetManConclusion(Man concreteElementA)
        {
            Console.WriteLine("{0}{1}時，背後多半有一個偉大的女人。", concreteElementA.GetType().Name, this.GetType().Name);
        }

        public override void GetWomanConclusion(Woman concreteElementB)
        {
            Console.WriteLine("{0}{1}時，背後大多有一個不成功的男人。", concreteElementB.GetType().Name, this.GetType().Name);
        }
    }
    //失敗
    class Failing : Action
    {
        public override void GetManConclusion(Man concreteElementA)
        {
            Console.WriteLine("{0}{1}時，悶頭喝酒，誰也不用勸。", concreteElementA.GetType().Name, this.GetType().Name);
        }

        public override void GetWomanConclusion(Woman concreteElementB)
        {
            Console.WriteLine("{0}{1}時，眼淚汪汪，誰也勸不了。", concreteElementB.GetType().Name, this.GetType().Name);
        }
    }
    //戀愛
    class Amativeness : Action
    {
        public override void GetManConclusion(Man concreteElementA)
        {
            Console.WriteLine("{0}{1}時，凡事不懂也要裝懂。", concreteElementA.GetType().Name, this.GetType().Name);
        }

        public override void GetWomanConclusion(Woman concreteElementB)
        {
            Console.WriteLine("{0}{1}時，遇事懂也裝作不懂", concreteElementB.GetType().Name, this.GetType().Name);
        }
    }
    //結婚
    class Marriage : Action
    {
        public override void GetManConclusion(Man concreteElementA)
        {
            Console.WriteLine("{0}{1}時，感慨道：戀愛遊戲終結時，‘有妻徒刑’遙無期。", concreteElementA.GetType().Name, this.GetType().Name);
        }

        public override void GetWomanConclusion(Woman concreteElementB)
        {
            Console.WriteLine("{0}{1}時，欣慰曰：愛情長跑路漫漫，婚姻保險保平安。", concreteElementB.GetType().Name, this.GetType().Name);
        }
    }

    //人
    abstract class Person
    {
        //接受
        public abstract void Accept(Action visitor);
    }

    //男人
    class Man : Person
    {
        public override void Accept(Action visitor)
        {
            visitor.GetManConclusion(this);
        }
    }

    //女人
    class Woman : Person
    {
        public override void Accept(Action visitor)
        {
            visitor.GetWomanConclusion(this);
        }
    }
    //物件結構
    class ObjectStructure
    {
        private IList<Person> elements = new List<Person>();

        //增加
        public void Attach(Person element)
        {
            elements.Add(element);
        }
        //移除
        public void Detach(Person element)
        {
            elements.Remove(element);
        }
        //查看顯示
        public void Display(Action visitor)
        {
            foreach (Person e in elements)
            {
                e.Accept(visitor);
            }
        }
    }
}
