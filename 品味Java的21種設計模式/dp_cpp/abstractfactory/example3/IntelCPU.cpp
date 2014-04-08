#include "IntelCPU.h"
#include <iostream>

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example3 {

IntelCPU::IntelCPU(int pins) {
    this->pins = pins;
}

void IntelCPU::calculate() {
    std::cout << "now in Intel CPU,pins=" << pins << std::endl;
}
}
}
}
}
}
