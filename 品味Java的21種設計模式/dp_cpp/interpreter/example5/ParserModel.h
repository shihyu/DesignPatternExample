#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace interpreter {
namespace example5 {
///
/// <summary> * 用来封装每一个解析出来的元素对应的属性 </summary>
///
class ParserModel {
    ///
    ///  <summary> * 是否单个值 </summary>
    ///
private:
    bool singleVlaue;
    ///
    ///  <summary> * 是否属性，不是属性就是元素 </summary>
    ///
    bool propertyValue;
    ///
    ///  <summary> * 是否终结符 </summary>
    ///
    bool end;
public:
    virtual bool isEnd();
    virtual void setEnd(bool end);
    virtual bool isSingleVlaue();
    virtual void setSingleVlaue(bool oneVlaue);
    virtual bool isPropertyValue();
    virtual void setPropertyValue(bool propertyValue);
};

}
}
}
}
}