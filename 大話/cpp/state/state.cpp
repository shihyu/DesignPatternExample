#include <sstream>
#include <iostream>
#include <string>

class Work;

class State {
public:
    virtual void writeProgram(Work *w) = 0;
};

class EveningState : public State {

public:
    virtual void writeProgram(Work *w);

};

class RestState : public State {

public:
    virtual void writeProgram(Work *w);

};

class Work {
private:
    int hour;
    bool mIsFinish;
    State *state;

public:
    Work();

    virtual int getHour();

    virtual void setHour(int hour);

    virtual bool isFinish();

    virtual State *getState();

    virtual void setState(State *state);

    virtual void setFinish(bool isFinish);

    virtual void writeprogram();
};

class BeforeNoonState : public State {

public:
    virtual void writeProgram(Work *w);

};

class SleepState : public State {

public:
    virtual void writeProgram(Work *w);

};



class StateMain {

    ///
    ///   * <param name="args"> </param>
    ///
    static void main(std::string args[]);

};

class Work;
class NoonState : public State {
public:
    virtual void writeProgram(Work *w);

};

class AfternoonState : public State {

public:
    virtual void writeProgram(Work *w);

};

void SleepState::writeProgram(Work *w) {
    std::string s;
    std::stringstream ss;
    ss << w->getHour();
    ss >> s;
    std::cout << "the current time:" + s + "Sleeping!" << std::endl;
}

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


void BeforeNoonState::writeProgram(Work *w) {
    if (w->getHour() < 12) {
        std::string s;
        std::stringstream ss;
        ss << w->getHour();
        ss >> s;
        std::cout << "the current time:" + s + " work hardly!" << std::endl;
    } else {
        w->setState(new NoonState());
        w->writeprogram();
    }
}

void RestState::writeProgram(Work *w) {
    std::string s;
    std::stringstream ss;
    ss << w->getHour();
    ss >> s;
    std::cout << "the current time:" + s + " work finished,rest" << std::endl;
}

void AfternoonState::writeProgram(Work *w) {
    if (w->getHour() < 17) {
        std::string s;
        std::stringstream ss;
        ss << w->getHour();
        ss >> s;
        std::cout <<  "the current time:" + s + "fell better now!" << std::endl;
    } else {
        w->setState(new EveningState());
        w->writeprogram();
    }
}

void NoonState::writeProgram(Work *w) {
    if (w->getHour() < 13) {
        std::string s;
        std::stringstream ss;
        ss << w->getHour();
        ss >> s;
        std::cout << "the current time:" + s + " fell tired ,want to sleep!" << std::endl;
    } else {
        w->setState(new AfternoonState());
        w->writeprogram();
    }
}

void EveningState::writeProgram(Work *w) {
    if (w->isFinish()) {
        w->setState(new RestState());
        w->writeprogram();
    } else {
        if (w->getHour() < 21) {
            std::string s;
            std::stringstream ss;
            ss << w->getHour();
            ss >> s;
            std::cout << "the current time:" + s + " work overtime!how sad!" << std::endl;
        } else {
            w->setState(new SleepState());
            w->writeprogram();
        }
    }
}

int main() {
    Work *today = new Work();
    today->setHour(10);
    today->writeprogram();
    today->setHour(12);
    today->writeprogram();
    today->setHour(13);
    today->writeprogram();
    today->setHour(16);
    today->writeprogram();
    today->setHour(20);
    today->setFinish(true);
    today->writeprogram();
    today->setFinish(false);
    today->setHour(20);
    today->writeprogram();
    today->setHour(22);
    today->writeprogram();
    return 0;
}
