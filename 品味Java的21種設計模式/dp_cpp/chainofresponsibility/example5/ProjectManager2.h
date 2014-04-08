#pragma once

#include "ProjectManager.h"
#include "RequestModel.h"
#include "PreFeeRequestModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example5 {
///
/// <summary> * 实现为项目经理增加预支差旅费用申请处理的功能的子对象，
/// * 现在的项目经理既可以处理聚餐费用申请，又可以处理预支差旅费用申请 </summary>
///
class ProjectManager2 : public ProjectManager {
public:
    virtual object *handleRequest(RequestModel *rm);
private:
    object *myHandler(RequestModel *rm);
};

}
}
}
}
}