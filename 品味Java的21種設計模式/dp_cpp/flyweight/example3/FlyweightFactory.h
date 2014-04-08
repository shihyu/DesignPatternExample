#pragma once

#include "Flyweight.h"
#include "AuthorizationFlyweight.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace flyweight {
namespace example3 {

///
/// <summary> * 享元工厂，通常实现成为单例 </summary>
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
    ///  <summary> * 获取key对应的享元对象 </summary>
    ///  * <param name="key"> 获取享元对象的key </param>
    ///  * <returns> key对应的享元对象 </returns>
    ///
public:
    virtual Flyweight *getFlyweight(std::string key);

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            fsMap = std::map<std::string, Flyweight *>();

            initialized = true;
        }
    }
};

}
}
}
}
}