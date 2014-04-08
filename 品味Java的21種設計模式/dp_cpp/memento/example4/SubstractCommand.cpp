#include "SubstractCommand.h"

namespace cn {
namespace javass {
namespace dp {
namespace memento {
namespace example4 {

SubstractCommand::SubstractCommand(int opeNum) {
    this->opeNum = opeNum;
}

void SubstractCommand::execute() {
    this->operation->substract(opeNum);
}
}
}
}
}
}
