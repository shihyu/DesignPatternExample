#pragma once

#include "Flyweight.h"
#include "CacheConfModel.h"
#include "AuthorizationFlyweight.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace flyweight {
namespace example5 {



///
/// <summary> * 享元工厂，通常实现成为单例
/// * 加入实现垃圾回收和引用计数的功能 </summary>
///
class FlyweightFactory {
private:
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static FlyweightFactory *factory = new FlyweightFactory();
    FlyweightFactory();
public:
    static FlyweightFactory *getInstance();
    ///
    ///  <summary> * 缓存多个flyweight对象 </summary>
    ///
private:
    Map<std::string, Flyweight *> *fsMap;
    ///
    ///  <summary> * 用来缓存被共享对象的缓存配置，key值和上面map的一样 </summary>
    ///
    Map<std::string, CacheConfModel *> *cacheConfMap;
    ///
    ///  <summary> * 用来记录缓存对象被引用的次数，key值和上面map的一样 </summary>
    ///
    Map<std::string, int> *countMap;
    ///
    ///  <summary> * 默认保存6秒钟，主要为了测试方便，这个时间可以根据应用的要求设置，比如30分钟 </summary>
    ///
    const long long DURABLE_TIME;

    ///
    ///  <summary> * 获取某个享元被使用的次数 </summary>
    ///  * <param name="key"> 享元的key </param>
    ///  * <returns> 被使用的次数 </returns>
    ///
public:
    virtual int getUseTimes(std::string key);

    ///
    ///  <summary> * 获取key对应的享元对象 </summary>
    ///  * <param name="key"> 获取享元对象的key </param>
    ///  * <returns> key对应的享元对象 </returns>
    ///
    virtual Flyweight *getFlyweight(std::string key);
    ///
    ///  <summary> * 删除key对应的享元对象，连带清除对应的缓存配置和引用次数的记录，不对外 </summary>
    ///  * <param name="key"> 要删除的享元对象的key </param>
    ///
private:
    void removeFlyweight(std::string key);
    ///
    ///  <summary> * 维护清除缓存的线程，内部使用 </summary>
    ///
private:
    class ClearCache : public Thread {
    public:
        virtual void run();
    };

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            fsMap = std::map<std::string, Flyweight *>();
            cacheConfMap = std::map<std::string, CacheConfModel *>();
            countMap = std::map<std::string, int>();
            DURABLE_TIME = 6 * 1000L;

            initialized = true;
        }
    }
};

}
}
}
}
}