using System;
using System.Collections.Generic;
using System.Text;

namespace 商場管理軟體
{
    //正常收費，繼承CashSuper
    class CashNormal : CashSuper
    {
        public override double acceptCash(double money)
        {
            return money;
        }
    }

}
