#include "RequestModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example5 {

RequestModel::RequestModel(std::string type) {
    this->type = type;
}

std::string RequestModel::getType() {
    return type;
}
}
}
}
}
}
