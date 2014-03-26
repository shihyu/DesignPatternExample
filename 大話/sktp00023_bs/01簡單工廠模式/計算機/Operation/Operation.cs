using System;
using System.Collections.Generic;
using System.Text;

namespace Operation
{
    /// <summary>
    /// 運算類別
    /// </summary>
    public class Operation
    {
        private double _numberA = 0;
        private double _numberB = 0;
        
        /// <summary>
        /// 數字A
        /// </summary>
        public double NumberA
        {
            get
            {
                return _numberA;
            }
            set
            {
                _numberA = value;
            }
        }

        /// <summary>
        /// 數字B
        /// </summary>
        public double NumberB
        {
            get
            {
                return _numberB;
            }
            set
            {
                _numberB = value;
            }
        }

        /// <summary>
        /// 得到運算結果
        /// </summary>
        /// <returns></returns>
        public virtual double getResult()
        {
            double result = 0; 
            return result;
        }

       
    }

    /// <summary>
    /// 加法類
    /// </summary>
    class OperationAdd : Operation
    {
        public override double getResult()
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
       public override double getResult()
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
        public override double getResult()
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
        public override double getResult()
        {
            double result = 0;
            if (NumberB==0)
                throw new Exception("除數不能為0。");
            result = NumberA / NumberB;
            return result;
        }
    }

    /// <summary>
    /// 平方類別
    /// </summary>
    class OperationSqr : Operation
    {
        public override double getResult()
        {
            double result = 0;
            result = NumberB * NumberB;
            return result;
        }
    }

    /// <summary>
    /// 平方根類別
    /// </summary>
    class OperationSqrt : Operation
    {
        public override double getResult()
        {
            double result = 0;
            if (NumberB < 0)
                throw new Exception("負數不能開平方根。");
            result = Math.Sqrt(NumberB);
            return result;
        }
    }

    /// <summary>
    /// 相反數類別
    /// </summary>
    class OperationReverse : Operation
    {
        public override double getResult()
        {
            double result = 0;
            result = -NumberB;
            return result;
        }
    }

    /// <summary>
    /// 運算類別工廠
    /// </summary>
    class OperationFactory
    {
        public static Operation createOperate(string operate)
        {
            Operation oper = null;
            switch (operate)
            {
                case "+":
                    {
                        oper = new OperationAdd();
                        break;
                    }
                case "-":
                    {
                        oper = new OperationSub();
                        break;
                    }
                case "*":
                    {
                        oper = new OperationMul();
                        break;
                    }
                case "/":
                    {
                        oper = new OperationDiv();
                        break;
                    }
                case "sqr":
                    {
                        oper = new OperationSqr();
                        break;
                    }
                case "sqrt":
                    {
                        oper = new OperationSqrt();
                        break;
                    }
                case "+/-":
                    {
                        oper = new OperationReverse();
                        break;
                    }
            }

            return oper;
        }
    }

}
