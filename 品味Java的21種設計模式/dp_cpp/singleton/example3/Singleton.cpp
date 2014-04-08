#include "Singleton.h"

namespace cn {
namespace javass {
namespace dp {
namespace singleton {
namespace example3 {

Singleton::Singleton() {
    //
}

Singleton Singleton::getInstance() {
    //直接使用已经创建好的实例
    return uniqueInstance;
}

void Singleton::singletonOperation() {
    //功能处理
}

std::string Singleton::getSingletonData() {
    return singletonData;
}
}
}
}
}
}
