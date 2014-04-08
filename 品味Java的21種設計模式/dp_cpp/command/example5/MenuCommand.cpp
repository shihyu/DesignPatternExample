#include "MenuCommand.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example5 {

void MenuCommand::addCommand(Command *cmd) {
    col->add(cmd);
}

void MenuCommand::execute() {
    //执行菜单其实就是循环执行菜单里面的每个菜
    for (Collection<Command *>::const_iterator cmd = col->begin(); cmd != col->end(); ++cmd) {
        (*cmd)->execute();
    }
}
}
}
}
}
}
