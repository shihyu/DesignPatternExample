#pragma once

#include "Memento.h"

namespace memento {

class CareTaker {

private:
    Memento *memento;

public:
    virtual Memento *getMemento();

    virtual void setMemento(Memento *memento);
};

}