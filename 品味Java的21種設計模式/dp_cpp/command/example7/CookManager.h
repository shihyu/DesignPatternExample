#pragma once

#include "HotCook.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example7 {
///
/// <summary> * 后厨的管理类，通过此类让后厨的厨师进行运行状态 </summary>
///
class CookManager {
    ///
    ///  <summary> * 用来控制是否需要创建厨师，如果已经创建过了就不要再执行了 </summary>
    ///
private:
    static bool runFlag;
public:
    static void runCookManager();
};

}
}
}
}
}