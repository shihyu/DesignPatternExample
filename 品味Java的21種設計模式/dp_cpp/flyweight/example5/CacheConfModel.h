#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace flyweight {
namespace example5 {
///
/// <summary> * 描述享元对象缓存的配置对象 </summary>
///
class CacheConfModel {
    ///
    ///  <summary> * 缓存开始计时的开始时间 </summary>
    ///
private:
    long long beginTime;
    ///
    ///  <summary> * 缓存对象存放的持续时间，其实是最长不被使用的时间 </summary>
    ///
    double durableTime;
    ///
    ///  <summary> * 缓存对象需要被永久存储，也就是不需要从缓存中删除 </summary>
    ///
    bool forever;
public:
    virtual bool isForever();
    virtual void setForever(bool forever);
    virtual long long getBeginTime();
    virtual void setBeginTime(long long beginTime);
    virtual double getDurableTime();
    virtual void setDurableTime(double durableTime);
};
}
}
}
}
}