#include "Singleton.h"

namespace cn {
namespace javass {
namespace dp {
namespace singleton {
namespace example6 {

Singleton::Singleton() {
}

Singleton Singleton::getInstance() {
    //5：直接使用已经创建好的实例
    return instance;
}
}
}
}
}
}
