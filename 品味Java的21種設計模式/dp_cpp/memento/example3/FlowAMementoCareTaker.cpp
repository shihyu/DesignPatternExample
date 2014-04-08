#include "FlowAMementoCareTaker.h"

namespace cn {
namespace javass {
namespace dp {
namespace memento {
namespace example3 {

void FlowAMementoCareTaker::saveMemento(FlowAMockMemento *memento) {
    this->memento = memento;
}

FlowAMockMemento *FlowAMementoCareTaker::retriveMemento() {
    return this->memento;
}
}
}
}
}
}
