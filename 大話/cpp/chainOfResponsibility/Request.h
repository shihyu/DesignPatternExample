#pragma once

#include <string>

namespace chainOfResponsibility {

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

}