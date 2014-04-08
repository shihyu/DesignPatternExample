#include "UndergraduateFactory.h"

namespace factoryMethod {

LeiFeng *UndergraduateFactory::createLeiFeng() {
    return new Graduate();
}
}