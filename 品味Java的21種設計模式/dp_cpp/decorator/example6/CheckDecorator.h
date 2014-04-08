#pragma once

#include "Decorator.h"
#include "GoodsSaleEbi.h"
#include "SaleModel.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example6 {
///
/// <summary> * 实现权限控制 </summary>
///
class CheckDecorator : public Decorator {
public:
    CheckDecorator(GoodsSaleEbi *ebi);

    virtual bool sale(std::string user, std::string customer, SaleModel *saleModel);
};

}
}
}
}
}