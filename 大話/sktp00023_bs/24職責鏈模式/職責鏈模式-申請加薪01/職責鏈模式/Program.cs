using System;
using System.Collections.Generic;
using System.Text;

namespace 職責鏈模式
{
    enum ManagerLevel { 經理,總監,總經理}

    class Program
    {
        static void Main(string[] args)
        {

            Manager jinli = new Manager("金利");
            Manager zongjian = new Manager("宗劍");
            Manager zhongjingli = new Manager("鐘精勵");

            Request request = new Request();
            request.RequestType = "加薪";
            request.RequestContent = "小菜請求加薪";
            request.Number = 1000;

            jinli.GetResult(ManagerLevel.經理, request);
            zongjian.GetResult(ManagerLevel.總監, request);
            zhongjingli.GetResult(ManagerLevel.總經理, request);

            Request request2 = new Request();
            request2.RequestType = "請假";
            request2.RequestContent = "小菜請假";
            request2.Number = 3;

            jinli.GetResult(ManagerLevel.經理, request2);
            zongjian.GetResult(ManagerLevel.總監, request2);
            zhongjingli.GetResult(ManagerLevel.總經理, request2);

            Console.Read();


        }
    }

    
    //管理者
    class Manager
    {
        
        protected string name;

        public Manager(string name)
        {
            this.name = name;
        }

        //得到結果
        public void GetResult(ManagerLevel managerLevel, Request request)
        {
            if (managerLevel == ManagerLevel.經理)
            {
                if (request.RequestType == "請假" && request.Number <= 2)
                {
                    Console.WriteLine("{0}:{1} 數量{2} 被批准", name, request.RequestContent, request.Number);
                }
                else
                {
                    Console.WriteLine("{0}:{1} 數量{2} 我無權處理", name, request.RequestContent, request.Number);
                }

            }
            else if (managerLevel == ManagerLevel.總監)
            {
                if (request.RequestType == "請假" && request.Number <= 5)
                {
                    Console.WriteLine("{0}:{1} 數量{2} 被批准", name, request.RequestContent, request.Number);
                }
                else
                {
                    Console.WriteLine("{0}:{1} 數量{2} 我無權處理", name, request.RequestContent, request.Number);
                }
            }
            else if (managerLevel == ManagerLevel.總經理)
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
