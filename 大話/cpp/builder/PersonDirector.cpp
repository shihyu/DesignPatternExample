#include "PersonDirector.h"

namespace builder {

    PersonDirector::PersonDirector(PersonBuilder* pb) {
        this->pb = pb;
    }

    void PersonDirector::createPerson() {
        pb->createHead();
        pb->createBody();
        pb->createArm();
        pb->createLeg();
    }
}