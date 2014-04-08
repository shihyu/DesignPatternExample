#include "Request.h"

namespace chainOfResponsibility {

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
}