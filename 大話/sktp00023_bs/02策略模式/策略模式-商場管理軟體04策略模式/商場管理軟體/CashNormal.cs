using System;
using System.Collections.Generic;
using System.Text;

namespace 商場管理軟體
{
    class CashNormal : CashSuper
    {
        public override double acceptCash(double money)
        {
            return money;
        } 
    }
}
