using System;
using System.Collections.Generic;
using System.Text;

namespace 策略模式
{
    class Program
    {
        static void Main(string[] args)
        {
            Context context;

            context = new Context(new ConcreteStrategyA());
            context.ContextInterface();

            context = new Context(new ConcreteStrategyB());
            context.ContextInterface();

            context = new Context(new ConcreteStrategyC());
            context.ContextInterface();

            Console.Read();
        }
    }

    //抽象演算法類
    abstract class Strategy
    {
        //演算法方法
        public abstract void AlgorithmInterface();
    }
    //具體演算法A
    class ConcreteStrategyA : Strategy
    {
        //演算法A實現方法
        public override void AlgorithmInterface()
        {
            Console.WriteLine("演算法A實現");
        }
    }
    //具體演算法B
    class ConcreteStrategyB : Strategy
    {
        //演算法B實現方法
        public override void AlgorithmInterface()
        {
            Console.WriteLine("演算法B實現");
        }
    }
    //具體演算法C
    class ConcreteStrategyC : Strategy
    {
        //演算法C實現方法
        public override void AlgorithmInterface()
        {
            Console.WriteLine("演算法C實現");
        }
    }
    class Context
    {
        Strategy strategy;

        public Context(Strategy strategy)
        {
            this.strategy = strategy;
        }
        public void ContextInterface()
        {
            strategy.AlgorithmInterface();
        }
    }

}
