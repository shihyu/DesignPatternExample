#pragma once

#include "Command.h"
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example4 {
///
/// <summary> * 计算器类，计算器上有加法按钮、减法按钮，还有撤销和恢复的按钮 </summary>
///
class Calculator {
    ///
    ///  <summary> * 命令的操作的历史记录，在撤销时候用 </summary>
    ///
private:
    std::vector<Command *> undoCmds;
    ///
    ///  <summary> * 命令被撤销的历史记录，在恢复时候用 </summary>
    ///
    std::vector<Command *> redoCmds;

    Command *addCmd;
    Command *substractCmd;
public:
    virtual void setAddCmd(Command *addCmd);
    virtual void setSubstractCmd(Command *substractCmd);
    virtual void addPressed();
    virtual void substractPressed();
    virtual void undoPressed();
    virtual void redoPressed();

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            undoCmds = std::vector<Command *>();
            redoCmds = std::vector<Command *>();

            initialized = true;
        }
    }

public:
    Calculator() {
        InitializeInstanceFields();
    }
};

}
}
}
}
}