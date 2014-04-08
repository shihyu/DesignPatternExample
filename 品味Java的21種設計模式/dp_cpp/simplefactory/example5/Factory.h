#pragma once

#include "Api.h"

namespace cn {
namespace javass {
namespace dp {
namespace simplefactory {
namespace example5 {
///
/// <summary> * 工厂类，用来创造Api对象 </summary>
///
class Factory {
    ///
    ///  <summary> * 具体的创造Api的方法，根据配置文件的参数来创建接口 </summary>
    ///  * <returns> 创造好的Api对象 </returns>
    ///
public:
    static Api *createApi();
};
}
}
}
}
}