using System;
using System.Collections.Generic;
using System.Text;

namespace 商場管理軟體
{
    //現金收取工廠
class CashContext
{
    CashSuper cs = null;

    //根據條件返回相應的物件
    public CashContext(string type)
    {
        switch (type)
        {
            case "正常收費":
                CashNormal cs0 = new CashNormal();
                cs = cs0;
                break;
            case "滿300送100":
                CashReturn cr1 = new CashReturn("300", "100");
                cs = cr1;
                break;
            case "打8折":
                CashRebate cr2 = new CashRebate("0.8");
                cs = cr2;
                break;
        }
    }

    public double GetResult(double money)
    {
        return cs.acceptCash(money);
    }
}
}
