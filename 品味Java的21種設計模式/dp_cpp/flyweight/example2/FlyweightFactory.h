#pragma once

#include "Flyweight.h"
#include "ConcreteFlyweight.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace flyweight {
namespace example2 {

///
/// <summary> * 享元工厂 </summary>
///
class FlyweightFactory {
    ///
    ///  <summary> * 缓存多个flyweight对象，这里只是示意一下 </summary>
    ///
private:
    Map<std::string, Flyweight *> *fsMap;
    ///
    ///  <summary> * 获取key对应的享元对象 </summary>
    ///  * <param name="key"> 获取享元对象的key，只是示意 </param>
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

public:
    FlyweightFactory() {
        InitializeInstanceFields();
    }
};
}
}
}
}
}