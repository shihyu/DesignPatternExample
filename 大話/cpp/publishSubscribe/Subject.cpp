#include "Subject.h"

namespace publishSubscribe {

    void Subject::attach(Observer* ob) {
        this->observerList.push_back(ob);
    }

    void Subject::detach(Observer* ob) {
        this->observerList.remove(ob);
    }

    void Subject::notifyObservers() {
        for (std::vector<Observer*>::const_iterator o = observerList.begin(); o != observerList.end(); ++o) {
            (*o)->update();
        }
    }
}