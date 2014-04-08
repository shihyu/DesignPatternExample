#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace proxy {
namespace example2 {
///
/// <summary> * 抽象的目标接口，定义具体的目标对象和代理公用的接口 </summary>
///
class Subject {
    ///
    ///  <summary> * 示意方法：一个抽象的请求方法 </summary>
    ///
public:
    virtual public void request() = 0;
};

}
}
}
}
}