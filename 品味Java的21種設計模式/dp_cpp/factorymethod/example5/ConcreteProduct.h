#pragma once

#include "Product.h"
#include "Product1.h"
#include "Product2.h"

namespace cn {
namespace javass {
namespace dp {
namespace factorymethod {
namespace example5 {

class ConcreteProduct : public Product {

public:
    virtual void setProduct1(Product1 *p1);

    virtual void setProduct2(Product2 *p2);

};

}
}
}
}
}