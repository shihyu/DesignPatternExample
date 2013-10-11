#include "ObjectStructure.h"

namespace visitor {

    void ObjectStructure::detach(Person* p) {
        elements.remove(p);
    }

    void ObjectStructure::attach(Person* p) {
        elements.push_back(p);
    }

    void ObjectStructure::display(Action* visitor) {
        for (std::vector<Person*>::const_iterator p = elements.begin(); p != elements.end(); ++p) {
            (*p)->accept(visitor);
        }
    }
}