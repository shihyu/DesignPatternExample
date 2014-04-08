#include "GAMainboard.h"
#include <iostream>

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example3 {

GAMainboard::GAMainboard(int cpuHoles) {
    this->cpuHoles = cpuHoles;
}

void GAMainboard::installCPU() {
    std::cout << "now in GAMainboard,cpuHoles=" << cpuHoles << std::endl;
}
}
}
}
}
}
