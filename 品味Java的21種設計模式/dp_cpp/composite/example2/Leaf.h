#pragma once

#include "Component.h"

namespace cn {
namespace javass {
namespace dp {
namespace composite {
namespace example2 {

///
/// <summary> * 叶子对象，叶子对象不再包含其它子对象 </summary>
///
class Leaf : public Component {
    ///
    ///  <summary> * 示意方法，叶子对象可能有自己的功能方法 </summary>
    ///
public:
    virtual void someOperation();

};


}
}
}
}
}