#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace singleton {
namespace example1 {

///
/// <summary> * 读取应用配置文件 </summary>
///
class AppConfig {
    ///
    ///  <summary> * 用来存放配置文件中参数A的值 </summary>
    ///
private:
    std::string parameterA;
    ///
    ///  <summary> * 用来存放配置文件中参数B的值 </summary>
    ///
    std::string parameterB;

public:
    virtual std::string getParameterA();
    virtual std::string getParameterB();
    ///
    ///  <summary> * 构造方法 </summary>
    ///
    AppConfig();
    ///
    ///  <summary> * 读取配置文件，把配置文件中的内容读出来设置到属性上 </summary>
    ///
private:
    void readConfig();

};

}
}
}
}
}