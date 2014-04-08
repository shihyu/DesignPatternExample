#include "SaleHandler.h"

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example6 {

void SaleHandler::setSuccessor(SaleHandler *successor) {
    this->successor = successor;
}
}
}
}
}
}
