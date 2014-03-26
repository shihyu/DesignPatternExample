using System;
using System.Collections.Generic;
using System.Text;

namespace 橋接模式
{
    class Program
    {
        static void Main(string[] args)
        {
            HandsetBrand ab;
            ab = new HandsetBrandN();

            ab.SetHandsetSoft(new HandsetGame());
            ab.Run();

            ab.SetHandsetSoft(new HandsetAddressList());
            ab.Run();

            ab = new HandsetBrandM();

            ab.SetHandsetSoft(new HandsetGame());
            ab.Run();

            ab.SetHandsetSoft(new HandsetAddressList());
            ab.Run();

            Console.Read();
        }
    }

    //手機品牌
    abstract class HandsetBrand
    {
        protected HandsetSoft soft;

        //設置手機軟體
        public void SetHandsetSoft(HandsetSoft soft)
        {
            this.soft = soft;
        }
        //運行
        public abstract void Run();
        

    }

    //手機品牌N
    class HandsetBrandN : HandsetBrand
    {
        public override void Run()
        {
            soft.Run();
        }
    }

    //手機品牌M
    class HandsetBrandM : HandsetBrand
    {
        public override void Run()
        {
            soft.Run();
        }
    }

    //手機品牌S
    class HandsetBrandS : HandsetBrand
    {
        public override void Run()
        {
            soft.Run();
        }
    }


    //手機軟體
    abstract class HandsetSoft
    {

        public abstract void Run();
    }

    //手機遊戲
    class HandsetGame : HandsetSoft
    {
        public override void Run()
        {
            Console.WriteLine("運行手機遊戲");
        }
    }

    //手機通訊錄
    class HandsetAddressList : HandsetSoft
    {
        public override void Run()
        {
            Console.WriteLine("運行手機通訊錄");
        }
    }

    //手機MP3播放
    class HandsetMP3 : HandsetSoft
    {
        public override void Run()
        {
            Console.WriteLine("運行手機MP3播放");
        }
    }

}
