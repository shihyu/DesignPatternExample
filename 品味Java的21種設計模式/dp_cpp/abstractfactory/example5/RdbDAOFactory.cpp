#include "RdbDAOFactory.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example5 {

OrderDetailDAO *RdbDAOFactory::createOrderDetailDAO() {
    return new RdbDetailDAOImpl();
}

OrderMainDAO *RdbDAOFactory::createOrderMainDAO() {
    return new RdbMainDAOImpl();
}
}
}
}
}
}
