#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example2 {
///
/// <summary> * 命令接口，声明执行的操作 </summary>
///
class Command {
    ///
    ///  <summary> * 执行命令对应的操作 </summary>
    ///
public:
    virtual void execute() = 0;
};

}
}
}
}
}
