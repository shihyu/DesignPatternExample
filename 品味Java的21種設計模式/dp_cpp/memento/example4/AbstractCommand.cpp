#include "AbstractCommand.h"

namespace cn {
namespace javass {
namespace dp {
namespace memento {
namespace example4 {

void AbstractCommand::setOperation(OperationApi *operation) {
    this->operation = operation;
}

Memento *AbstractCommand::createMemento() {
    return this->operation->createMemento();
}

void AbstractCommand::redo(Memento *m) {
    this->operation->setMemento(m);
}

void AbstractCommand::undo(Memento *m) {
    this->operation->setMemento(m);
}
}
}
}
}
}
