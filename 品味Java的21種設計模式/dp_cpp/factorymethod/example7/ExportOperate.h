#pragma once

#include "ExportFileApi.h"
#include "ExportTxtFile.h"
#include "ExportDB.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace factorymethod {
namespace example7 {
///
/// <summary> * 实现导出数据的业务功能对象 </summary>
///
class ExportOperate {
    ///
    ///  <summary> * 导出文件 </summary>
    ///  * <param name="type"> 用户选择的导出类型 </param>
    ///  * <param name="data"> 需要保存的数据 </param>
    ///  * <returns> 是否成功导出文件 </returns>
    ///
public:
    virtual bool export(int type, std::string data);
    ///
    ///  <summary> * 工厂方法，创建导出的文件对象的接口对象 </summary>
    ///  * <param name="type"> 用户选择的导出类型 </param>
    ///  * <returns> 导出的文件对象的接口对象 </returns>
    ///
protected:
    virtual ExportFileApi *factoryMethod(int type);
};

}
}
}
}
}