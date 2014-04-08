#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example4 {

///
/// <summary> * 定义职责对象的接口 </summary>
///
class Handler {
    ///
    ///  <summary> * 持有下一个处理请求的对象 </summary>
    ///
protected:
    Handler *successor;
    ///
    ///  <summary> * 设置下一个处理请求的对象 </summary>
    ///  * <param name="successor"> 下一个处理请求的对象 </param>
    ///
public:
    virtual void setSuccessor(Handler *successor);
    ///
    ///  <summary> * 处理聚餐费用的申请 </summary>
    ///  * <param name="user"> 申请人 </param>
    ///  * <param name="fee"> 申请的钱数 </param>
    ///  * <returns> 成功或失败的具体通知 </returns>
    ///
    virtual std::string handleFeeRequest(std::string user, double fee) = 0;
    ///
    ///  <summary> * 处理预支差旅费用的申请 </summary>
    ///  * <param name="user"> 申请人 </param>
    ///  * <param name="requestFee"> 申请的钱数 </param>
    ///  * <returns> 是否同意 </returns>
    ///
    virtual bool handlePreFeeRequest(std::string user, double requestFee) = 0;
};

}
}
}
}
}