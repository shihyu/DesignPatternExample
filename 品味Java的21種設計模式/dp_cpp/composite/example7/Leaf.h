#pragma once

#include "Component.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace composite {
namespace example7 {
///
/// <summary> * 叶子对象 </summary>
///
class Leaf : public Component {
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
    ///
    ///  <summary> * 输出叶子对象的结构，叶子对象没有子对象，也就是输出叶子对象的名字 </summary>
    ///  * <param name="preStr"> 前缀，主要是按照层级拼接的空格，实现向后缩进 </param>
    ///
    virtual void printStruct(std::string preStr);

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