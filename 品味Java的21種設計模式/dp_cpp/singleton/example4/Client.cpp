#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace singleton {
namespace example4 {

void Client::main(std::string args[]) {
    //创建读取应用配置的对象
    AppConfig *config = AppConfig::getInstance();

    std::string paramA = config->getParameterA();
    std::string paramB = config->getParameterB();

    puts("paramA=" + paramA + ",paramB=" + paramB);
}
}
}
}
}
}
