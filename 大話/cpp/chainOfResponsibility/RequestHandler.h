#pragma once

#include "Request.h"

namespace chainOfResponsibility {

    class RequestHandler {

    private:
        RequestHandler* nextHandler;

    public:
        virtual void setNextHandler(RequestHandler* handler);

        virtual void handleRequest(Request* que) = 0;

        virtual RequestHandler* getNextHandler();
    };

}