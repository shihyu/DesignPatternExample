#pragma once

#include <string>

namespace singleton {

class Person {

private:
    std::string name;
    Person *child;

    Person(std::string name);

public:
    virtual Person *createInstance();

    virtual std::string getName();

    virtual void setName(std::string name);
};

}