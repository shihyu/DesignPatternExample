#include "A.h"

namespace cn {
namespace javass {
namespace dp {
namespace factorymethod {
namespace example6 {

void A::setC(C *c) {
    this->c = c;
}

void A::t1() {
    //这里需要使用C类，可是又不让主动去创建C了，怎么办？
    //反正就要求从外部注入，这样更省心，
    //自己不用管怎么获取C，直接使用就好了
    c->tc();
}
}
}
}
}
}
