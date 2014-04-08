#pragma once

#include "Api.h"
#include "Impl.h"
#include "Impl2.h"

namespace cn {
namespace javass {
namespace dp {
namespace simplefactory {
namespace example4 {

///
/// <summary> * 工厂类，用来创造Api的 </summary>
///
class Factory {
    ///
    ///  <summary> * 具体的创造Api的方法，根据客户端的参数来创建接口 </summary>
    ///  * <param name="type"> 客户端传入的选择创造接口的条件 </param>
    ///  * <returns> 创造好的Api对象 </returns>
    ///
public:
    static Api *createApi(int type);
};
}
}
}
}
}