#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace prototype {
namespace example2 {

Client::Client(Prototype *prototype) {
    this->prototype = prototype;
}

void Client::operation() {
    //会需要创建原型接口的对象
    Prototype *newPrototype = prototype->clone();
}
}
}
}
}
}
