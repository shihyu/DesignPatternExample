#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace prototype {
namespace example8 {
class Prototype {
public:
    virtual public Prototype *clone() = 0;
    virtual public std::string getName() = 0;
    virtual public void setName(std::string) = 0;
};
}
}
}
}
}