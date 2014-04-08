#pragma once

#include "PersonBuilder.h"

namespace builder {

class FatPersonBuilder : public PersonBuilder {

public:
    virtual void createArm();

    virtual void createBody();

    virtual void createHead();

    virtual void createLeg();

};

}