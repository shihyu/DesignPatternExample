#include "C3.h"

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example2 {

void C3::a1() {
    //转调A对象的功能
    a->a1();
}

void C3::b1() {
    //转调B对象的功能
    b->b1();
}

void C3::c11() {
    puts("now in C3.c11");
}
}
}
}
}
}
