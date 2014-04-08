#pragma once

#include "Observer.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace observer {
namespace example3 {
///
/// <summary> * 真正的读者，为了简单就描述一下姓名 </summary>
///
class Reader : public Observer {
    ///
    ///  <summary> * 读者的姓名 </summary>
    ///
private:
    std::string name;

public:
    virtual void update(std::string content);
    virtual std::string getName();
    virtual void setName(std::string name);
};

}
}
}
}
}