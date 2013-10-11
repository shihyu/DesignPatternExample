#include "Scale.h"

namespace interpreter {

    void Scale::excute(std::string key, double value) {
        std::string scale = "";
        int intKey = static_cast<int>(value);

        if (intKey == 1) {
            scale = "low scale";
        }

        if (intKey == 2) {
            scale = "mid scale";
        }

        if (intKey == 3) {
            scale = "high scale";
        }

        std::cout::put(" " + scale + " ");
    }
}