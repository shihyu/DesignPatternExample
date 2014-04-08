#pragma once

#include "ConcreteHandler1.h"
#include "Handler.h"
#include "ConcreteHandler2.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example2 {
///
/// <summary> * 职责链的客户端，这里只是个示意 </summary>
///
class Client {
    static void main(std::string args[]);
};

}
}
}
}
}