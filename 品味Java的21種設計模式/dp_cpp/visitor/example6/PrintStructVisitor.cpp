#include "PrintStructVisitor.h"

namespace cn {
namespace javass {
namespace dp {
namespace visitor {
namespace example6 {

void PrintStructVisitor::visitComposite(Composite *composite) {
    //先把自己输出去
    puts(preStr + "+" + composite->getName());

    //如果还包含有子组件，那么就输出这些子组件对象
    if (composite->getChildComponents() != 0) {
        //然后添加一个空格，表示向后缩进一个空格
        preStr += " ";

        //输出当前对象的子对象了
        for (unknown::const_iterator c = composite->getChildComponents().begin(); c != composite->getChildComponents().end(); ++c) {
            //递归输出每个子对象
            (*c)->accept(this);
        }

        //把循环子对象所多加入的一个退格给去掉
        preStr = preStr.substr(0, preStr.length() - 1);
    }
}

void PrintStructVisitor::visitLeaf(Leaf *leaf) {
    //访问到叶子对象的数据
    puts(preStr + "-" + leaf->getName());
}
}
}
}
}
}
