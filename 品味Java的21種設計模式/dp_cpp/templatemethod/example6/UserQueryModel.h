#pragma once

#include "UserModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example6 {
///
/// <summary> * 描述查询用户的条件数据的模型 </summary>
///
class UserQueryModel : public UserModel {
    ///
    ///  <summary> * 年龄是一个区间查询，也就是年龄查询的条件可以是：
    ///  * age >= 条件值1  and  age <= 条件值2
    ///  * 把UserModel中的age当作条件值1，
    ///  * 这里定义的age2当作条件值2 </summary>
    ///
private:
    int age2;

public:
    virtual int getAge2();

    virtual void setAge2(int age2);
};

}
}
}
}
}