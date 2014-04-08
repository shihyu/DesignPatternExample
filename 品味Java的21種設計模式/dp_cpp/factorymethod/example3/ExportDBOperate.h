#pragma once

#include "ExportOperate.h"
#include "ExportFileApi.h"
#include "ExportDB.h"

namespace cn {
namespace javass {
namespace dp {
namespace factorymethod {
namespace example3 {
///
/// <summary> * 具体的创建器实现对象，实现创建导出成数据库备份文件形式的对象 </summary>
///
class ExportDBOperate : public ExportOperate {
protected:
    virtual ExportFileApi *factoryMethod();
};

}
}
}
}
}