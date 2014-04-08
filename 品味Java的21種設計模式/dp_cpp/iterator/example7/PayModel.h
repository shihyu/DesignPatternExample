#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace iterator {
namespace example7 {

class PayModel {
private:
    std::string userName;
    double pay;
public:
    virtual std::string getUserName();
    virtual void setUserName(std::string userName);
    virtual double getPay();
    virtual void setPay(double pay);
    virtual std::string ToString();
};

}
}
}
}
}