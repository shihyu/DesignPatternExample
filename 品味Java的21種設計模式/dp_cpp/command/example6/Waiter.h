#pragma once

#include "MenuCommand.h"
#include "Command.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example6 {
///
/// <summary> * 服务员，负责组合菜单,还负责执行调用 </summary>
///
class Waiter {
    ///
    ///  <summary> * 持有一个宏命令对象——菜单 </summary>
    ///
private:
    MenuCommand *menuCommand;
    ///
    ///  <summary> * 客户点菜 </summary>
    ///  * <param name="cmd"> 客户点的菜，每道菜是一个命令对象 </param>
    ///
public:
    virtual void orderDish(Command *cmd);
    ///
    ///  <summary> * 客户点菜完毕，表示要执行命令了，这里就是执行菜单这个组合命令 </summary>
    ///
    virtual void orderOver();

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            menuCommand = new MenuCommand();

            initialized = true;
        }
    }

public:
    Waiter() {
        InitializeInstanceFields();
    }
};

}
}
}
}
}