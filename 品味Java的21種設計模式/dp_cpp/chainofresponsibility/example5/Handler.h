#pragma once

#include "RequestModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example5 {
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
    ///  <summary> * 通用的请求处理方法 </summary>
    ///  * <param name="rm"> 通用的请求对象 </param>
    ///  * <returns> 处理后需要返回的对象 </returns>
    ///
    virtual object *handleRequest(RequestModel *rm);
};

}
}
}
}
}