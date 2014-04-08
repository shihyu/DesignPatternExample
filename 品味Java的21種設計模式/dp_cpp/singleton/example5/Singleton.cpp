#include "Singleton.h"

namespace cn {
namespace javass {
namespace dp {
namespace singleton {
namespace example5 {

Singleton::Singleton() {
}

Singleton Singleton::getInstance() {
    //6：判断存储实例的变量是否有值
    if (instance == 0) {
        //6.1：如果没有，就创建一个类实例，并把值赋值给存储类实例的变量
        instance = new Singleton();
    }

    //6.2：如果有值，那就直接使用
    return instance;
}
}
}
}
}
}
