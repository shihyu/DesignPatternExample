#pragma once

#include "UnionNations.h"

namespace mediator {

    class Country {
    private:
        UnionNations* un;

    public:
        Country(UnionNations* un);

        virtual UnionNations* getUn();

        virtual void setUn(UnionNations* un);

    };

}