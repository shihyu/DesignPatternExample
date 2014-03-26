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

            huhansan.Update += new EventHandler(tongshi1.CloseStockMarket);
            huhansan.Update += new EventHandler(tongshi2.CloseNBADirectSeeding);

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
        void Notify();
        string SubjectState
        {
            get;
            set;
        }
    }

    //事件處理程式的委託
    delegate void EventHandler();

    class Secretary : Subject
    {
        //聲明一事件Update，類型為委託EventHandler
        public event EventHandler Update;

        private string action;

        public void Notify()
        {
            Update();
        }
        public string SubjectState
        {
            get { return action; }
            set { action = value; }
        }
    }

    class Boss : Subject
    {
        //聲明一事件Update，類型為委託EventHandler
        public event EventHandler Update;

        private string action;

        public void Notify()
        {
            Update();
        }
        public string SubjectState
        {
            get { return action; }
            set { action = value; }
        }
    }

    //看股票的同事
    class StockObserver
    {
        private string name;
        private Subject sub;
        public StockObserver(string name, Subject sub)
        {
            this.name = name;
            this.sub = sub;
        }

        //關閉股票行情
        public void CloseStockMarket()
        {
            Console.WriteLine("{0} {1} 關閉股票行情，繼續工作！", sub.SubjectState, name);
        }
    }

    //看NBA的同事
    class NBAObserver
    {
        private string name;
        private Subject sub;
        public NBAObserver(string name, Subject sub)
        {
            this.name = name;
            this.sub = sub;
        }

        //關閉NBA直播
        public void CloseNBADirectSeeding()
        {
            Console.WriteLine("{0} {1} 關閉NBA直播，繼續工作！", sub.SubjectState, name);
        }
    }
}
