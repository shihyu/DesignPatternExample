#pragma once

#include "State.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example2 {


///
/// <summary> * 定义客户感兴趣的接口，通常会维护一个State类型的对象实例 </summary>
///
class Context {
    ///
    ///  <summary> * 持有一个State类型的对象实例 </summary>
    ///
private:
    State *state;
    ///
    ///  <summary> * 设置实现State的对象的实例  </summary>
    ///  * <param name="state"> 实现State的对象的实例  </param>
    ///
public:
    virtual void setState(State *state);
    ///
    ///  <summary> * 用户感兴趣的接口方法 </summary>
    ///  * <param name="sampleParameter"> 示意参数 </param>
    ///
    virtual void request(std::string sampleParameter);


};
}
}
}
}
}