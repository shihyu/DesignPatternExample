#pragma once

#include "Aggregate.h"
#include "ConcreteAggregate.h"
#include "Iterator.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace iterator {
namespace example1 {

class Client {
    ///
    ///  <summary> * 示意方法，使用迭代器的功能。
    ///  * 这里示意使用迭代器来迭代聚合对象 </summary>
    ///
public:
    virtual void someOperation();
    static void main(std::string args[]);
};

}
}
}
}
}