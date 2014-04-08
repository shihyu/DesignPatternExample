#pragma once

#include "PayManager.h"
#include "SalaryManager.h"
#include "Iterator.h"
#include "PayModel.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace iterator {
namespace example6 {


class Client {
    static void main(std::string args[]);
    ///
    ///  <summary> * 测试通过访问聚合对象的迭代器，是否能正常访问聚合对象 </summary>
    ///  * <param name="it"> 聚合对象的迭代器 </param>
    ///
private:
    static void test(Iterator *it);
};

}
}
}
}
}