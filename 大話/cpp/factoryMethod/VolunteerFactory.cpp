#include "VolunteerFactory.h"

namespace factoryMethod {

LeiFeng *VolunteerFactory::createLeiFeng() {
    return new Volunteer();
}
}