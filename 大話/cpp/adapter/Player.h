#pragma once

#include <string>

namespace adapter {

class Player {

private:
    std::string name;

public:
    virtual std::string getName();

    virtual void setName(std::string name);

    virtual void attrack();

    virtual void defence();
};

}