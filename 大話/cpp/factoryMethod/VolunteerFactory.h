#pragma once

#include "IFactory.h"
#include "LeiFeng.h"
#include "Volunteer.h"

namespace factoryMethod {

    class VolunteerFactory : public IFactory {

    public:
        virtual LeiFeng* createLeiFeng();

    };

}