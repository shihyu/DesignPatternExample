#include "ConcreteMediator.h"

namespace cn {
namespace javass {
namespace dp {
namespace mediator {
namespace example1 {

void ConcreteMediator::setConcreteColleagueA(ConcreteColleagueA *colleague) {
    colleagueA = colleague;
}

void ConcreteMediator::setConcreteColleagueB(ConcreteColleagueB *colleague) {
    colleagueB = colleague;
}

void ConcreteMediator::changed(Colleague *colleague) {
    //某个同事类发生了变化，通常需要与其他同事交户
    //具体协调相应的同事对象来实现协作行为
}
}
}
}
}
}
