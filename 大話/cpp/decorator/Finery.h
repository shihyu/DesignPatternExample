#pragma once

#include "Person.h"

namespace decorator {

class Finery : public Person {
private:
    decorator::Person *component;

public:
    virtual void decorate(decorator::Person *component);

    virtual void show();
};

}