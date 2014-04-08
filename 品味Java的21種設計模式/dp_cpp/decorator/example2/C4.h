#pragma once

#include "A.h"
#include "B.h"

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example2 {

class C4 {
    //示例直接在属性上创建需要组合的对象
private:
    A *a;
    //示例通过外部传入需要组合的对象
    B *b;
public:
    virtual void setB(B *b);
    virtual void a1();
    virtual void b1();
    virtual void c11();

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            a = new A();

            initialized = true;
        }
    }

public:
    C4() {
        InitializeInstanceFields();
    }
};

}
}
}
}
}