using System;
using System.Collections.Generic;
using System.Text;

namespace 商場管理軟體
{
//現金收取父類別
abstract class CashSuper
{
    //抽象方法：收取現金，參數為原價，返回為當前價
    public abstract double acceptCash(double money);
}

}
