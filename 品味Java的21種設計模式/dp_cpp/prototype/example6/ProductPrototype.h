#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace prototype {
namespace example6 {
///
/// <summary> * 声明一个克隆产品自身的接口
/// * </summary>
///
class ProductPrototype {
    ///
    ///  <summary> * 克隆产品自身的方法 </summary>
    ///  * <returns> 一个从自身克隆出来的产品对象 </returns>
    ///
public:
    virtual public ProductPrototype *cloneProduct() = 0;
};

}
}
}
}
}