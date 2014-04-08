#pragma once

#include "Command.h"
#include "CookApi.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example7 {



///
/// <summary> * 命令对象，绿豆排骨煲 </summary>
///
class ChopCommand : public Command, Serializable {
    ///
    ///  <summary> * 持有具体做菜的厨师的对象 </summary>
    ///
private:
    CookApi *cookApi;
    ///
    ///  <summary> * 设置具体做菜的厨师的对象 </summary>
    ///  * <param name="cookApi"> 具体做菜的厨师的对象 </param>
    ///
public:
    virtual void setCookApi(CookApi *cookApi);
    ///
    ///  <summary> * 点菜的桌号 </summary>
    ///
private:
    int tableNum;
    ///
    ///  <summary> * 构造方法，传入点菜的桌号 </summary>
    ///  * <param name="tableNum"> 点菜的桌号 </param>
    ///
public:
    ChopCommand(int tableNum);
    virtual int getTableNum();

    virtual void execute();
};

}
}
}
}
}