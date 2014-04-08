#pragma once

#include <string>
#include <map>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace flyweight {
namespace example4 {
///
/// <summary> * 供测试用，在内存中模拟数据库中的值 </summary>
///
class TestDB {
    ///
    ///  <summary> * 用来存放单独授权数据的值 </summary>
    ///
public:
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static Collection<std::string> *colDB = std::vector<std::string>();
    ///
    ///  <summary> * 用来存放组合授权数据的值，key为组合数据的id，value为该组合包含的多条授权数据的值 </summary>
    ///
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static Map<std::string, std::string[]> *mapDB = std::map<std::string, std::string[]>();

    //JAVA TO C++ CONVERTER TODO TASK: Static constructors are not allowed in native C++:
    static TestDB();
};

}
}
}
}
}