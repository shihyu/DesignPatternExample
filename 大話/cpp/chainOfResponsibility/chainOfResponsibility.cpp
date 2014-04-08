#include <string>
#include <iostream>

class Request {
private:
    std::string type;
    std::string content;
    int quanlity;

public:
    Request(std::string type);

    virtual std::string getType();

    virtual void setType(std::string type);

    virtual std::string getContent();

    virtual void setContent(std::string content);

    virtual int getQuanlity();

    virtual void setQuanlity(int quanlity);
};

class RequestHandler {
private:
    RequestHandler *nextHandler;

public:
    virtual void setNextHandler(RequestHandler *handler);

    virtual void handleRequest(Request *que) = 0;

    virtual RequestHandler *getNextHandler();
};

class Director : public RequestHandler {
public:
    virtual void handleRequest(Request *que);

};

class Manager : public RequestHandler {
public:
    virtual void handleRequest(Request *que);

};

class ProjectMannager : public RequestHandler {
public:
    virtual void handleRequest(Request *que);
};

void Director::handleRequest(Request *que) {
    if (que->getType() == "finance") {
        std::cout << "Director  agree the finance request" << std::endl;
    } else {
        std::cout << "Director has no right to handle it, Pls ask help from Manager!" << std::endl;
        this->getNextHandler()->handleRequest(que);
    }
}

void ProjectMannager::handleRequest(Request *que) {
    if (que->getType() == "leave") {
        std::cout << "PM  agree the leave request" << std::endl;
    } else {
        std::cout << "PM has no right to handle it, Pls ask help from Director!" << std::endl;
        this->getNextHandler()->handleRequest(que);
    }
}

Request::Request(std::string type) {
    this->type = type;
}

std::string Request::getType() {
    return type;
}

void Request::setType(std::string type) {
    this->type = type;
}

std::string Request::getContent() {
    return content;
}

void Request::setContent(std::string content) {
    this->content = content;
}

int Request::getQuanlity() {
    return quanlity;
}

void Request::setQuanlity(int quanlity) {
    this->quanlity = quanlity;
}

void Manager::handleRequest(Request *que) {
    if (que->getType() == "increase salary") {
        std::cout << "Manager  agree the salary increase request" << std::endl;
    } else {
        std::cout << "Director has no right to handle it, Pls ask help from Manager!" << std::endl;
        this->getNextHandler()->handleRequest(que);
    }
}

void RequestHandler::setNextHandler(RequestHandler *handler) {
    this->nextHandler = handler;
}

RequestHandler *RequestHandler::getNextHandler() {
    return nextHandler;
}

int main(void) {
    RequestHandler *handler1 = new ProjectMannager();
    RequestHandler *handler2 = new Director();
    RequestHandler *handler3 = new Manager();
    handler1->setNextHandler(handler2);
    handler2->setNextHandler(handler3);
    Request *req1 = new Request("leave");
    Request *req2 = new Request("finance");
    Request *req3 = new Request("increase salary");
    handler1->handleRequest(req1);
    handler1->handleRequest(req2);
    handler1->handleRequest(req3);
    return 0;
}
