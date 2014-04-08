#pragma once

#include "Person.h"
#include "Action.h"
#include <vector>

namespace visitor {


class ObjectStructure {

private:
    std::vector<Person *> elements;

public:
    virtual void detach(Person *p);

    virtual void attach(Person *p);

    virtual void display(Action *visitor);

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            elements = std::vector<Person *>();
            initialized = true;
        }
    }

public:
    ObjectStructure() {
        InitializeInstanceFields();
    }
};

}