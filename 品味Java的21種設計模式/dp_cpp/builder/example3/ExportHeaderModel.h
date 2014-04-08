#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace builder {
namespace example3 {
///
/// <summary> * 描述输出到文件头的内容的对象 </summary>
///
class ExportHeaderModel {
    ///
    ///  <summary> * 分公司或门市点编号 </summary>
    ///
private:
    std::string depId;
    ///
    ///  <summary> * 导出数据的日期 </summary>
    ///
    std::string exportDate;
public:
    virtual std::string getDepId();
    virtual void setDepId(std::string depId);
    virtual std::string getExportDate();
    virtual void setExportDate(std::string exportDate);
};

}
}
}
}
}