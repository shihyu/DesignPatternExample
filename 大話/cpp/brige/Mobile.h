#pragma once

#include "MobileSoft.h"
#include <string>

namespace brige {

class Mobile {

private:
    MobileSoft *soft;
    std::string brand;

public:
    Mobile(std::string brand);

    virtual MobileSoft *getSoft();

    virtual void setSoft(MobileSoft *soft);

    virtual std::string getBrand();

    virtual void setBrand(std::string brand);

    virtual void run() = 0;
};

}