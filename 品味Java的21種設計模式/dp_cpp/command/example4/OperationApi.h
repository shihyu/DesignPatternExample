#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example4 {
///
/// <summary> * 操作运算的接口 </summary>
///
class OperationApi {
    ///
    ///  <summary> * 获取计算完成后的结果 </summary>
    ///  * <returns> 计算完成后的结果 </returns>
    ///
public:
    virtual public int getResult() = 0;
    ///
    ///  <summary> * 设置计算开始的初始值 </summary>
    ///  * <param name="result"> 计算开始的初始值 </param>
    ///
    virtual public void setResult(int) = 0;
    ///
    ///  <summary> * 执行加法 </summary>
    ///  * <param name="num"> 需要加的数 </param>
    ///
    virtual public void add(int) = 0;
    ///
    ///  <summary> * 执行减法 </summary>
    ///  * <param name="num"> 需要减的数 </param>
    ///
    virtual public void substract(int) = 0;
};

}
}
}
}
}