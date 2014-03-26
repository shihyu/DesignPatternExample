using System;
using System.Collections.Generic;
using System.Text;

namespace 範本方法模式
{
    class Program
    {
        static void Main(string[] args)
        {
            AbstractClass c;

            c = new ConcreteClassA();
            c.TemplateMethod();

            c = new ConcreteClassB();
            c.TemplateMethod();

            Console.Read();

        }
    }

    abstract class AbstractClass
    {
        public abstract void PrimitiveOperation1();
        public abstract void PrimitiveOperation2();

        public void TemplateMethod()
        {
            PrimitiveOperation1();
            PrimitiveOperation2();
            Console.WriteLine("");
        }
    }

    class ConcreteClassA : AbstractClass
    {
        public override void PrimitiveOperation1()
        {
            Console.WriteLine("具體類A方法1實現");
        }
        public override void PrimitiveOperation2()
        {
            Console.WriteLine("具體類A方法2實現");
        }
    }

    class ConcreteClassB : AbstractClass
    {
        public override void PrimitiveOperation1()
        {
            Console.WriteLine("具體類B方法1實現");
        }
        public override void PrimitiveOperation2()
        {
            Console.WriteLine("具體類B方法2實現");
        }
    }

}
