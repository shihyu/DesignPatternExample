#include "Mobile.h"

namespace brige {

    Mobile::Mobile(std::string brand) {
        this->brand = brand;
    }

    MobileSoft* Mobile::getSoft() {
        return soft;
    }

    void Mobile::setSoft(MobileSoft* soft) {
        this->soft = soft;
    }

    std::string Mobile::getBrand() {
        return brand;
    }

    void Mobile::setBrand(std::string brand) {
        this->brand = brand;
    }
}