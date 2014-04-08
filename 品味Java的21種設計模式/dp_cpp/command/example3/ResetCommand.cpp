#include "ResetCommand.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example3 {

ResetCommand::ResetCommand(MainBoardApi *mainBoard) {
    this->mainBoard = mainBoard;
}

void ResetCommand::execute() {
    //对于命令对象，根本不知道如何重启机器，会转调主板对象
    //让主板去完成重启机器的功能
    this->mainBoard->reset();
}
}
}
}
}
}
