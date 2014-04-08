#pragma once

#include "Api.h"
#include "ImplA.h"
#include "ImplB.h"

namespace cn {
namespace javass {
namespace dp {
namespace simplefactory {
namespace example2 {
///
/// <summary> * 工厂类，用来创造Api对象 </summary>
///
class Factory {
    ///
    ///  <summary> * 具体的创造Api对象的方法 </summary>
    ///  * <param name="condition"> 示意，从外部传入的选择条件 </param>
    ///  * <returns> 创造好的Api对象 </returns>
    ///
public:
    static Api *createApi(int condition);
};
}
}
}
}
}