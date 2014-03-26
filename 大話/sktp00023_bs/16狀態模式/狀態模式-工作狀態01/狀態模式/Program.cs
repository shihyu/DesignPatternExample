using System;
using System.Collections.Generic;
using System.Text;

namespace 狀態模式
{
    class Program
    {
        static int Hour = 0;
        static bool WorkFinished = false;

        static void Main(string[] args)
        {

            Hour = 9;
            WriteProgram();
            Hour = 10;
            WriteProgram();
            Hour = 12;
            WriteProgram();
            Hour = 13;
            WriteProgram();
            Hour = 14;
            WriteProgram();
            Hour = 17;

            WorkFinished = true;
            //WorkFinished = false;

            WriteProgram();
            Hour = 19;
            WriteProgram();
            Hour = 22;
            WriteProgram();

            Console.Read();
        }

        public static void WriteProgram()
        {
            if (Hour < 12)
            {
                Console.WriteLine("當前時間：{0}點 上午工作，精神百倍", Hour);
            }
            else if (Hour < 13)
            {
                Console.WriteLine("當前時間：{0}點 餓了，午飯；犯困，午休。", Hour);
            }
            else if (Hour < 17)
            {
                Console.WriteLine("當前時間：{0}點 下午狀態還不錯，繼續努力", Hour);
            }
            else
            {
                if (WorkFinished)
                {
                    Console.WriteLine("當前時間：{0}點 下班回家了", Hour);
                }
                else
                {
                    if (Hour < 21)
                    {
                        Console.WriteLine("當前時間：{0}點 加班哦，疲累之極", Hour);
                    }
                    else
                    {
                        Console.WriteLine("當前時間：{0}點 不行了，睡著了。", Hour);
                    }
                }
            }
        }
    }
}
