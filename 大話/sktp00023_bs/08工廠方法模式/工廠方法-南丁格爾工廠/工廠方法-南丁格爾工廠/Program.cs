using System;
using System.Collections.Generic;
using System.Text;

namespace 工廠方法_南丁格爾工廠
{
    class Program
    {
        static void Main(string[] args)
        {

            //
            //基本方式:胡鞏代表大學生學習南丁格爾
            Nightingale hugong = new Undergraduate();

            hugong.BuyRice();
            hugong.Sweep();
            hugong.Wash();


            Nightingale student1 = new Undergraduate();
            student1.BuyRice();
            Nightingale student2 = new Undergraduate();
            student2.Sweep();
            Nightingale student3 = new Undergraduate();
            student3.Wash();



            //簡單工廠模式
            Nightingale studentA = SimpleFactory.CreateNightingale("學南丁格爾的大學生");
            studentA.BuyRice();
            Nightingale studentB = SimpleFactory.CreateNightingale("學南丁格爾的大學生");
            studentB.Sweep();
            Nightingale studentC = SimpleFactory.CreateNightingale("學南丁格爾的大學生");
            studentC.Wash();


            //工廠方法模式
            IFactory factory = new UndergraduateFactory();
            Nightingale student = factory.CreateNightingale();

            student.BuyRice();
            student.Sweep();
            student.Wash();

            Console.Read();
        }
    }

    //南丁格爾
    class Nightingale
    {
        public void Sweep()
        {
            Console.WriteLine("掃地");
        }

        public void Wash()
        {
            Console.WriteLine("洗衣");
        }

        public void BuyRice()
        {
            Console.WriteLine("買米");
        }
    }

    //學南丁格爾的大學生
    class Undergraduate : Nightingale
    { }

    //社區志願者
    class Volunteer : Nightingale
    { }

    //簡單南丁格爾工廠
    class SimpleFactory
    {
        public static Nightingale CreateNightingale(string type)
        {
            Nightingale result = null;
            switch (type)
            {
                case "學南丁格爾的大學生":
                    result = new Undergraduate();
                    break;
                case "社區志願者":
                    result = new Volunteer();
                    break;

            }
            return result;
        }
    }

    //南丁格爾工廠
    interface IFactory
    {
        Nightingale CreateNightingale();
    }

    //學南丁格爾的大學生工廠
    class UndergraduateFactory : IFactory
    {
        public Nightingale CreateNightingale()
        {
            return new Undergraduate();
        }
    }

    //社區志願者工廠
    class VolunteerFactory : IFactory
    {
        public Nightingale CreateNightingale()
        {
            return new Volunteer();
        }
    }

}
