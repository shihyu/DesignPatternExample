using System;
using System.Collections.Generic;
using System.Text;

namespace 商場管理軟體
{
    //收費策略Context
class CashContext
{
    //宣告一個現金收費父類別物件
    private CashSuper cs;

    //設定策略行為，參數為具體的現金收費子類別（正常，打折或紅利）
    public CashContext(CashSuper csuper)
    {
        this.cs = csuper;
    }

    //得到現金促銷計算結果（利用了多型機制，不同的策略行為導致不同的結果）
    public double GetResult(double money)
    {
        return cs.acceptCash(money);
    }
}
}
