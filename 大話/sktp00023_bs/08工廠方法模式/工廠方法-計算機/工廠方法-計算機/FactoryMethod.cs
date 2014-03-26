using System;
using System.Collections.Generic;
using System.Text;

namespace 工廠方法_計算器
{

    /// <summary>
    /// 運算類別
    /// </summary>
    class Operation
    {
        private double _numberA = 0;
        private double _numberB = 0;

        public double NumberA
        {
            get { return _numberA; }
            set { _numberA = value; }
        }

        public double NumberB
        {
            get { return _numberB; }
            set { _numberB = value; }
        }

        /// <summary>
        /// 得到運算結果
        /// </summary>
        /// <returns></returns>
        public virtual double GetResult()
        {
            double result = 0;
            return result;
        }
    }

    /// <summary>
    /// 加法類別
    /// </summary>
    class OperationAdd : Operation
    {
        public override double GetResult()
        {
            double result = 0;
            result = NumberA + NumberB;
            return result;
        }
    }

    /// <summary>
    /// 減法類別
    /// </summary>
    class OperationSub : Operation
    {
        public override double GetResult()
        {
            double result = 0;
            result = NumberA - NumberB;
            return result;
        }
    }
    /// <summary>
    /// 乘法類別
    /// </summary>
    class OperationMul : Operation
    {
        public override double GetResult()
        {
            double result = 0;
            result = NumberA * NumberB;
            return result;
        }
    }
    /// <summary>
    /// 除法類別
    /// </summary>
    class OperationDiv : Operation
    {
        public override double GetResult()
        {
            double result = 0;
            if (NumberB == 0)
                throw new Exception("除數不能為0。");
            result = NumberA / NumberB;
            return result;
        }
    }

    /// <summary>
    /// 工廠方法
    /// </summary>
    interface IFactory
    {
        Operation CreateOperation();
    }

    /// <summary>
    /// 專門負責生產“+”的工廠
    /// </summary>
    class AddFactory : IFactory
    {
        public Operation CreateOperation()
        {
            return new OperationAdd();
        }
    }

    /// <summary>
    /// 專門負責生產“-”的工廠
    /// </summary>
    class SubFactory : IFactory
    {
        public Operation CreateOperation()
        {
            return new OperationSub();
        }
    }

    /// <summary>
    /// 專門負責生產“*”的工廠
    /// </summary>
    class MulFactory : IFactory
    {
        public Operation CreateOperation()
        {
            return new OperationMul();
        }
    }

    /// <summary>
    /// 專門負責生產“/”的工廠
    /// </summary>
    class DivFactory : IFactory
    {
        public Operation CreateOperation()
        {
            return new OperationDiv();
        }
    }

}
