#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example5 {
///
/// <summary> * 通用的请求对象 </summary>
///
class RequestModel {
    ///
    ///  <summary> * 表示具体的业务类型 </summary>
    ///
private:
    std::string type;
    ///
    ///  <summary> * 通过构造方法把具体的业务类型传递进来 </summary>
    ///  * <param name="type"> 具体的业务类型 </param>
    ///
public:
    RequestModel(std::string type);
    virtual std::string getType();
};
}
}
}
}
}