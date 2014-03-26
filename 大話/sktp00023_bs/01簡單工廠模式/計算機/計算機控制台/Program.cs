using System;
using System.Collections.Generic;
using System.Text;
using OperationLibrary;

namespace 計算機控制臺
{

    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                Console.Write("請輸入數字A：");
                string strNumberA = Console.ReadLine();
                Console.Write("請選擇運算符號(+、-、*、/)：");
                string strOperate = Console.ReadLine();
                Console.Write("請輸入數字B：");
                string strNumberB = Console.ReadLine();
                string strResult = "";

                Operation oper;
                oper = OperationFactory.createOperate(strOperate);
                oper.NumberA = Convert.ToDouble(strNumberA);
                oper.NumberB = Convert.ToDouble(strNumberB);
                strResult = oper.GetResult().ToString();

                Console.WriteLine("結果是：" + strResult);

                Console.ReadLine();


            }
            catch (Exception ex)
            {
                Console.WriteLine("您的輸入有錯：" + ex.Message);
            }
        }
    }

 

}

