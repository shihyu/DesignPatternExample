#include "Originator.h"

namespace cn {
namespace javass {
namespace dp {
namespace memento {
namespace example2 {

Memento *Originator::createMemento() {
    return new MementoImpl(state);
}

void Originator::setMemento(Memento *memento) {
    MementoImpl *mementoImpl = static_cast<MementoImpl *>(memento);
    this->state = mementoImpl->getState();
}

Originator::MementoImpl::MementoImpl(std::string state) {
    InitializeInstanceFields();
    this->state = state;
}

std::string Originator::MementoImpl::getState() {
    return state;
}
}
}
}
}
}
