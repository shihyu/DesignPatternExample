#pragma once

#include "DAOFactory.h"
#include "OrderDetailDAO.h"
#include "XmlDetailDAOImpl.h"
#include "OrderMainDAO.h"
#include "XmlMainDAOImpl.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example5 {

class XmlDAOFactory : public DAOFactory {
public:
    virtual OrderDetailDAO *createOrderDetailDAO();
    virtual OrderMainDAO *createOrderMainDAO();
};
}
}
}
}
}