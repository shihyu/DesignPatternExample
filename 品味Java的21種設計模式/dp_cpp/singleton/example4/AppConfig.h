#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace singleton {
namespace example4 {

///
/// <summary> * 读取应用配置文件，单例实现 </summary>
///
class AppConfig {
    ///
    ///  <summary> * 定义一个变量来存储创建好的类实例，直接在这里创建类实例，只会创建一次 </summary>
    ///
private:
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static AppConfig *instance = new AppConfig();
    ///
    ///  <summary> * 定义一个方法来为客户端提供AppConfig类的实例 </summary>
    ///  * <returns> 一个AppConfig的实例 </returns>
    ///
public:
    static AppConfig *getInstance();

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
    ///  <summary> * 私有化构造方法 </summary>
    ///
private:
    AppConfig();
    ///
    ///  <summary> * 读取配置文件，把配置文件中的内容读出来设置到属性上 </summary>
    ///
    void readConfig();

};

}
}
}
}
}