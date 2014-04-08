#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace singleton {
namespace example11 {


class Singleton {
    ///
    ///  <summary> * 类级的内部类，也就是静态的成员式内部类，该内部类的实例与外部类的实例没有绑定关系，
    ///  * 而且只有被调用到才会装载，从而实现了延迟加载 </summary>
    ///
private:
    class SingletonHolder {
        ///
        ///      <summary> * 静态初始化器，由JVM来保证线程安全 </summary>
        ///
    private:
        //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
        static Singleton instance = new Singleton();
    };
    ///
    ///  <summary> * 私有化构造方法 </summary>
    ///
private:
    Singleton();

public:
    static Singleton getInstance();
};
}
}
}
}
}