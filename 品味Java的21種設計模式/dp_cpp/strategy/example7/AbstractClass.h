#pragma once

#include "Strategy.h"

namespace cn {
namespace javass {
namespace dp {
namespace strategy {
namespace example7 {

class AbstractClass : public Strategy {

public:
    virtual void algorithmInterface();
private:
    void stepThreeOpe();
protected:
    virtual void stepOneOpe() = 0;
    virtual void stepTwoOpe() = 0;
};

}
}
}
}
}