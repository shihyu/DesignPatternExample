#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace prototype {
namespace example2 {
///
/// <summary> * 声明一个克隆自身的接口 </summary>
///
class Prototype {
    ///
    ///  <summary> * 克隆自身的方法 </summary>
    ///  * <returns> 一个从自身克隆出来的对象 </returns>
    ///
public:
    virtual public Prototype *clone() = 0;
};


}
}
}
}
}