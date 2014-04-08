#pragma once

#include "HotCook.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example6 {
///
/// <summary> * 后厨的管理类，通过此类让后厨的厨师进行运行状态 </summary>
///
class CookManager {
    ///
    ///  <summary> * 用来控制是否需要创建厨师，如果已经创建过了就不要再执行了 </summary>
    ///
private:
    static bool runFlag;
    ///
    ///  <summary> * 运行厨师管理，创建厨师对象并启动他们相应的现程，
    ///  * 无论运行多少次，创建厨师对象和启动线程的工作就只做一次 </summary>
    ///
public:
    static void runCookManager();
};

}
}
}
}
}