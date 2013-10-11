#include "TShirt.h"

namespace decorator {

    void TShirt::show() {
        std::cout::put(" T-Shirt ");
        Finery::show();
    }
}