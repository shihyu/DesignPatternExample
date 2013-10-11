#pragma once

#include "User.h"

namespace flyWeight {

    class WebSite {

    public:
        virtual void use(User* u) = 0;
    };

}