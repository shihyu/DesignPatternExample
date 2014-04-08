#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example1 {
///
/// <summary> * 处理聚餐费用申请的对象 </summary>
///
class FeeRequest {
    ///
    ///  <summary> * 提交聚餐费用申请给项目经理 </summary>
    ///  * <param name="user"> 申请人 </param>
    ///  * <param name="fee"> 申请费用 </param>
    ///  * <returns> 成功或失败的具体通知 </returns>
    ///
public:
    virtual std::string requestToProjectManager(std::string user, double fee);
    ///
    ///  <summary> * 项目经理审批费用申请，参数、返回值和上面是一样的，省略了 </summary>
    ///
private:
    std::string projectHandle(std::string user, double fee);
    ///
    ///  <summary> * 部门经理审批费用申请，参数、返回值和上面是一样的，省略了 </summary>
    ///
    std::string depManagerHandle(std::string user, double fee);
    ///
    ///  <summary> * 总经理审批费用申请，参数、返回值和上面是一样的，省略了 </summary>
    ///
    std::string generalManagerHandle(std::string user, double fee);

};

}
}
}
}
}