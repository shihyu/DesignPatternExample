#include "Facade.h"

namespace cn {
namespace javass {
namespace dp {
namespace facade {
namespace example3 {

void Facade::generate() {
    new Presentation()->generate();
    new Business()->generate();
    new DAO()->generate();
}
}
}
}
}
}
