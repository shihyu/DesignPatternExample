using System;
using System.Collections.Generic;
using System.Text;

namespace 商場管理軟體
{
    //紅利收費，繼承CashSuper
    class CashReturn : CashSuper
    {
        private double moneyCondition = 0.0d;
        private double moneyReturn = 0.0d;
        //初始化時必須要輸入紅利條件和紅利值，比如滿300送100，則moneyCondition為300，moneyReturn為100
        public CashReturn(string moneyCondition, string moneyReturn)
        {
            this.moneyCondition = double.Parse(moneyCondition);
            this.moneyReturn = double.Parse(moneyReturn);
        }

        public override double acceptCash(double money)
        {
            double result = money;
            //若大於紅利條件，則需要減去紅利值
            if (money >= moneyCondition)
                result = money - Math.Floor(money / moneyCondition) * moneyReturn;

            return result;
        }
    }
}
