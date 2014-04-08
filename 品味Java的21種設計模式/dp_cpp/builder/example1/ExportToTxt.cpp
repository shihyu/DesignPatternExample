#include "ExportToTxt.h"

namespace cn {
namespace javass {
namespace dp {
namespace builder {
namespace example1 {

void ExportToTxt::export(ExportHeaderModel *ehm, Map<std::string, Collection<ExportDataModel *>*> *mapData, ExportFooterModel *efm) {
    //用来记录最终输出的文件内容
    StringBuffer *buffer = new StringBuffer();
    //1：先来拼接文件头的内容
    buffer->append(ehm->getDepId() + "," + ehm->getExportDate() + "\n");

    //2：接着来拼接文件体的内容
    for (Map<std::string, Collection<ExportDataModel *>*>::const_iterator tblName = mapData->begin(); tblName != mapData->end(); ++tblName) {
        //先拼接表名称
        buffer->append(tblName->first + "\n");

        //然后循环拼接具体数据
        for (unknown::const_iterator edm = mapData->get(tblName).begin(); edm != mapData->get(tblName).end(); ++edm) {
            buffer->append((*edm)->getProductId() + "," + (*edm)->getPrice() + "," + (*edm)->getAmount() + "\n");
        }
    }

    //3：接着来拼接文件尾的内容
    buffer->append(efm->getExportUser());

    //为了演示简洁性，这里就不去写输出文件的代码了
    //把要输出的内容输出到控制台看看
    puts("输出到文本文件的内容：\n" + buffer);
}
}
}
}
}
}
