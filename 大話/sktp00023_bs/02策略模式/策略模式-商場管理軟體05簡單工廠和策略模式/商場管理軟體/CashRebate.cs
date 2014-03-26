using System;
using System.Collections.Generic;
using System.Text;

namespace 商場管理軟體
{
    //打折收費，繼承CashSuper
    class CashRebate : CashSuper
    {
        private double moneyRebate = 1d;
        //初始化時，必需要輸入折扣率,如八折，就是0.8
        public CashRebate(string moneyRebate)
        {
            this.moneyRebate = double.Parse(moneyRebate);
        }

        public override double acceptCash(double money)
        {
            return money * moneyRebate;
        }
    }
}
