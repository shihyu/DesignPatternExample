#pragma once

#include "Subject.h"
#include "RealSubject.h"

namespace cn {
namespace javass {
namespace dp {
namespace proxy {
namespace example2 {
///
/// <summary> * 代理对象 </summary>
///
class Proxy : public Subject {
    ///
    ///  <summary> * 持有被代理的具体的目标对象 </summary>
    ///
private:
    RealSubject *realSubject;
    ///
    ///  <summary> * 构造方法，传入被代理的具体的目标对象 </summary>
    ///  * <param name="realSubject"> 被代理的具体的目标对象 </param>
    ///
public:
    Proxy(RealSubject *realSubject);

    virtual void request();

};

}
}
}
}
}