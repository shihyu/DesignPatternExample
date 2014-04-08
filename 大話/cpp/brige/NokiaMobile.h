#pragma once

#include "Mobile.h"
#include <string>

namespace brige {

class NokiaMobile : public Mobile {

public:
    NokiaMobile(std::string brand);

    virtual void run();

};

}