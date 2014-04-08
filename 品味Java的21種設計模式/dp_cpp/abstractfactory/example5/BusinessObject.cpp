#include "BusinessObject.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example5 {

void BusinessObject::main(std::string args[]) {
    //创建DAO的抽象工厂
    DAOFactory *df = new RdbDAOFactory();
    //通过抽象工厂来获取需要的DAO接口
    OrderMainDAO *mainDAO = df->createOrderMainDAO();
    OrderDetailDAO *detailDAO = df->createOrderDetailDAO();
    //调用DAO来完成数据存储的功能
    mainDAO->saveOrderMain();
    detailDAO->saveOrderDetail();
}
}
}
}
}
}
