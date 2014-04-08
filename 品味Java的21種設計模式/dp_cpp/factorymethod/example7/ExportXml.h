#pragma once

#include "ExportFileApi.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace factorymethod {
namespace example7 {
///
/// <summary> * 导出成xml文件的对象 </summary>
///
class ExportXml : public ExportFileApi {
public:
    virtual bool export(std::string data);
};

}
}
}
}
}