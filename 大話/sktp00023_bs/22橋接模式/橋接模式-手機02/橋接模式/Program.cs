using System;
using System.Collections.Generic;
using System.Text;

namespace 橋接模式
{
    class Program
    {
        static void Main(string[] args)
        {
            HandsetSoft ab;
            ab = new HandsetBrandMGame();
            ab.Run();

            ab = new HandsetBrandNGame();
            ab.Run();

            ab = new HandsetBrandMAddressList();
            ab.Run();

            ab = new HandsetBrandNAddressList();
            ab.Run();

            Console.Read();
        }
    }

    //手機軟體
    class HandsetSoft
    {
        public virtual void Run()
        {
        }
    }
    //通訊錄
    class HandsetAddressList : HandsetSoft
    {

    }
    //遊戲
    class HandsetGame : HandsetSoft
    {

    }
    //手機品牌M的遊戲
    class HandsetBrandMGame : HandsetGame
    {
        public override void Run()
        {
            Console.WriteLine("運行M品牌手機遊戲");
        }
    }
    //手機品牌N的遊戲
    class HandsetBrandNGame : HandsetGame
    {
        public override void Run()
        {
            Console.WriteLine("運行N品牌手機遊戲");
        }
    }
    //手機品牌M的通訊錄
    class HandsetBrandMAddressList : HandsetAddressList
    {
        public override void Run()
        {
            Console.WriteLine("運行M品牌手機通訊錄");
        }
    }
    //手機品牌N的通訊錄
    class HandsetBrandNAddressList : HandsetAddressList
    {
        public override void Run()
        {
            Console.WriteLine("運行N品牌手機通訊錄");
        }
    }

}
