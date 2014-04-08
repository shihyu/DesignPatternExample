#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace singleton {
namespace example7 {
///
/// <summary> * Java中缓存的基本实现示例 </summary>
///
class JavaCache {
    ///
    ///  <summary> * 缓存数据的容器，定义成Map是方便访问，直接根据Key就可以获取Value了
    ///  * key选用String是为了简单，方便演示 </summary>
    ///
private:
    Map<std::string, object *> *map;
    ///
    ///  <summary> * 从缓存中获取值 </summary>
    ///  * <param name="key"> 设置时候的key值 </param>
    ///  * <returns> key对应的Value值 </returns>
    ///
public:
    virtual object *getValue(std::string key);

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            map = std::map<std::string, object *>();

            initialized = true;
        }
    }

public:
    JavaCache() {
        InitializeInstanceFields();
    }
};

}
}
}
}
}