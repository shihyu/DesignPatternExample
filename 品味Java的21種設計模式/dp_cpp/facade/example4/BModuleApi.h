#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace facade {
namespace example4 {

class BModuleApi {
    //对子系统外部
public:
    virtual public void b1() = 0;
    //子系统内部使用
    virtual public void b2() = 0;
    //子系统内部使用
    virtual public void b3() = 0;
};

}
}
}
}
}