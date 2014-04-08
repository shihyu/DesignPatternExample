#pragma once

#include "LogFileOperate.h"
#include "LogDbOperateApi.h"
#include "LogModel.h"
#include <string>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace adapter {
namespace example5 {


///
/// <summary> * ¿‡  ≈‰∆˜∂‘œÛ </summary>
///
class ClassAdapter : public LogFileOperate, LogDbOperateApi {

public:
    ClassAdapter(std::string logFilePathName);

    virtual void createLog(LogModel *lm);

    virtual std::vector<LogModel *> getAllLog();

    virtual void removeLog(LogModel *lm);

    virtual void updateLog(LogModel *lm);
};

}
}
}
}
}