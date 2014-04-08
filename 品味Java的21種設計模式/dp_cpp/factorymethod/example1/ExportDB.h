#pragma once

#include "ExportFileApi.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace factorymethod {
namespace example1 {
///
/// <summary> * 导出成数据库备份文件形式的对象 </summary>
///
class ExportDB : public ExportFileApi {
public:
    virtual bool export(std::string data);
};

}
}
}
}
}