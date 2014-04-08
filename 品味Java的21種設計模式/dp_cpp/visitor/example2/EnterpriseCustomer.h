#pragma once

#include "Customer.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace visitor {
namespace example2 {
///
/// <summary> * 企业客户 </summary>
///
class EnterpriseCustomer : public Customer {
    ///
    ///  <summary> * 联系人 </summary>
    ///
private:
    std::string linkman;
    ///
    ///  <summary> * 联系电话 </summary>
    ///
    std::string linkTelephone;
    ///
    ///  <summary> * 企业注册地址 </summary>
    ///
    std::string registerAddress;


public:
    virtual std::string getLinkman();

    virtual void setLinkman(std::string linkman);

    virtual std::string getLinkTelephone();

    virtual void setLinkTelephone(std::string linkTelephone);

    virtual std::string getRegisterAddress();

    virtual void setRegisterAddress(std::string registerAddress);

    ///
    ///  <summary> * 企业客户提出服务请求的方法，示意一下 </summary>
    ///
    virtual void serviceRequest();
    ///
    ///  <summary> * 企业客户对公司产品的偏好分析，示意一下 </summary>
    ///
    virtual void predilectionAnalyze();
    ///
    ///  <summary> * 企业客户价值分析，示意一下 </summary>
    ///
    virtual void worthAnalyze();
};

}
}
}
}
}