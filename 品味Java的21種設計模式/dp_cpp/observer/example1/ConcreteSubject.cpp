#include "ConcreteSubject.h"

namespace cn {
namespace javass {
namespace dp {
namespace observer {
namespace example1 {

std::string ConcreteSubject::getSubjectState() {
    return subjectState;
}

void ConcreteSubject::setSubjectState(std::string subjectState) {
    this->subjectState = subjectState;
    //状态发生了改变，通知各个观察者
    this->notifyObservers();
}
}
}
}
}
}
