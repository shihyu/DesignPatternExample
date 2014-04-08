#pragma once

#include "Observer.h"
#include <string>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace observer {
namespace example3 {


///
/// <summary> * 目标对象，作为被观察者，使用推模型 </summary>
///
class Subject {
    ///
    ///  <summary> * 用来保存注册的观察者对象，也就是报纸的订阅者 </summary>
    ///
private:
    std::vector<Observer *> readers;
    ///
    ///  <summary> * 报纸的读者需要先向报社订阅，先要注册 </summary>
    ///  * <param name="reader"> 报纸的读者  </param>
    ///  * <returns> 是否注册成功 </returns>
    ///
public:
    virtual void attach(Observer *reader);
    ///
    ///  <summary> * 报纸的读者可以取消订阅 </summary>
    ///  * <param name="reader"> 报纸的读者 </param>
    ///  * <returns> 是否取消成功 </returns>
    ///
    virtual void detach(Observer *reader);
    ///
    ///  <summary> * 当每期报纸印刷出来后，就要迅速的主动的被送到读者的手中，
    ///  * 相当于通知读者，让他们知道 </summary>
    ///  * <param name="content"> 要主动推送的内容 </param>
    ///
protected:
    virtual void notifyObservers(std::string content);

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            readers = std::vector<Observer *>();

            initialized = true;
        }
    }

public:
    Subject() {
        InitializeInstanceFields();
    }
};

}
}
}
}
}