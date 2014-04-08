#include "LincolnObserver.h"

namespace publishSubscribe {

LincolnObserver::LincolnObserver(std::string name, ScretarySubject *sub) {
    this->name = name;
    this->sub = sub;
}

std::string LincolnObserver::getName() {
    return name;
}

void LincolnObserver::setName(std::string name) {
    this->name = name;
}

std::string LincolnObserver::getStatus() {
    return status;
}

void LincolnObserver::setStatus(std::string status) {
    this->status = status;
}

ScretarySubject *LincolnObserver::getSub() {
    return sub;
}

void LincolnObserver::setSub(ScretarySubject *sub) {
    this->sub = sub;
}

void LincolnObserver::update() {
    status = sub->getSubjectState();
    puts("The new status of " + this->name + " is " + this->status);
}
}