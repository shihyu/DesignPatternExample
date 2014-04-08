#pragma once

#include "Iterator.h"
#include "ConcreteAggregate.h"

namespace cn {
namespace javass {
namespace dp {
namespace iterator {
namespace example1 {

///
/// <summary> * 具体迭代器实现对象，示意的是聚合对象为数组的迭代器
/// * 不同的聚合对象相应的迭代器实现是不一样的 </summary>
///
class ConcreteIterator : public Iterator {
    ///
    ///  <summary> * 持有被迭代的具体的聚合对象 </summary>
    ///
private:
    ConcreteAggregate *aggregate;
    ///
    ///  <summary> * 内部索引，记录当前迭代到的索引位置。
    ///  * -1表示刚开始的时候，迭代器指向聚合对象第一个对象之前 </summary>
    ///
    int index;
    ///
    ///  <summary> * 构造方法，传入被迭代的具体的聚合对象 </summary>
    ///  * <param name="aggregate"> 被迭代的具体的聚合对象 </param>
    ///
public:
    ConcreteIterator(ConcreteAggregate *aggregate);

    virtual void first();
    virtual void next();
    virtual bool isDone();
    virtual object *currentItem();

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            index = -1;

            initialized = true;
        }
    }
};
}
}
}
}
}