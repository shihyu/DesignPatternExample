#include "PlayContext.h"

namespace interpreter {

std::string PlayContext::getContext() {
    return context;
}

void PlayContext::setContext(std::string context) {
    this->context = context;
}
}