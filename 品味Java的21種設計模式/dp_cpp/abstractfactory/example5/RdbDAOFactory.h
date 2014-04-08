#pragma once

#include "DAOFactory.h"
#include "OrderDetailDAO.h"
#include "RdbDetailDAOImpl.h"
#include "OrderMainDAO.h"
#include "RdbMainDAOImpl.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example5 {

class RdbDAOFactory : public DAOFactory {
public:
    virtual OrderDetailDAO *createOrderDetailDAO();
    virtual OrderMainDAO *createOrderMainDAO();
};

}
}
}
}
}