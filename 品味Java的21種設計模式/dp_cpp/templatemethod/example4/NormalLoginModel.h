#pragma once

#include "LoginModel.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example4 {
///
/// <summary> * 封装进行登录控制所需要的数据，在公共数据的基础上，
/// * 添加具体模块需要的数据 </summary>
///
class NormalLoginModel : public LoginModel {
    ///
    ///  <summary> * 密码验证问题 </summary>
    ///
private:
    std::string question;
    ///
    ///  <summary> * 密码验证答案 </summary>
    ///
    std::string answer;
public:
    virtual std::string getQuestion();
    virtual void setQuestion(std::string question);
    virtual std::string getAnswer();
    virtual void setAnswer(std::string answer);

};

}
}
}
}
}