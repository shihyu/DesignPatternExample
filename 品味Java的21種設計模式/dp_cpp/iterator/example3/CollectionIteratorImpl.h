#pragma once

#include "Iterator.h"
#include "PayManager.h"

namespace cn {
namespace javass {
namespace dp {
namespace iterator {
namespace example3 {


///
/// <summary> * 用来实现访问Collection集合的迭代接口，为了外部统一访问方式 </summary>
///
class CollectionIteratorImpl : public Iterator {
    ///
    ///  <summary> * 用来存放被迭代的聚合对象 </summary>
    ///
private:
    PayManager *aggregate;
    ///
    ///  <summary> * 用来记录当前迭代到的位置索引
    ///  * -1表示刚开始的时候，迭代器指向聚合对象第一个对象之前 </summary>
    ///
    int index;

public:
    CollectionIteratorImpl(PayManager *aggregate);

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