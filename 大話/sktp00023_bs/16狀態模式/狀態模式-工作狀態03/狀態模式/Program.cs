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


    //抽象狀態
    public abstract class State
    {
        public abstract void WriteProgram(Work w);
    }

    //上午工作狀態
    public class ForenoonState : State
    {
        public override void WriteProgram(Work w)
        {
            if (w.Hour < 12)
            {
                Console.WriteLine("當前時間：{0}點 上午工作，精神百倍", w.Hour);
            }
            else
            {
                w.SetState(new NoonState());
                w.WriteProgram();
            }
        }
    }

    //中午工作狀態
    public class NoonState : State
    {
        public override void WriteProgram(Work w)
        {
            if (w.Hour < 13)
            {
                Console.WriteLine("當前時間：{0}點 餓了，午飯；犯困，午休。", w.Hour);
            }
            else
            {
                w.SetState(new AfternoonState());
                w.WriteProgram();
            }
        }
    }

    //下午工作狀態
    public class AfternoonState : State
    {
        public override void WriteProgram(Work w)
        {
            if (w.Hour < 17)
            {
                Console.WriteLine("當前時間：{0}點 下午狀態還不錯，繼續努力", w.Hour);
            }
            else
            {
                w.SetState(new EveningState());
                w.WriteProgram();
            }
        }
    }

    //晚間工作狀態
    public class EveningState : State
    {
        public override void WriteProgram(Work w)
        {
            if (w.TaskFinished)
            {
                w.SetState(new RestState());
                w.WriteProgram();
            }
            else
            {
                if (w.Hour < 21)
                {
                    Console.WriteLine("當前時間：{0}點 加班哦，疲累之極", w.Hour);
                }
                else
                {
                    w.SetState(new SleepingState());
                    w.WriteProgram();
                }
            }
        }
    }

    //睡眠狀態
    public class SleepingState : State
    {
        public override void WriteProgram(Work w)
        {
            Console.WriteLine("當前時間：{0}點 不行了，睡著了。", w.Hour);
        }
    }

    //下班休息狀態
    public class RestState : State
    {
        public override void WriteProgram(Work w)
        {
            Console.WriteLine("當前時間：{0}點 下班回家了", w.Hour);
        }
    }

    //工作
    public class Work
    {
        private State current;
        public Work()
        {
            current = new ForenoonState();
        }

        private double hour;
        public double Hour
        {
            get { return hour; }
            set { hour = value; }
        }

        private bool finish = false;
        public bool TaskFinished
        {
            get { return finish; }
            set { finish = value; }
        }


        public void SetState(State s)
        {
            current = s;
        }

        public void WriteProgram()
        {
            current.WriteProgram(this);
        }
    }

}
