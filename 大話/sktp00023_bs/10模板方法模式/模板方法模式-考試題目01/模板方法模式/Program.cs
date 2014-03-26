using System;
using System.Collections.Generic;
using System.Text;

namespace 範本方法模式
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("學生甲抄的試卷：");
            TestPaperA studentA = new TestPaperA();
            studentA.TestQuestion1();
            studentA.TestQuestion2();
            studentA.TestQuestion3();

            Console.WriteLine("學生乙抄的試卷：");
            TestPaperB studentB = new TestPaperB();
            studentB.TestQuestion1();
            studentB.TestQuestion2();
            studentB.TestQuestion3();

            Console.Read();
        }
    }

    //學生甲抄的試卷
    class TestPaperA
    {
        //試題1
        public void TestQuestion1()
        {
            Console.WriteLine(" 楊過得到，後來給了郭靖，煉成倚天劍、屠龍刀的玄鐵可能是[ ] a.球磨鑄鐵 b.馬口鐵 c.高速合金鋼 d.碳素纖維 ");
            Console.WriteLine("答案：b");
        }
        //試題2
        public void TestQuestion2()
        {
            Console.WriteLine(" 楊過、程英、陸無雙剷除了情花，造成[ ] a.使這種植物不再害人 b.使一種珍稀物種滅絕 c.破壞了那個生物圈的生態平衡 d.造成該地區沙漠化  ");
            Console.WriteLine("答案：a");
        }
        //試題3
        public void TestQuestion3()
        {
            Console.WriteLine(" 藍鳳凰的致使華山師徒、桃穀六仙嘔吐不止,如果你是大夫,會給他們開什麼藥[ ] a.阿司匹林 b.牛黃解毒片 c.氟呱酸 d.讓他們喝大量的生牛奶 e.以上全不對   ");
            Console.WriteLine("答案：c");
        }


    }

    //學生乙抄的試卷
    class TestPaperB
    {
        //試題1
        public void TestQuestion1()
        {
            Console.WriteLine(" 楊過得到，後來給了郭靖，煉成倚天劍、屠龍刀的玄鐵可能是[ ] a.球磨鑄鐵 b.馬口鐵 c.高速合金鋼 d.碳素纖維 ");
            Console.WriteLine("答案：d");
        }
        //試題2
        public void TestQuestion2()
        {
            Console.WriteLine(" 楊過、程英、陸無雙剷除了情花，造成[ ] a.使這種植物不再害人 b.使一種珍稀物種滅絕 c.破壞了那個生物圈的生態平衡 d.造成該地區沙漠化  ");
            Console.WriteLine("答案：b");
        }
        //試題3
        public void TestQuestion3()
        {
            Console.WriteLine(" 藍鳳凰的致使華山師徒、桃穀六仙嘔吐不止,如果你是大夫,會給他們開什麼藥[ ] a.阿司匹林 b.牛黃解毒片 c.氟呱酸 d.讓他們喝大量的生牛奶 e.以上全不對   ");
            Console.WriteLine("答案：a");
        }

    }
}
