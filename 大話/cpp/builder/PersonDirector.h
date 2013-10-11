#pragma once

#include "PersonBuilder.h"

namespace builder {

    class PersonDirector {

    private:
        PersonBuilder* pb;

    public:
        PersonDirector(PersonBuilder* pb);

        virtual void createPerson();
    };

}