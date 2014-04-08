#pragma once

#include "LogFileOperateApi.h"
#include "LogModel.h"
#include <string>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace adapter {
namespace example5 {


///
/// <summary> * 实现对日志文件的操作 </summary>
///
class LogFileOperate : public LogFileOperateApi {
    ///
    ///  <summary> * 日志文件的路径和文件名称，默认是当前classpath下的AdapterLog.log </summary>
    ///
private:
    std::string logFilePathName;
    ///
    ///  <summary> * 构造方法，传入文件的路径和名称 </summary>
    ///  * <param name="logFilePathName"> 文件的路径和名称 </param>
    ///
public:
    LogFileOperate(std::string logFilePathName);
    virtual std::vector<LogModel *> readLogFile();

    virtual void writeLogFile(std::vector<LogModel *> &list);

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            logFilePathName = "AdapterLog.log";

            initialized = true;
        }
    }
};

}
}
}
}
}