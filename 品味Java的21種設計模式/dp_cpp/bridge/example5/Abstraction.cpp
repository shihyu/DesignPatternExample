#include "Abstraction.h"

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example5 {

Abstraction::Abstraction(Implementor *impl) {
    this->impl = impl;
}

void Abstraction::operation() {
    impl->operationImpl();
}
}
}
}
}
}
