using System;
using System.Collections.Generic;
using System.Collections;
using System.Text;

namespace 享元模式
{
    class Program
    {
        static void Main(string[] args)
        {


            WebSite fx = new WebSite("產品展示");
            fx.Use();

            WebSite fy = new WebSite("產品展示");
            fy.Use();

            WebSite fz = new WebSite("產品展示");
            fz.Use();

            WebSite fl = new WebSite("部落格");
            fl.Use();

            WebSite fm = new WebSite("部落格");
            fm.Use();

            WebSite fn = new WebSite("部落格");
            fn.Use();


            Console.Read();
        }
    }

    //網站
    class WebSite
    {
        private string name = "";
        public WebSite(string name)
        {
            this.name = name;
        }

        public void Use()
        {
            Console.WriteLine("網站分類：" + name);
        }
    }

}
