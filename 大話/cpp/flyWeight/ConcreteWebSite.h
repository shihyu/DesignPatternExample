#pragma once

#include "WebSite.h"
#include "User.h"
#include <string>

namespace flyWeight {

class ConcreteWebSite : public WebSite {
private:
    std::string name;

public:
    ConcreteWebSite(std::string name);

    virtual void use(User *u);

    virtual std::string getName();

    virtual void setName(std::string name);

};

}