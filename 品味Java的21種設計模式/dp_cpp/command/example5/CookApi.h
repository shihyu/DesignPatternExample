#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example5 {
///
/// <summary> * 厨师的接口 </summary>
///
class CookApi {
    ///
    ///  <summary> * 示意，做菜的方法 </summary>
    ///  * <param name="name"> 菜名 </param>
    ///
public:
    virtual public void cook(std::string) = 0;
};

}
}
}
}
}