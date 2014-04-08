#pragma once

#include "Target.h"
#include "Adaptee.h"

namespace cn {
namespace javass {
namespace dp {
namespace adapter {
namespace example1 {
///
/// <summary> * 适配器 </summary>
///
class Adapter : public Target {
    ///
    ///  <summary> * 持有需要被适配的接口对象 </summary>
    ///
private:
    Adaptee *adaptee;
    ///
    ///  <summary> * 构造方法，传入需要被适配的对象 </summary>
    ///  * <param name="adaptee"> 需要被适配的对象 </param>
    ///
public:
    Adapter(Adaptee *adaptee);

    virtual void request();
};


}
}
}
}
}