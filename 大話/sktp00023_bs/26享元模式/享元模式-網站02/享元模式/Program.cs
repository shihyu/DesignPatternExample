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

            WebSiteFactory f = new WebSiteFactory();

            WebSite fx = f.GetWebSiteCategory("產品展示");
            fx.Use();

            WebSite fy = f.GetWebSiteCategory("產品展示");
            fy.Use();

            WebSite fz = f.GetWebSiteCategory("產品展示");
            fz.Use();

            WebSite fl = f.GetWebSiteCategory("部落格");
            fl.Use();

            WebSite fm = f.GetWebSiteCategory("部落格");
            fm.Use();

            WebSite fn = f.GetWebSiteCategory("部落格");
            fn.Use();

            Console.WriteLine("網站分類總數為 {0}", f.GetWebSiteCount());

            Console.Read();
        }
    }

    //網站工廠
    class WebSiteFactory
    {
        private Hashtable flyweights = new Hashtable();

        //獲得網站分類
        public WebSite GetWebSiteCategory(string key)
        {
            if (!flyweights.ContainsKey(key))
                flyweights.Add(key, new ConcreteWebSite(key));
            return ((WebSite)flyweights[key]);
        }

        //獲得網站分類總數
        public int GetWebSiteCount()
        {
            return flyweights.Count;
        }
    }

    //網站
    abstract class WebSite
    {
        public abstract void Use();
    }

    //具體的網站
    class ConcreteWebSite : WebSite
    {
        private string name = "";
        public ConcreteWebSite(string name)
        {
            this.name = name;
        }

        public override void Use()
        {
            Console.WriteLine("網站分類：" + name);
        }
    }

}
