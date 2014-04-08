#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example3 {
///
/// <summary> * 主板的接口 </summary>
///
class MainboardApi {
    ///
    ///  <summary> * 示意方法，主板都具有安装CPU的功能 </summary>
    ///
public:
    virtual void installCPU() = 0;
};

}
}
}
}
}
