#include "HRDepartment.h"

namespace composite {

    HRDepartment::HRDepartment(std::string name) : Company(name) {
    }

    void HRDepartment::add(composite::Company* c) {
    }

    void HRDepartment::display(int depth) {
        puts("-" + this->getName());
    }

    void HRDepartment::lineOfDuty() {
        puts(this->getName() + " recruitment and training!");
    }

    void HRDepartment::remove(composite::Company* c) {
    }
}