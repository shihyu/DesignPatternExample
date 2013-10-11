#include "FinanceDepartment.h"

namespace composite {

    FinanceDepartment::FinanceDepartment(std::string name) : Company(name) {
    }

    void FinanceDepartment::add(composite::Company* c) {
    }

    void FinanceDepartment::display(int depth) {
        puts("-" + this->getName());
    }

    void FinanceDepartment::lineOfDuty() {
        puts(this->getName() + "All the things about Finance!");
    }

    void FinanceDepartment::remove(composite::Company* c) {
    }
}