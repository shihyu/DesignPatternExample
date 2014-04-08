#pragma once

#include "RequestHandler.h"
#include "Request.h"

namespace chainOfResponsibility {

class Director : public RequestHandler {

public:
    virtual void handleRequest(Request *que);

};

}