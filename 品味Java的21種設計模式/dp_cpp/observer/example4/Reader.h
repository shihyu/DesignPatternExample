#pragma once

#include "NewsPaper.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace observer {
namespace example4 {


///
/// <summary> * 真正的读者，为了简单就描述一下姓名 </summary>
///
class Reader : public java::util::Observer {
    ///
    ///  <summary> * 读者的姓名 </summary>
    ///
private:
    std::string name;
public:
    virtual std::string getName();
    virtual void setName(std::string name);

    virtual void update(Observable *o, object *obj);

};

}
}
}
}
}