#pragma once

#include "Command.h"
#include "Receiver.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example1 {
///
/// <summary> * 具体的命令实现对象 </summary>
///
class ConcreteCommand : public Command {
    ///
    ///  <summary> * 持有相应的接受者对象 </summary>
    ///
private:
    Receiver *receiver;
    ///
    ///  <summary> * 示意，命令对象可以有自己的状态 </summary>
    ///
    std::string state;
    ///
    ///  <summary> * 构造方法，传入相应的接受者对象 </summary>
    ///  * <param name="receiver"> 相应的接受者对象 </param>
    ///
public:
    ConcreteCommand(Receiver *receiver);

    virtual void execute();

};

}
}
}
}
}