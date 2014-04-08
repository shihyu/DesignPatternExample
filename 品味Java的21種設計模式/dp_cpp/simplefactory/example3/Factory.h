#pragma once

#include "Api.h"
#include "Impl.h"

namespace cn {
namespace javass {
namespace dp {
namespace simplefactory {
namespace example3 {
///
/// <summary> * 工厂类，用来创造Api对象 </summary>
///
class Factory {
    ///
    ///  <summary> * 具体的创造Api对象的方法 </summary>
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