#include "Caretaker.h"

namespace cn {
namespace javass {
namespace dp {
namespace memento {
namespace example2 {

void Caretaker::saveMemento(Memento *memento) {
    this->memento = memento;
}

Memento *Caretaker::retriveMemento() {
    return this->memento;
}
}
}
}
}
}
