#pragma once

#include "Builder.h"
#include "ExportDataModel.h"
#include "ExportFooterModel.h"
#include "ExportHeaderModel.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace builder {
namespace example3 {


///
/// <summary> * 实现导出数据到XML文件的的构建器对象 </summary>
///
class XmlBuilder : public Builder {
    ///
    ///  <summary> * 用来记录构建的文件的内容，相当于产品 </summary>
    ///
private:
    StringBuffer *buffer;
public:
    virtual void buildBody(Map<std::string, Collection<ExportDataModel *>*> *mapData);

    virtual void buildFooter(ExportFooterModel *efm);

    virtual void buildHeader(ExportHeaderModel *ehm);
    virtual StringBuffer *getResult();


private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            buffer = new StringBuffer();

            initialized = true;
        }
    }

public:
    XmlBuilder() {
        InitializeInstanceFields();
    }
};
}
}
}
}
}