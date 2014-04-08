#pragma once

#include "GoodsSaleEbi.h"
#include "SaleModel.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example6 {

class GoodsSaleEbo : public GoodsSaleEbi {

public:
    virtual bool sale(std::string user, std::string customer, SaleModel *saleModel);
};

}
}
}
}
}