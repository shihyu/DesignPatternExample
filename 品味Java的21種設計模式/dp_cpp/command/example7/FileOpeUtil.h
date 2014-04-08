#pragma once

#include <string>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example7 {

///
/// <summary> * 读写文件的辅助工具类 </summary>
///
class FileOpeUtil {
    ///
    ///  <summary> * 私有化构造方法，避免外部无谓的创建类实例
    ///  * 这个工具类不需要创建类实例 </summary>
    ///
private:
    FileOpeUtil();
    ///
    ///  <summary> * 读文件，从文件里面获取存储的List对象 </summary>
    ///  * <param name="pathName"> 文件路径和文件名 </param>
    ///  * <returns> 存储的List对象 </returns>
    ///
public:
    static std::vector readFile(std::string pathName);
    ///
    ///  <summary> * 写文件，把list对象写出到文件中去 </summary>
    ///  * <param name="pathName"> 文件路径和文件名 </param>
    ///  * <param name="list"> 要写到文件的list对象 </param>
    ///
    static void writeFile(std::string pathName, std::vector list);
};

}
}
}
}
}