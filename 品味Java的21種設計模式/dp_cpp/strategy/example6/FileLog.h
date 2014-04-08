#pragma once

#include "LogStrategy.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace strategy {
namespace example6 {
///
/// <summary> * 把日志记录到文件 </summary>
///
class FileLog : public LogStrategy {
public:
    virtual void log(std::string msg);
};

}
}
}
}
}