#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace iterator {
namespace example8 {
///
/// <summary> * 定义翻页访问聚合元素的迭代接口 </summary>
///
class AggregationIterator {
    ///
    ///  <summary> * 判断是否还有下一个元素，无所谓是否够一页的数据，
    ///  * 因为最后哪怕只有一条数据，也是要算一页的 </summary>
    ///  * <returns> 如果有下一个元素，返回true，没有下一个元素就返回false </returns>
    ///
public:
    virtual public bool hasNext() = 0;
    ///
    ///  <summary> * 取出下面几个元素 </summary>
    ///  * <param name="num"> 需要获取的记录条数 </param>
    ///  * <returns> 下面几个元素 </returns>
    ///
    virtual public Collection *next(int) = 0;
    ///
    ///  <summary> * 判断是否还有上一个元素，无所谓是否够一页的数据，
    ///  * 因为最后哪怕只有一条数据，也是要算一页的 </summary>
    ///  * <returns> 如果有上一个元素，返回true，没有上一个元素就返回false </returns>
    ///
    virtual public bool hasPrevious() = 0;
    ///
    ///  <summary> * 取出上面几个元素 </summary>
    ///  * <param name="num"> 需要获取的记录条数 </param>
    ///  * <returns> 上面几个元素 </returns>
    ///
    virtual public Collection *previous(int) = 0;
};

}
}
}
}
}