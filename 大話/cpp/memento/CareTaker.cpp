#include "CareTaker.h"

namespace memento {

Memento *CareTaker::getMemento() {
    return memento;
}

void CareTaker::setMemento(Memento *memento) {
    this->memento = memento;
}
}