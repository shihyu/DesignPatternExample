using System;
using System.Collections.Generic;
using System.Text;

namespace 外觀模式
{
    class Program
    {
        static void Main(string[] args)
        {

            Fund jijin = new Fund();

            jijin.BuyFund();
            jijin.SellFund();

            Console.Read();

        }
    }

    class Fund
    {
        Stock1 gu1;
        Stock2 gu2;
        Stock3 gu3;
        NationalDebt1 nd1;
        Realty1 rt1;

        public Fund()
        {
            gu1 = new Stock1();
            gu2 = new Stock2();
            gu3 = new Stock3();
            nd1 = new NationalDebt1();
            rt1 = new Realty1();
        }

        public void BuyFund()
        {
            gu1.Buy();
            gu2.Buy();
            gu3.Buy();
            nd1.Buy();
            rt1.Buy();
        }

        public void SellFund()
        {
            gu1.Sell();
            gu2.Sell();
            gu3.Sell();
            nd1.Sell();
            rt1.Sell();
        }

    }

    //股票1
    class Stock1
    {
        //賣股票
        public void Sell()
        {
            Console.WriteLine(" 股票1賣出");
        }

        //買股票
        public void Buy()
        {
            Console.WriteLine(" 股票1買入");
        }
    }

    //股票2
    class Stock2
    {
        //賣股票
        public void Sell()
        {
            Console.WriteLine(" 股票2賣出");
        }

        //買股票
        public void Buy()
        {
            Console.WriteLine(" 股票2買入");
        }
    }

    //股票3
    class Stock3
    {
        //賣股票
        public void Sell()
        {
            Console.WriteLine(" 股票3賣出");
        }

        //買股票
        public void Buy()
        {
            Console.WriteLine(" 股票3買入");
        }
    }

    //國債1
    class NationalDebt1
    {
        //賣國債
        public void Sell()
        {
            Console.WriteLine(" 國債1賣出");
        }

        //買國債
        public void Buy()
        {
            Console.WriteLine(" 國債1買入");
        }
    }

    //房地產1
    class Realty1
    {
        //賣房地產
        public void Sell()
        {
            Console.WriteLine(" 房產1賣出");
        }

        //買房地產
        public void Buy()
        {
            Console.WriteLine(" 房產1買入");
        }
    }
}
