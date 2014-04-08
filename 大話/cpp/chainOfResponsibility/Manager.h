#pragma once

#include "RequestHandler.h"
#include "Request.h"

namespace chainOfResponsibility {

class Manager : public RequestHandler {

public:
    virtual void handleRequest(Request *que);

};

}