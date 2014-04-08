#include "AddCommand.h"

namespace cn {
namespace javass {
namespace dp {
namespace memento {
namespace example4 {

AddCommand::AddCommand(int opeNum) {
    this->opeNum = opeNum;
}

void AddCommand::execute() {
    this->operation->add(opeNum);
}
}
}
}
}
}
