#include "XmlDAOFactory.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example5 {

OrderDetailDAO *XmlDAOFactory::createOrderDetailDAO() {
    return new XmlDetailDAOImpl();
}

OrderMainDAO *XmlDAOFactory::createOrderMainDAO() {
    return new XmlMainDAOImpl();
}
}
}
}
}
}
