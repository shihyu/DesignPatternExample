#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace singleton {
namespace example6 {

class Singleton {
    //4：定义一个静态变量来存储创建好的类实例
    //直接在这里创建类实例，只会创建一次
private:
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static Singleton instance = new Singleton();
    //1：私有化构造方法，好在内部控制创建实例的数目
    Singleton();
    //2：定义一个方法来为客户端提供类实例
    //3：这个方法需要定义成类方法，也就是要加static
public:
    static Singleton getInstance();
};

}
}
}
}
}