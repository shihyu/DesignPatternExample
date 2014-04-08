#include "SaleModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example6 {

std::string SaleModel::getGoods() {
    return goods;
}

void SaleModel::setGoods(std::string goods) {
    this->goods = goods;
}

int SaleModel::getSaleNum() {
    return saleNum;
}

void SaleModel::setSaleNum(int saleNum) {
    this->saleNum = saleNum;
}

std::string SaleModel::ToString() {
    return "商品名称=" + goods + ",销售数量=" + saleNum;
}
}
}
}
}
}
