#include "SubstractCommand.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example4 {

SubstractCommand::SubstractCommand(OperationApi *operation, int opeNum) {
    this->operation = operation;
    this->opeNum = opeNum;
}

void SubstractCommand::execute() {
    //转调接收者去真正执行功能，这个命令是做减法
    this->operation->substract(opeNum);
}

void SubstractCommand::undo() {
    //转调接收者去真正执行功能
    //命令本身是做减法，那么撤销的时候就是做加法了
    this->operation->add(opeNum);
}
}
}
}
}
}
