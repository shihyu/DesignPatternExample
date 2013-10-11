#include "BossSubject.h"

namespace publishSubscribe {

    std::string BossSubject::getSubjectState() {
        return subjectState;
    }

    void BossSubject::setSubjectState(std::string subjectState) {
        this->subjectState = subjectState;
    }
}