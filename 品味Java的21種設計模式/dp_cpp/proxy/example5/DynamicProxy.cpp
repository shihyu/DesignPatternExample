#include "DynamicProxy.h"

namespace cn {
namespace javass {
namespace dp {
namespace proxy {
namespace example5 {

OrderApi *DynamicProxy::getProxyInterface(Order *order) {
    //设置被代理的对象，好方便invoke里面的操作
    this->order = order;
    //把真正的订单对象和动态代理关联起来
    OrderApi *orderApi = static_cast<OrderApi *>(Proxy::newProxyInstance(order->getClass()->getClassLoader(), order->getClass()->getInterfaces(), this));
    return orderApi;
}

object *DynamicProxy::invoke(object *proxy, Method *method, object args[]) throw(Throwable) {
    //如果是调用setter方法就需要检查权限
    //JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'startsWith' method:
    if (method->getName()->startsWith("set")) {
        //如果不是创建人，那就不能修改
        if (order->getOrderUser() != 0 && order->getOrderUser()->equals(args[1])) {
            //可以操作
            return method->invoke(order, args);
        } else {
            puts("对不起，" + args[1] + "，您无权修改本订单中的数据");
        }
    } else {
        //不是调用的setter方法就继续运行
        return method->invoke(order, args);
    }

    return 0;
}
}
}
}
}
}
