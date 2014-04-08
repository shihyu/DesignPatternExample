#pragma once

#include "WatcherObserver.h"
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace observer {
namespace example5 {


///
/// <summary> * 定义水质监测的目标对象 </summary>
///
class WaterQualitySubject {
    ///
    ///  <summary> * 用来保存注册的观察者对象 </summary>
    ///
protected:
    std::vector<WatcherObserver *> observers;
    ///
    ///  <summary> * 注册观察者对象 </summary>
    ///  * <param name="observer"> 观察者对象 </param>
    ///
public:
    virtual void attach(WatcherObserver *observer);
    ///
    ///  <summary> * 删除观察者对象 </summary>
    ///  * <param name="observer"> 观察者对象 </param>
    ///
    virtual void detach(WatcherObserver *observer);
    ///
    ///  <summary> * 通知相应的观察者对象 </summary>
    ///
    virtual void notifyWatchers() = 0;
    ///
    ///  <summary> * 获取水质污染的级别 </summary>
    ///  * <returns> 水质污染的级别 </returns>
    ///
    virtual int getPolluteLevel() = 0;

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            observers = std::vector<WatcherObserver *>();

            initialized = true;
        }
    }

public:
    WaterQualitySubject() {
        InitializeInstanceFields();
    }
};

}
}
}
}
}