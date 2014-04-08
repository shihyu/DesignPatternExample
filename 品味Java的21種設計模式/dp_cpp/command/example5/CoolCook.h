#pragma once

#include "CookApi.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example5 {

///
/// <summary> * 厨师对象，做凉菜 </summary>
///
class CoolCook : public CookApi {
public:
    virtual void cook(std::string name);
};
}
}
}
}
}