#pragma once

#include "Company.h"
#include <string>
#include <vector>

namespace composite {


class ConcreteCompany : public Company {

private:
    std::vector<Company *> children;

public:
    ConcreteCompany(std::string name);

    virtual void add(composite::Company *c);

    virtual void display(int depth);

    virtual void lineOfDuty();

    virtual void remove(composite::Company *c);


private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            children = std::vector<Company *>();
            initialized = true;
        }
    }
};

}