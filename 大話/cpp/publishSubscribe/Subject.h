#pragma once

#include "Observer.h"
#include <vector>

namespace publishSubscribe {


class Subject {

private:
    std::vector<Observer *> observerList;

public:
    virtual void attach(Observer *ob);

    virtual void detach(Observer *ob);

    virtual void notifyObservers();

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            observerList = std::vector<Observer *>();
            initialized = true;
        }
    }

public:
    Subject() {
        InitializeInstanceFields();
    }
};

}