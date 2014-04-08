#pragma once

#include "SaleHandler.h"
#include "SaleModel.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example6 {
///
/// <summary> * 进行数据逻辑检查的职责对象 </summary>
///
class SaleLogicCheck : public SaleHandler {
public:
    virtual bool sale(std::string user, std::string customer, SaleModel *saleModel);
};
}
}
}
}
}