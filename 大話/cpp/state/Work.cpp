#include "Work.h"
#include "State.h"
#include "BeforeNoonState.h"


namespace state {

Work::Work() {
    this->state = new BeforeNoonState();
}

int Work::getHour() {
    return hour;
}

void Work::setHour(int hour) {
    this->hour = hour;
}

bool Work::isFinish() {
    return mIsFinish;
}

State *Work::getState() {
    return state;
}

void Work::setState(State *state) {
    this->state = state;
}

void Work::setFinish(bool isFinish) {
    this->mIsFinish = isFinish;
}

void Work::writeprogram() {
    this->state->writeProgram(this);
}
}
