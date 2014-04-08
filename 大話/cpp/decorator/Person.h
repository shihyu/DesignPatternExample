#pragma once

#include <string>

namespace decorator {

class Person {

private:
    std::string name;
public:
    Person();
    Person(std::string name);

    virtual void show();
    virtual std::string getName();
    virtual void setName(std::string name);
};

}