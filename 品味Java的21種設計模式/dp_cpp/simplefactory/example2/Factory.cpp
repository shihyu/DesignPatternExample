#include "Factory.h"

namespace cn {
namespace javass {
namespace dp {
namespace simplefactory {
namespace example2 {

Api *Factory::createApi(int condition) {
    //应该根据某些条件去选择究竟创建哪一个具体的实现对象
    //这些条件可以从外部传入，也可以从其它途径获取
    //如果只有一个实现，可以省略条件，因为没有选择的必要

    //示意使用条件
    Api *api = 0;

    if (condition == 1) {
        api = new ImplA();
    } else if (condition == 2) {
        api = new ImplB();
    }

    return api;
}
}
}
}
}
}
