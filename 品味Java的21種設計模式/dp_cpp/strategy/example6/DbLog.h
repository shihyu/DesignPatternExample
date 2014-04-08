#pragma once

#include "LogStrategy.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace strategy {
namespace example6 {
///
/// <summary> * 把日志记录到数据库 </summary>
///
class DbLog : public LogStrategy {
public:
    virtual void log(std::string msg);
};

}
}
}
}
}