#pragma once

#include "Person.h"
#include "Action.h"

namespace visitor {

    class Woman : public Person {

    public:
        virtual void accept(Action* visitor);

    };

}