#pragma once

#include "Command.h"
#include "OperationApi.h"
#include "Memento.h"

namespace cn {
namespace javass {
namespace dp {
namespace memento {
namespace example4 {
///
/// <summary> * 命令对象的公共对象，实现各个命令对象的公共方法 </summary>
///
class AbstractCommand : public Command {
    ///
    ///  <summary> * 具体的功能实现，这里不管 </summary>
    ///
public:
    virtual void execute() = 0;
    ///
    ///  <summary> * 持有真正的命令实现者对象 </summary>
    ///
protected:
    OperationApi *operation;
public:
    virtual void setOperation(OperationApi *operation);

    virtual Memento *createMemento();

    virtual void redo(Memento *m);

    virtual void undo(Memento *m);
};

}
}
}
}
}