#pragma once

#include "Company.h"
#include <string>

namespace composite {

    class HRDepartment : public Company {

    public:
        HRDepartment(std::string name);

        virtual void add(composite::Company* c);

        virtual void display(int depth);

        virtual void lineOfDuty();

        virtual void remove(composite::Company* c);

    };

}