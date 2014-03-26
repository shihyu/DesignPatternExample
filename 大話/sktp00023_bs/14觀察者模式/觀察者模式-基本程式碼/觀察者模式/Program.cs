using System;
using System.Collections.Generic;
using System.Text;

namespace 觀察者模式
{
    class Program
    {
        static void Main(string[] args)
        {
            ConcreteSubject s = new ConcreteSubject();

            s.Attach(new ConcreteObserver(s, "X"));
            s.Attach(new ConcreteObserver(s, "Y"));
            s.Attach(new ConcreteObserver(s, "Z"));

            s.SubjectState = "ABC";
            s.Notify();

            Console.Read();

        }
    }


    abstract class Subject
    {
        private IList<Observer> observers = new List<Observer>();

        //增加觀察者
        public void Attach(Observer observer)
        {
            observers.Add(observer);
        }
        //移除觀察者
        public void Detach(Observer observer)
        {
            observers.Remove(observer);
        }
        //通知
        public void Notify()
        {
            foreach (Observer o in observers)
            {
                o.Update();
            }
        }
    }

    //具體通知者
    class ConcreteSubject : Subject
    {
        private string subjectState;

        //具體通知者狀態
        public string SubjectState
        {
            get { return subjectState; }
            set { subjectState = value; }
        }
    }


    abstract class Observer
    {
        public abstract void Update();
    }

    class ConcreteObserver : Observer
    {
        private string name;
        private string observerState;
        private ConcreteSubject subject;

        public ConcreteObserver(
          ConcreteSubject subject, string name)
        {
            this.subject = subject;
            this.name = name;
        }
        //更新
        public override void Update()
        {
            observerState = subject.SubjectState;
            Console.WriteLine("觀察者{0}的新狀態是{1}",
              name, observerState);
        }

        public ConcreteSubject Subject
        {
            get { return subject; }
            set { subject = value; }
        }
    }

}
