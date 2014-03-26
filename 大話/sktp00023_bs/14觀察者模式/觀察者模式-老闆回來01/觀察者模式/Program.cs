using System;
using System.Collections.Generic;
using System.Text;

namespace 觀察者模式
{
    class Program
    {
        static void Main(string[] args)
        {

            //前臺小姐童子喆
            Secretary tongzizhe = new Secretary();
            //看股票的同事
            StockObserver tongshi1 = new StockObserver("魏關奼", tongzizhe);
            StockObserver tongshi2 = new StockObserver("易管查", tongzizhe);

            //前臺記下了兩位同事
            tongzizhe.Attach(tongshi1);
            tongzizhe.Attach(tongshi2);
            //發現老闆回來
            tongzizhe.SecretaryAction = "老闆回來了！";
            //通知兩個同事
            tongzizhe.Notify();

            Console.Read();
        }
    }

    //前臺秘書類
    class Secretary
    {
        //同事列表
        private IList<StockObserver> observers = new List<StockObserver>();
        private string action;

        //增加
        public void Attach(StockObserver observer)
        {
            observers.Add(observer);
        }

        //減少
        public void Detach(StockObserver observer)
        {
            observers.Remove(observer);
        }

        //通知
        public void Notify()
        {
            foreach (StockObserver o in observers)
                o.Update();
        }

        //前臺狀態
        public string SecretaryAction
        {
            get { return action; }
            set { action = value; }
        }

    }

    //看股票的同事
    class StockObserver
    {
        private string name;
        private Secretary sub;

        public StockObserver(string name, Secretary sub)
        {
            this.name = name;
            this.sub = sub;
        }

        public void Update()
        {
            Console.WriteLine("{0} {1} 關閉股票行情，繼續工作！", sub.SecretaryAction, name);
        }
    }

}
