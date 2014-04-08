#include "Adapter.h"

namespace cn {
namespace javass {
namespace dp {
namespace adapter {
namespace example1 {

Adapter::Adapter(Adaptee *adaptee) {
    this->adaptee = adaptee;
}

void Adapter::request() {
    //可能转调已经实现了的方法，进行适配
    adaptee->specificRequest();
}
}
}
}
}
}
