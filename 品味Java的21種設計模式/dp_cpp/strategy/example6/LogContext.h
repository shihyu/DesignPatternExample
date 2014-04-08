#pragma once

#include "DbLog.h"
#include "LogStrategy.h"
#include "FileLog.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace strategy {
namespace example6 {
///
/// <summary> * 日志记录的上下文 </summary>
///
class LogContext {
    ///
    ///  <summary> * 记录日志的方法，提供给客户端使用 </summary>
    ///  * <param name="msg"> 需记录的日志信息 </param>
    ///
public:
    virtual void log(std::string msg);
};

}
}
}
}
}