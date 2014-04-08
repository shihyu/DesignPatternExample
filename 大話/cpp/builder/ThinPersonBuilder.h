#pragma once

#include "PersonBuilder.h"

namespace builder {

class ThinPersonBuilder : public PersonBuilder {

public:
    virtual void createArm();

    virtual void createBody();

    virtual void createHead();

    virtual void createLeg();

};

}