#pragma once

#include <string>

namespace flyWeight {

    class User {

    private:
        std::string name;

    public:
        User(std::string name);

        virtual std::string getName();

        virtual void setName(std::string name);
    };

}