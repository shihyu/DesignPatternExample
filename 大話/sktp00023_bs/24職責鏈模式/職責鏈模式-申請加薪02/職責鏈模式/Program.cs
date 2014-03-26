using System;
using System.Collections.Generic;
using System.Text;

namespace 職責鏈模式
{
    class Program
    {
        static void Main(string[] args)
        {

            CommonManager jinli = new CommonManager("金利");
            Majordomo zongjian = new Majordomo("宗劍");
            GeneralManager zhongjingli = new GeneralManager("鐘精勵");
            jinli.SetSuperior(zongjian);
            zongjian.SetSuperior(zhongjingli);

            Request request = new Request();
            request.RequestType = "請假";
            request.RequestContent = "小菜請假";
            request.Number = 1;
            jinli.RequestApplications(request);

            Request request2 = new Request();
            request2.RequestType = "請假";
            request2.RequestContent = "小菜請假";
            request2.Number = 4;
            jinli.RequestApplications(request2);

            Request request3 = new Request();
            request3.RequestType = "加薪";
            request3.RequestContent = "小菜請求加薪";
            request3.Number = 500;
            jinli.RequestApplications(request3);

            Request request4 = new Request();
            request4.RequestType = "加薪";
            request4.RequestContent = "小菜請求加薪";
            request4.Number = 1000;
            jinli.RequestApplications(request4);

            Console.Read();

        }
    }

    //管理者
    abstract class Manager
    {
        protected string name;
        //管理者的上級
        protected Manager superior;

        public Manager(string name)
        {
            this.name = name;
        }

        //設置管理者的上級
        public void SetSuperior(Manager superior)
        {
            this.superior = superior;
        }

        //申請請求
        abstract public void RequestApplications(Request request);
    }

    //經理
    class CommonManager : Manager
    {
        public CommonManager(string name)
            : base(name)
        { }
        public override void RequestApplications(Request request)
        {

            if (request.RequestType == "請假" && request.Number <= 2)
            {
                Console.WriteLine("{0}:{1} 數量{2} 被批准", name, request.RequestContent, request.Number);
            }
            else
            {
                if (superior != null)
                    superior.RequestApplications(request);
            }

        }
    }

    //總監
    class Majordomo : Manager
    {
        public Majordomo(string name)
            : base(name)
        { }
        public override void RequestApplications(Request request)
        {

            if (request.RequestType == "請假" && request.Number <= 5)
            {
                Console.WriteLine("{0}:{1} 數量{2} 被批准", name, request.RequestContent, request.Number);
            }
            else
            {
                if (superior != null)
                    superior.RequestApplications(request);
            }

        }
    }

    //總經理
    class GeneralManager : Manager
    {
        public GeneralManager(string name)
            : base(name)
        { }
        public override void RequestApplications(Request request)
        {

            if (request.RequestType == "請假")
            {
                Console.WriteLine("{0}:{1} 數量{2} 被批准", name, request.RequestContent, request.Number);
            }
            else if (request.RequestType == "加薪" && request.Number <= 500)
            {
                Console.WriteLine("{0}:{1} 數量{2} 被批准", name, request.RequestContent, request.Number);
            }
            else if (request.RequestType == "加薪" && request.Number > 500)
            {
                Console.WriteLine("{0}:{1} 數量{2} 再說吧", name, request.RequestContent, request.Number);
            }
        }
    }

    //申請
    class Request
    {
        //申請類別
        private string requestType;
        public string RequestType
        {
            get { return requestType; }
            set { requestType = value; }
        }

        //申請內容
        private string requestContent;
        public string RequestContent
        {
            get { return requestContent; }
            set { requestContent = value; }
        }

        //數量
        private int number;
        public int Number
        {
            get { return number; }
            set { number = value; }
        }
    }


}
