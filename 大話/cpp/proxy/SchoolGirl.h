#pragma once

#include <string>

namespace proxy {

class SchoolGirl {

private:
    std::string name;

public:
    SchoolGirl();

    SchoolGirl(std::string name);

    virtual std::string getName();

    virtual void setName(std::string name);
};

}