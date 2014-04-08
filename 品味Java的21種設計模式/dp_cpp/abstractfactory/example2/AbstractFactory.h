#pragma once

#include "AbstractProductA.h"
#include "AbstractProductB.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example2 {
///
/// <summary> * 抽象工厂的接口，声明创建抽象产品对象的操作 </summary>
///
class AbstractFactory {
    ///
    ///  <summary> * 示例方法，创建抽象产品A的对象 </summary>
    ///  * <returns> 抽象产品A的对象 </returns>
    ///
public:
    virtual public AbstractProductA *createProductA() = 0;
    ///
    ///  <summary> * 示例方法，创建抽象产品B的对象 </summary>
    ///  * <returns> 抽象产品B的对象 </returns>
    ///
    virtual public AbstractProductB *createProductB() = 0;
};
}
}
}
}
}