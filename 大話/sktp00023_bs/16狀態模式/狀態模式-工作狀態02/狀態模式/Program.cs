using System;
using System.Collections.Generic;
using System.Text;

namespace 狀態模式
{
    class Program
    {
        static void Main(string[] args)
        {
            //緊急專案
            Work emergencyProjects = new Work();
            emergencyProjects.Hour = 9;
            emergencyProjects.WriteProgram();
            emergencyProjects.Hour = 10;
            emergencyProjects.WriteProgram();
            emergencyProjects.Hour = 12;
            emergencyProjects.WriteProgram();
            emergencyProjects.Hour = 13;
            emergencyProjects.WriteProgram();
            emergencyProjects.Hour = 14;
            emergencyProjects.WriteProgram();
            emergencyProjects.Hour = 17;

            //emergencyProjects.WorkFinished = true;
            emergencyProjects.TaskFinished = false;

            emergencyProjects.WriteProgram();
            emergencyProjects.Hour = 19;
            emergencyProjects.WriteProgram();
            emergencyProjects.Hour = 22;
            emergencyProjects.WriteProgram();

            Console.Read();
        }
    }

    //工作
    public class Work
    {
        //鐘點
        private int hour;
        public int Hour
        {
            get { return hour; }
            set { hour = value; }
        }

        //任務完成
        private bool finish = false;
        public bool TaskFinished
        {
            get { return finish; }
            set { finish = value; }
        }


        public void WriteProgram()
        {
            if (hour < 12)
            {
                Console.WriteLine("當前時間：{0}點 上午工作，精神百倍", hour);
            }
            else if (hour < 13)
            {
                Console.WriteLine("當前時間：{0}點 餓了，午飯；犯困，午休。", hour);
            }
            else if (hour < 17)
            {
                Console.WriteLine("當前時間：{0}點 下午狀態還不錯，繼續努力", hour);
            }
            else
            {
                if (finish)
                {
                    Console.WriteLine("當前時間：{0}點 下班回家了", hour);
                }
                else
                {
                    if (hour < 21)
                    {
                        Console.WriteLine("當前時間：{0}點 加班哦，疲累之極", hour);
                    }
                    else
                    {
                        Console.WriteLine("當前時間：{0}點 不行了，睡著了。", hour);
                    }
                }
            }
        }
    }

}
