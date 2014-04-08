#include "ExportDB.h"

namespace cn {
namespace javass {
namespace dp {
namespace factorymethod {
namespace example1 {

bool ExportDB::export(std::string data) {
    //简单示意一下，这里需要操作数据库和文件
    puts("导出数据" + data + "到数据库备份文件");
    return true;
}
}
}
}
}
}
