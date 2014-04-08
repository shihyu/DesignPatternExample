#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example4 {
///
/// <summary> * 计算奖金的组件接口 </summary>
///
class Component {
    ///
    ///  <summary> * 计算某人在某段时间内的奖金，有些参数在演示中并不会使用，
    ///  * 但是在实际业务实现上是会用的，为了表示这是个具体的业务方法，
    ///  * 因此这些参数被保留了 </summary>
    ///  * <param name="user"> 被计算奖金的人员 </param>
    ///  * <param name="begin"> 计算奖金的开始时间 </param>
    ///  * <param name="end"> 计算奖金的结束时间 </param>
    ///  * <returns> 某人在某段时间内的奖金 </returns>
    ///
public:
    virtual double calcPrize(std::string user, Date *begin, Date *end) = 0;
};

}
}
}
}
}