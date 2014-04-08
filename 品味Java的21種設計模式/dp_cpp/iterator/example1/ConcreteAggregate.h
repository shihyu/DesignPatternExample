#pragma once

#include "Aggregate.h"
#include "Iterator.h"
#include "ConcreteIterator.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace iterator {
namespace example1 {

///
/// <summary> * 具体的聚合对象，实现创建相应迭代器对象的功能 </summary>
///
class ConcreteAggregate : public Aggregate {
    ///
    ///  <summary> * 示意，表示聚合对象具体的内容 </summary>
    ///
private:
    //ORIGINAL LINE: private String[] ss = nullptr;
    //JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
    std::string *ss;

    ///
    ///  <summary> * 构造方法，传入聚合对象具体的内容 </summary>
    ///  * <param name="ss"> 聚合对象具体的内容 </param>
    ///
public:
    ConcreteAggregate(std::string ss[]);

    virtual Iterator *createIterator();
    ///
    ///  <summary> * 获取索引所对应的元素 </summary>
    ///  * <param name="index"> 索引 </param>
    ///  * <returns> 索引所对应的元素 </returns>
    ///
    virtual object *get(int index);
    ///
    ///  <summary> * 获取聚合对象的大小 </summary>
    ///  * <returns> 聚合对象的大小 </returns>
    ///
    virtual int size();
};


}
}
}
}
}