#pragma once

#include "Iterator.h"
#include "SalaryManager.h"

namespace cn {
namespace javass {
namespace dp {
namespace iterator {
namespace example5 {

///
/// <summary> * 用来实现访问数组的迭代接口 </summary>
///
class ArrayIteratorImpl : public Iterator {
    ///
    ///  <summary> * 用来存放被迭代的聚合对象 </summary>
    ///
private:
    SalaryManager *aggregate;
    ///
    ///  <summary> * 用来记录当前迭代到的位置索引 </summary>
    ///
    int index;

public:
    ArrayIteratorImpl(SalaryManager *aggregate);


    virtual bool hasNext();


    virtual object *next();


    virtual void remove();
};

}
}
}
}
}