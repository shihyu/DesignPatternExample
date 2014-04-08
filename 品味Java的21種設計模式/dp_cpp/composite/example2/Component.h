#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace composite {
namespace example2 {

///
/// <summary> * 抽象的组件对象，为组合中的对象声明接口，实现接口的缺省行为 </summary>
///
class Component {
    ///
    ///  <summary> * 示意方法，子组件对象可能有的功能方法 </summary>
    ///
public:
    virtual void someOperation() = 0;

    ///
    ///  <summary> * 向组合对象中加入组件对象  </summary>
    ///  * <param name="child"> 被加入组合对象中的组件对象 </param>
    ///
    virtual void addChild(Component *child);

    ///
    ///  <summary> * 从组合对象中移出某个组件对象 </summary>
    ///  * <param name="child"> 被移出的组件对象 </param>
    ///
    virtual void removeChild(Component *child);

    ///
    ///  <summary> * 返回某个索引对应的组件对象 </summary>
    ///  * <param name="index"> 需要获取的组件对象的索引，索引从0开始 </param>
    ///  * <returns> 索引对应的组件对象 </returns>
    ///
    virtual Component *getChildren(int index);
};


}
}
}
}
}