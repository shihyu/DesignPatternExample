#pragma once

#include "LogModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace adapter {
namespace example4 {
///
/// <summary> * 定义操作日志的应用接口，为了示例的简单，
/// * 只是简单的定义了增删改查的方法 </summary>
///
class LogDbOperateApi {
    ///
    ///  <summary> * 新增日志 </summary>
    ///  * <param name="lm"> 需要新增的日志对象 </param>
    ///
public:
    virtual public void createLog(LogModel *) = 0;
    ///
    ///  <summary> * 修改日志 </summary>
    ///  * <param name="lm"> 需要修改的日志对象 </param>
    ///
    virtual public void updateLog(LogModel *) = 0;
    ///
    ///  <summary> * 删除日志 </summary>
    ///  * <param name="lm"> 需要删除的日志对象 </param>
    ///
    virtual public void removeLog(LogModel *) = 0;
    ///
    ///  <summary> * 获取所有的日志 </summary>
    ///  * <returns> 所有的日志对象 </returns>
    ///
    virtual public std::vector<LogModel *> getAllLog() = 0;
};

}
}
}
}
}