#pragma once

#include <string>

namespace composite {

class Company {

private:
    std::string name;

public:
    Company(std::string name);

    virtual std::string getName();

    virtual void setName(std::string name);

    virtual void add(Company *c) = 0;

    virtual void remove(Company *c) = 0;

    virtual void display(int depth) = 0;

    virtual void lineOfDuty() = 0;
};

}