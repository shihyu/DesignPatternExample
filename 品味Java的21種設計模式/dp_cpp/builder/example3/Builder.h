#pragma once

#include "ExportHeaderModel.h"
#include "ExportDataModel.h"
#include "ExportFooterModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace builder {
namespace example3 {


///
/// <summary> * 构建器接口，定义创建一个输出文件对象所需的各个部件的操作 </summary>
///
class Builder {
    ///
    ///  <summary> * 构建输出文件的Header部分 </summary>
    ///  * <param name="ehm"> 文件头的内容 </param>
    ///
public:
    virtual public void buildHeader(ExportHeaderModel *) = 0;
    ///
    ///  <summary> * 构建输出文件的Body部分 </summary>
    ///  * <param name="mapData"> 要输出的数据的内容 </param>
    ///
    virtual public void buildBody(Map<std::string, Collection<ExportDataModel *>*> *) = 0;
    ///
    ///  <summary> * 构建输出文件的Footer部分 </summary>
    ///  * <param name="efm"> 文件尾的内容 </param>
    ///
    virtual public void buildFooter(ExportFooterModel *) = 0;
};
}
}
}
}
}