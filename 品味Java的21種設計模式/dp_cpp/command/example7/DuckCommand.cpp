#include "DuckCommand.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example7 {

void DuckCommand::setCookApi(CookApi *cookApi) {
    this->cookApi = cookApi;
}

DuckCommand::DuckCommand(int tableNum) {
    this->tableNum = tableNum;
}

int DuckCommand::getTableNum() {
    return this->tableNum;
}

void DuckCommand::execute() {
    this->cookApi->cook(tableNum, "北京烤鸭");
}
}
}
}
}
}
