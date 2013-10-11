#include "ChainOfResponsibilityMain.h"

namespace chainOfResponsibility {

    void ChainOfResponsibilityMain::main(std::string args[]) {
        RequestHandler* handler1 = new ProjectMannager();
        RequestHandler* handler2 = new Director();
        RequestHandler* handler3 = new Manager();
        handler1->setNextHandler(handler2);
        handler2->setNextHandler(handler3);
        Request* req1 = new Request("leave");
        Request* req2 = new Request("finance");
        Request* req3 = new Request("increase salary");
        handler1->handleRequest(req1);
        handler1->handleRequest(req2);
        handler1->handleRequest(req3);
    }
}