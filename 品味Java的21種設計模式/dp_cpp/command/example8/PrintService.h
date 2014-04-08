#pragma once

#include "Command.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example8 {

class PrintService : public Command {
    ///
    ///  <summary> * 要输出的内容 </summary>
    ///
private:
    std::string str;
    ///
    ///  <summary> * 构造方法，传入要输出的内容 </summary>
    ///  * <param name="s"> 要输出的内容 </param>
    ///
public:
    PrintService(std::string s);

    virtual void execute();

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            str = "";

            initialized = true;
        }
    }
};
}
}
}
}
}