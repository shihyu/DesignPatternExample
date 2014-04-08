#pragma once

#include <string>
#include <map>

namespace cn {
namespace javass {
namespace dp {
namespace singleton {
namespace example8 {
///
/// <summary> * 使用缓存来模拟实现单例 </summary>
///
class Singleton {
    ///
    ///  <summary> * 定义一个缺省的key值，用来标识在缓存中的存放 </summary>
    ///
private:
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static const std::string DEFAULT_KEY = "One";
    ///
    ///  <summary> * 缓存实例的容器 </summary>
    ///
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static Map<std::string, Singleton> *map = std::map<std::string, Singleton>();
    ///
    ///  <summary> * 私有化构造方法 </summary>
    ///
    Singleton();
public:
    static Singleton getInstance();
};

}
}
}
}
}