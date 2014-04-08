#include "Factory.h"

namespace cn {
namespace javass {
namespace dp {
namespace simplefactory {
namespace example3 {

Api *Factory::createApi() {
    //由于只有一个实现，就不用条件判断了
    return new Impl();
}
}
}
}
}
}
