#pragma once

#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "ProductA1.h"
#include "AbstractProductB.h"
#include "ProductB1.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example2 {
///
/// <summary> * 具体的工厂实现对象，实现创建具体的产品对象的操作 </summary>
///
class ConcreteFactory1 : public AbstractFactory {

public:
    virtual AbstractProductA *createProductA();
    virtual AbstractProductB *createProductB();

};


}
}
}
}
}