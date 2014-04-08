#include "MSIMainboard.h"
#include <iostream>

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example3 {

MSIMainboard::MSIMainboard(int cpuHoles) {
    this->cpuHoles = cpuHoles;
}

void MSIMainboard::installCPU() {
    std::cout << "now in MSIMainboard,cpuHoles=" << cpuHoles << std::endl;
}
}
}
}
}
}
