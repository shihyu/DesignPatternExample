#include "NokiaMobile.h"

namespace brige {

    NokiaMobile::NokiaMobile(std::string brand) : Mobile(brand) {
    }

    void NokiaMobile::run() {
        puts("Nokia Mobile: ");
        this->getSoft()->run();
    }
}