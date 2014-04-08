#pragma once

#include "Visitor.h"
#include "Composite.h"
#include "Leaf.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace visitor {
namespace example6 {

///
/// <summary> * 具体的访问者，实现：输出组合对象自身的结构 </summary>
///
class PrintStructVisitor : public Visitor {
    ///
    ///  <summary> * 用来累计记录对象需要向后退的格 </summary>
    ///
private:
    std::string preStr;
public:
    virtual void visitComposite(Composite *composite);
    virtual void visitLeaf(Leaf *leaf);

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            preStr = "";

            initialized = true;
        }
    }

public:
    PrintStructVisitor() {
        InitializeInstanceFields();
    }
};

}
}
}
}
}