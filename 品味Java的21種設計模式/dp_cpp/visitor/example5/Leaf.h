#pragma once

#include "Component.h"
#include "Visitor.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace visitor {
namespace example5 {
///
/// <summary> * 叶子对象，相当于访问者模式的具体Element实现对象 </summary>
///
class Leaf : public Component {
public:
    virtual void accept(Visitor *visitor);
    ///
    ///  <summary> * 叶子对象的名字 </summary>
    ///
private:
    std::string name;
    ///
    ///  <summary> * 构造方法，传入叶子对象的名字 </summary>
    ///  * <param name="name"> 叶子对象的名字 </param>
    ///
public:
    Leaf(std::string name);
    virtual std::string getName();

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            name = "";

            initialized = true;
        }
    }
};

}
}
}
}
}