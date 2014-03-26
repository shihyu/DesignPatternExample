using System;
using System.Collections.Generic;
using System.Text;

namespace 觀察者模式
{
    class Program
    {
        static void Main(string[] args)
        {
            //老板胡漢三
            Boss huhansan = new Boss();

            //看股票的同事
            StockObserver tongshi1 = new StockObserver("魏關奼", huhansan);
            //看NBA的同事
            NBAObserver tongshi2 = new NBAObserver("易管查", huhansan);

            huhansan.Attach(tongshi1);
            huhansan.Attach(tongshi2);

            huhansan.Detach(tongshi1);

            //老闆回來
            huhansan.SubjectState = "我胡漢三回來了！";
            //發出通知
            huhansan.Notify();

            Console.Read();
        }
    }

    //通知者介面
    interface Subject
    {
        void Attach(Observer observer);
        void Detach(Observer observer);
        void Notify();
        string SubjectState
        {
            get;
            set;
        }
    }

    class Secretary : Subject
    {
        //同事列表
        private IList<Observer> observers = new List<Observer>();
        private string action;

        //增加
        public void Attach(Observer observer)
        {
            observers.Add(observer);
        }

        //減少
        public void Detach(Observer observer)
        {
            observers.Remove(observer);
        }

        //通知
        public void Notify()
        {
            foreach (Observer o in observers)
                o.Update();
        }

        //前臺狀態
        public string SubjectState
        {
            get { return action; }
            set { action = value; }
        }
    }

    class Boss : Subject
    {
        //同事列表
        private IList<Observer> observers = new List<Observer>();
        private string action;

        //增加
        public void Attach(Observer observer)
        {
            observers.Add(observer);
        }

        //減少
        public void Detach(Observer observer)
        {
            observers.Remove(observer);
        }

        //通知
        public void Notify()
        {
            foreach (Observer o in observers)
                o.Update();
        }

        //老闆狀態
        public string SubjectState
        {
            get { return action; }
            set { action = value; }
        }
    }

    //抽象觀察者
    abstract class Observer
    {
        protected string name;
        protected Subject sub;

        public Observer(string name, Subject sub)
        {
            this.name = name;
            this.sub = sub;
        }

        public abstract void Update();
    }

    //看股票的同事
    class StockObserver : Observer
    {
        public StockObserver(string name, Subject sub)
            : base(name, sub)
        {
        }

        public override void Update()
        {
            Console.WriteLine("{0} {1} 關閉股票行情，繼續工作！", sub.SubjectState, name);
        }
    }

    //看NBA的同事
    class NBAObserver : Observer
    {
        public NBAObserver(string name, Subject sub)
            : base(name, sub)
        {
        }

        public override void Update()
        {
            Console.WriteLine("{0} {1} 關閉NBA直播，繼續工作！", sub.SubjectState, name);
        }
    }
}
