using System;
using System.Collections.Generic;
using System.Text;

namespace 命令模式
{
    class Program
    {
        static void Main(string[] args)
        {
            //開店前的準備
            Barbecuer boy = new Barbecuer();
            Command bakeMuttonCommand1 = new BakeMuttonCommand(boy);
            Command bakeMuttonCommand2 = new BakeMuttonCommand(boy);
            Command bakeChickenWingCommand1 = new BakeChickenWingCommand(boy);
            Waiter girl = new Waiter();

            //開門營業 顧客點菜
            girl.SetOrder(bakeMuttonCommand1);
            girl.SetOrder(bakeMuttonCommand2);
            girl.SetOrder(bakeChickenWingCommand1);

            //點菜完閉，通知廚房
            girl.Notify();

            Console.Read();

        }
    }

    //服務生
    public class Waiter
    {
        private IList<Command> orders = new List<Command>();

        //設置訂單
        public void SetOrder(Command command)
        {
            if (command.ToString() == "命令模式.BakeChickenWingCommand")
            {
                Console.WriteLine("服務生：雞翅沒有了，請點別的燒烤。");
            }
            else
            {
                orders.Add(command);
                Console.WriteLine("增加訂單：" + command.ToString() + "  時間：" + DateTime.Now.ToString());
            }
        }

        //取消訂單
        public void CancelOrder(Command command)
        {
            orders.Remove(command);
            Console.WriteLine("取消訂單：" + command.ToString() + "  時間：" + DateTime.Now.ToString());
        }

        //通知全部執行
        public void Notify()
        {
            foreach (Command cmd in orders)
            {
                cmd.ExcuteCommand();
            }
        }
    }

    //抽象命令
    public abstract class Command
    {
        protected Barbecuer receiver;

        public Command(Barbecuer receiver)
        {
            this.receiver = receiver;
        }

        //執行命令
        abstract public void ExcuteCommand();
    }

    //烤羊肉串命令
    class BakeMuttonCommand : Command
    {
        public BakeMuttonCommand(Barbecuer receiver)
            : base(receiver)
        { }

        public override void ExcuteCommand()
        {
            receiver.BakeMutton();
        }
    }

    //烤雞翅命令
    class BakeChickenWingCommand : Command
    {
        public BakeChickenWingCommand(Barbecuer receiver)
            : base(receiver)
        { }

        public override void ExcuteCommand()
        {
            receiver.BakeChickenWing();
        }
    }

    //烤肉串者
    public class Barbecuer
    {
        public void BakeMutton()
        {
            Console.WriteLine("烤羊肉串!");
        }

        public void BakeChickenWing()
        {
            Console.WriteLine("烤雞翅!");
        }
    }

}
