#include "ExportDBOperate.h"

namespace cn {
namespace javass {
namespace dp {
namespace factorymethod {
namespace example3 {

ExportFileApi *ExportDBOperate::factoryMethod() {
    //创建导出成数据库备份文件形式的对象
    return new ExportDB();
}
}
}
}
}
}
