#include "ScretarySubject.h"

namespace publishSubscribe {

std::string ScretarySubject::getSubjectState() {
    return subjectState;
}

void ScretarySubject::setSubjectState(std::string subjectState) {
    this->subjectState = subjectState;
}
}