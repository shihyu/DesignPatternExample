#include "Composite.h"

namespace cn {
namespace javass {
namespace dp {
namespace composite {
namespace example1 {

Composite::Composite(std::string name) {
    InitializeInstanceFields();
    this->name = name;
}

void Composite::addComposite(Composite *c) {
    this->childComposite->add(c);
}

void Composite::addLeaf(Leaf *leaf) {
    this->childLeaf->add(leaf);
}

void Composite::printStruct(std::string preStr) {
    //先把自己输出去
    puts(preStr + "+" + this->name);
    //然后添加一个空格，表示向后缩进一个空格，输出自己包含的叶子对象
    preStr += " ";

    for (Collection<Leaf *>::const_iterator leaf = childLeaf->begin(); leaf != childLeaf->end(); ++leaf) {
        (*leaf)->printStruct(preStr);
    }

    //输出当前对象的子对象了
    for (Collection<Composite *>::const_iterator c = childComposite->begin(); c != childComposite->end(); ++c) {
        //递归输出每个子对象
        (*c)->printStruct(preStr);
    }
}
}
}
}
}
}
