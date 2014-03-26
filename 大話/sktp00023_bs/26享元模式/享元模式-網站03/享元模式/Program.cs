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
            fx.Use(new User("小菜"));

            WebSite fy = f.GetWebSiteCategory("產品展示");
            fy.Use(new User("大鳥"));

            WebSite fz = f.GetWebSiteCategory("產品展示");
            fz.Use(new User("嬌嬌"));

            WebSite fl = f.GetWebSiteCategory("部落格");
            fl.Use(new User("老頑童"));

            WebSite fm = f.GetWebSiteCategory("部落格");
            fm.Use(new User("桃谷六仙"));

            WebSite fn = f.GetWebSiteCategory("部落格");
            fn.Use(new User("南海鱷神"));

            Console.WriteLine("得到網站分類總數為 {0}", f.GetWebSiteCount());

            //string titleA = "大話設計模式";
            //string titleB = "大話設計模式";

            //Console.WriteLine(Object.ReferenceEquals(titleA, titleB));


            Console.Read();
        }
    }

    //用戶
    public class User
    {
        private string name;

        public User(string name)
        {
            this.name = name;
        }

        public string Name
        {
            get { return name; }
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
        public abstract void Use(User user);
    }

    //具體的網站
    class ConcreteWebSite : WebSite
    {
        private string name = "";
        public ConcreteWebSite(string name)
        {
            this.name = name;
        }

        public override void Use(User user)
        {
            Console.WriteLine("網站分類：" + name + " 用戶：" + user.Name);
        }
    }

}
