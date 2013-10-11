#include "RequestHandler.h"

namespace chainOfResponsibility {

    void RequestHandler::setNextHandler(RequestHandler* handler) {
        this->nextHandler = handler;
    }

    RequestHandler* RequestHandler::getNextHandler() {
        return nextHandler;
    }
}