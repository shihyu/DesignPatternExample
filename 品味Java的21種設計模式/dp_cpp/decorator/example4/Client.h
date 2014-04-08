#pragma once

#include "Component.h"
#include "ConcreteComponent.h"
#include "Decorator.h"
#include "MonthPrizeDecorator.h"
#include "SumPrizeDecorator.h"
#include "GroupPrizeDecorator.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example4 {

///
/// <summary> * 使用装饰模式的客户端 </summary>
///
class Client {
    static void main(std::string args[]);
};

}
}
}
}
}