#pragma once

#include <string>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace flyweight {
namespace example1 {
///
/// <summary> * 供测试用，在内存中模拟数据库中的值 </summary>
///
class TestDB {
    ///
    ///  <summary> * 用来存放授权数据的值 </summary>
    ///
public:
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static Collection<std::string> *colDB = std::vector<std::string>();

    //JAVA TO C++ CONVERTER TODO TASK: Static constructors are not allowed in native C++:
    static TestDB();
};

}
}
}
}
}