#include "AMDCPU.h"
#include <iostream>

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example1 {

AMDCPU::AMDCPU(int pins) {
    this->pins = pins;
}

void AMDCPU::calculate() {
    std::cout << "now in AMD CPU,pins=" << pins;
}
}
}
}
}
}
