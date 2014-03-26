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
            ab = new HandsetBrandMAddressList();
            ab.Run();

            ab = new HandsetBrandMGame();
            ab.Run();

            ab = new HandsetBrandNAddressList();
            ab.Run();

            ab = new HandsetBrandNGame();
            ab.Run();

            Console.Read();
        }
    }

    //手機品牌
    class HandsetBrand
    {
        public virtual void Run()
        {
        }
    }
    //手機品牌M
    class HandsetBrandM : HandsetBrand
    {

    }
    //手機品牌N
    class HandsetBrandN : HandsetBrand
    {

    }
    //手機品牌M的遊戲
    class HandsetBrandMGame : HandsetBrandM
    {
        public override void Run()
        {
            Console.WriteLine("運行M品牌手機遊戲");
        }
    }
    //手機品牌N的遊戲
    class HandsetBrandNGame : HandsetBrandN
    {
        public override void Run()
        {
            Console.WriteLine("運行N品牌手機遊戲");
        }
    }
    //手機品牌M的通訊錄
    class HandsetBrandMAddressList : HandsetBrandM
    {
        public override void Run()
        {
            Console.WriteLine("運行M品牌手機通訊錄");
        }
    }
    //手機品牌N的通訊錄
    class HandsetBrandNAddressList : HandsetBrandN
    {
        public override void Run()
        {
            Console.WriteLine("運行N品牌手機通訊錄");
        }
    }

}
