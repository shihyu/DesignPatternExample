#pragma once

#include "Builder.h"
#include "Product.h"

namespace cn {
namespace javass {
namespace dp {
namespace builder {
namespace example2 {
///
/// <summary> * 具体的构建器实现对象 </summary>
///
class ConcreteBuilder : public Builder {
    ///
    ///  <summary> * 构建器最终构建的产品对象 </summary>
    ///
private:
    Product *resultProduct;
    ///
    ///  <summary> * 获取构建器最终构建的产品对象 </summary>
    ///  * <returns> 构建器最终构建的产品对象 </returns>
    ///
public:
    virtual Product *getResult();
    virtual void buildPart();
};
}
}
}
}
}