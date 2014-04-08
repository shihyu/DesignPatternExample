#pragma once

#include "Prototype.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace prototype {
namespace example8 {
///
/// <summary> * 克隆的具体实现对象 </summary>
///
class ConcretePrototype1 : public Prototype {
private:
    std::string name;
public:
    virtual std::string getName();
    virtual void setName(std::string name);

    virtual Prototype *clone();
    virtual std::string ToString();
};


}
}
}
}
}