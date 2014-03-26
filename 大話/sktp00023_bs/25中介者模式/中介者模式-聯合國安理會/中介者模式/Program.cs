using System;
using System.Collections.Generic;
using System.Text;

namespace 仲介者模式
{
    class Program
    {
        static void Main(string[] args)
        {
            UnitedNationsSecurityCouncil UNSC = new UnitedNationsSecurityCouncil();

            USA c1 = new USA(UNSC);
            Iraq c2 = new Iraq(UNSC);

            UNSC.Colleague1 = c1;
            UNSC.Colleague2 = c2;

            c1.Declare("不准研製核武器，否則要發動戰爭！");
            c2.Declare("我們沒有核武器，也不怕侵略。");

            Console.Read();
        }
    }

    //聯合國機構
    abstract class UnitedNations
    {
        /// <summary>
        /// 聲明
        /// </summary>
        /// <param name="message">聲明資訊</param>
        /// <param name="colleague">聲明國家</param>
        public abstract void Declare(string message, Country colleague);
    }

    //聯合國安全理事會
    class UnitedNationsSecurityCouncil : UnitedNations
    {
        private USA colleague1;
        private Iraq colleague2;

        public USA Colleague1
        {
            set { colleague1 = value; }
        }

        public Iraq Colleague2
        {
            set { colleague2 = value; }
        }

        public override void Declare(string message, Country colleague)
        {
            if (colleague == colleague1)
            {
                colleague2.GetMessage(message);
            }
            else
            {
                colleague1.GetMessage(message);
            }
        }
    }

    //國家
    abstract class Country
    {
        protected UnitedNations mediator;

        public Country(UnitedNations mediator)
        {
            this.mediator = mediator;
        }
    }

    //美國
    class USA : Country
    {
        public USA(UnitedNations mediator)
            : base(mediator)
        {

        }
        //聲明
        public void Declare(string message)
        {
            mediator.Declare(message, this);
        }
        //獲得消息
        public void GetMessage(string message)
        {
            Console.WriteLine("美國獲得對方資訊：" + message);
        }
    }

    //伊拉克
    class Iraq : Country
    {
        public Iraq(UnitedNations mediator)
            : base(mediator)
        {
        }

        //聲明
        public void Declare(string message)
        {
            mediator.Declare(message, this);
        }
        //獲得消息
        public void GetMessage(string message)
        {
            Console.WriteLine("伊拉克獲得對方資訊：" + message);
        }

    }
}
