#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example2 {

void Client::main(std::string args[]) {
    //先要组装职责链
    Handler *h1 = new ConcreteHandler1();
    Handler *h2 = new ConcreteHandler2();

    h1->setSuccessor(h2);
    //然后提交请求
    h1->handleRequest();
}
}
}
}
}
}
