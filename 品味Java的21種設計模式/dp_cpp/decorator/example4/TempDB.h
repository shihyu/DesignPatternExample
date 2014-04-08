#pragma once

#include <string>
#include <map>

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example4 {
///
/// <summary> * 在内存中模拟数据库，准备点测试数据，好计算奖金 </summary>
///
class TempDB {
private:
    TempDB();
    ///
    ///  <summary> * 记录每个人的月度销售额，只用了人员，月份没有用 </summary>
    ///
public:
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static Map<std::string, double> *mapMonthSaleMoney = std::map<std::string, double>();

    //JAVA TO C++ CONVERTER TODO TASK: Static constructors are not allowed in native C++:
    static TempDB();
};

}
}
}
}
}