#pragma once

#include <string>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace composite {
namespace example6 {

///
/// <summary> * 抽象的组件对象 </summary>
///
class Component {
    ///
    ///  <summary> * 记录父组件对象 </summary>
    ///
private:
    Component *parent;

    ///
    ///  <summary> * 获取一个组件的父组件对象 </summary>
    ///  * <returns> 一个组件的父组件对象 </returns>
    ///
public:
    virtual Component *getParent();
    ///
    ///  <summary> * 设置一个组件的父组件对象 </summary>
    ///  * <param name="parent"> 一个组件的父组件对象 </param>
    ///
    virtual void setParent(Component *parent);
    ///
    ///  <summary> * 返回某个组件的子组件对象 </summary>
    ///  * <returns> 某个组件的子组件对象 </returns>
    ///
    virtual std::vector<Component *> getChildren();
    /*-------------------以下是原有的定义----------------------*/

    ///
    ///  <summary> * 输出组件自身的名称 </summary>
    ///
    virtual void printStruct(std::string preStr) = 0;

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