#include "ConcreteCompany.h"

namespace composite {

ConcreteCompany::ConcreteCompany(std::string name) : Company(name) {
    InitializeInstanceFields();
}

void ConcreteCompany::add(composite::Company *c) {
    children.push_back(c);
}

void ConcreteCompany::display(int depth) {
    puts("-" + this->getName());

    for (std::vector<Company *>::const_iterator c = children.begin(); c != children.end(); ++c) {
        for (int i = 0; i < depth; i++) {
            std::cout::put("--");
        }

        (*c)->display(depth + 2);
    }
}

void ConcreteCompany::lineOfDuty() {
    for (std::vector<Company *>::const_iterator c = children.begin(); c != children.end(); ++c) {
        (*c)->lineOfDuty();
    }
}

void ConcreteCompany::remove(composite::Company *c) {
    children.remove(c);
}
}