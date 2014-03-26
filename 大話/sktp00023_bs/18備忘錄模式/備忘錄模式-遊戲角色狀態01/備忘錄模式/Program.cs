using System;
using System.Collections.Generic;
using System.Text;

namespace 備忘錄模式
{
    class Program
    {
        static void Main(string[] args)
        {
            //大戰Boss前
            GameRole lixiaoyao = new GameRole();
            lixiaoyao.GetInitState();
            lixiaoyao.StateDisplay();

            //保存進度
            GameRole backup = new GameRole();
            backup.Vitality = lixiaoyao.Vitality;
            backup.Attack = lixiaoyao.Attack;
            backup.Defense = lixiaoyao.Defense;

            //大戰Boss時，損耗嚴重
            lixiaoyao.Fight();
            lixiaoyao.StateDisplay();

            //恢復之前狀態
            lixiaoyao.Vitality = backup.Vitality;
            lixiaoyao.Attack = backup.Attack;
            lixiaoyao.Defense = backup.Defense;

            lixiaoyao.StateDisplay();

            Console.Read();

        }
    }

    class GameRole
    {
        //生命力
        private int vit;
        public int Vitality
        {
            get { return vit; }
            set { vit = value; }
        }

        //攻擊力
        private int atk;
        public int Attack
        {
            get { return atk; }
            set { atk = value; }
        }

        //防禦力
        private int def;
        public int Defense
        {
            get { return def; }
            set { def = value; }
        }

        //狀態顯示
        public void StateDisplay()
        {
            Console.WriteLine("角色當前狀態：");
            Console.WriteLine("體力：{0}", this.vit);
            Console.WriteLine("攻擊力：{0}", this.atk);
            Console.WriteLine("防禦力：{0}", this.def);
            Console.WriteLine("");
        }

        //獲得初始狀態
        public void GetInitState()
        {
            this.vit = 100;
            this.atk = 100;
            this.def = 100;
        }

        //戰鬥
        public void Fight()
        {
            this.vit = 0;
            this.atk = 0;
            this.def = 0;
        }
    }

}
