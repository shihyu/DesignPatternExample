#pragma once

#include "Observer.h"
#include "Subject.h"
#include "ConcreteSubject.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace observer {
namespace example1 {

///
/// <summary> * 具体观察者对象，实现更新的方法，使自身的状态和目标的状态保持一致 </summary>
///
class ConcreteObserver : public Observer {
    ///
    ///  <summary> * 示意，观者者的状态 </summary>
    ///
private:
    std::string observerState;

public:
    virtual void update(Subject *subject);
};


}
}
}
}
}