#include "Sneaker.h"

namespace decorator {

    void Sneaker::show() {
        std::cout::put(" sneaker ");
        Finery::show();
    }
}