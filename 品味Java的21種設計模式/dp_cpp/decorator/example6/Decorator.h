#pragma once

#include "GoodsSaleEbi.h"

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example6 {
///
/// <summary> * 装饰器的接口，需要跟被装饰的对象实现同样的接口 </summary>
///
class Decorator : public GoodsSaleEbi {
    ///
    ///  <summary> * 持有被装饰的组件对象 </summary>
    ///
protected:
    GoodsSaleEbi *ebi;
    ///
    ///  <summary> * 通过构造方法传入被装饰的对象 </summary>
    ///  * <param name="ebi被装饰的对象"> </param>
    ///
public:
    Decorator(GoodsSaleEbi *ebi);
};

}
}
}
}
}