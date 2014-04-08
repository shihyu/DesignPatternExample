#include "ConcreteColleagueA.h"

namespace cn {
namespace javass {
namespace dp {
namespace mediator {
namespace example1 {

ConcreteColleagueA::ConcreteColleagueA(Mediator *mediator) : Colleague(mediator) {
}

void ConcreteColleagueA::someOperation() {
    //在需要跟其他同事通信的时候，通知中介者对象
    getMediator()->changed(this);
}
}
}
}
}
}
