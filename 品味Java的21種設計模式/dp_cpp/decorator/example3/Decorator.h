#pragma once

#include "Component.h"

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example3 {

///
/// <summary> * 装饰器接口，维持一个指向组件对象的接口对象，
/// * 并定义一个与组件接口一致的接口 </summary>
///
class Decorator : public Component {
    ///
    ///  <summary> * 持有组件对象 </summary>
    ///
protected:
    Component *component;

    ///
    ///  <summary> * 构造方法，传入组件对象 </summary>
    ///  * <param name="component"> 组件对象 </param>
    ///
public:
    Decorator(Component *component);

    virtual void operation();


};


}
}
}
}
}