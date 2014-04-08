#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace adapter {
namespace example5 {


///
/// <summary> * 日志数据对象 </summary>
///
class LogModel : public Serializable {
    ///
    ///  <summary> * 日志编号 </summary>
    ///
private:
    std::string logId;
    ///
    ///  <summary> * 操作人员 </summary>
    ///
    std::string operateUser;
    ///
    ///  <summary> * 操作时间，以yyyy-MM-dd HH:mm:ss的格式记录 </summary>
    ///
    std::string operateTime;
    ///
    ///  <summary> * 日志内容 </summary>
    ///
    std::string logContent;

public:
    virtual std::string getLogId();
    virtual void setLogId(std::string logId);
    virtual std::string getOperateUser();
    virtual void setOperateUser(std::string operateUser);
    virtual std::string getOperateTime();
    virtual void setOperateTime(std::string operateTime);
    virtual std::string getLogContent();
    virtual void setLogContent(std::string logContent);

    virtual std::string ToString();
};

}
}
}
}
}