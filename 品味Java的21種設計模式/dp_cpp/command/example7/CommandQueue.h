#pragma once

#include "Command.h"
#include "FileOpeUtil.h"
#include "MenuCommand.h"
#include <string>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example7 {

///
/// <summary> * 命令队列类 </summary>
///
class CommandQueue {
    ///
    ///  <summary> * 新添加的，文件名称 </summary>
    ///
private:
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static const std::string FILE_NAME = "CmdQueue.txt";
    ///
    ///  <summary> * 用来存储命令对象的队列
    ///  * 请注意：这里没有使用java.util.Queue，是因为常用的实现Queue接口的LinkedList类要求存放的对象是可排序的，
    ///  * 排序是使用的Comparator，这跟要演示的功能没有多大关系，反而会增加复杂性。
    ///  * 另外一个需要的功能是把命令对象按照先后顺序排好就可以了，只要是有序的就可以了。
    ///  * 因此为了演示的简洁性，就直接使用List了。 </summary>
    ///
    static std::vector<Command *> cmds;
    //JAVA TO C++ CONVERTER TODO TASK: Static constructors are not allowed in native C++:
    static CommandQueue();
    ///
    ///  <summary> * 服务员传过来一个新的菜单
    ///  * 需要同步：是因为同时会有很多的服务员传入菜单，而同时又有很多厨师在从队列里取值 </summary>
    ///  * <param name="menu"> 传入的菜单 </param>
    ///
public:
    static void addMenu(MenuCommand *menu);
    ///
    ///  <summary> * 厨师从命令队列里面获取命令对象进行处理
    ///  * 也是需要同步的 </summary>
    ///
    static Command *getOneCommand();
};
}
}
}
}
}