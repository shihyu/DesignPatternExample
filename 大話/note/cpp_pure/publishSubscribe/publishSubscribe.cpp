#include <vector>
#include <string>
#include <iostream>

class Observer {
public:
    virtual void update() = 0;
};

class Subject {
private:
    std::vector<Observer*> observerList;

public:
    virtual void attach(Observer* ob);

    virtual void detach(Observer* ob);

    virtual void notifyObservers();

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            observerList = std::vector<Observer*>();
            initialized = true;
        }
    }

public:
    Subject() {
        InitializeInstanceFields();
    }
};

class ScretarySubject : public Subject {
private:
    std::string subjectState;

public:
    virtual std::string getSubjectState();

    virtual void setSubjectState(std::string subjectState);

};

class LincolnObserver : public Observer {
private:
    std::string name;
    std::string status;
    ScretarySubject* sub;

public:
    LincolnObserver(std::string name, ScretarySubject* sub);

    virtual std::string getName();

    virtual void setName(std::string name);

    virtual std::string getStatus();

    virtual void setStatus(std::string status);

    virtual ScretarySubject* getSub();

    virtual void setSub(ScretarySubject* sub);

    virtual void update();

};

class BossSubject : public Subject {
private:
    std::string subjectState;

public:
    virtual std::string getSubjectState();

    virtual void setSubjectState(std::string subjectState);
};

std::string BossSubject::getSubjectState() {
    return subjectState;
}

void BossSubject::setSubjectState(std::string subjectState) {
    this->subjectState = subjectState;
}

void Subject::attach(Observer* ob) {
    this->observerList.push_back(ob);
}

void Subject::detach(Observer* ob) {
    // this->observerList.remove(ob);
    for (std::vector<Observer*>::iterator it = observerList.begin(); it != observerList.end();) {
        if (*it == ob) {
            it = observerList.erase(it);
        } else {
            ++it;
        }
    }
}

void Subject::notifyObservers() {
    for (std::vector<Observer*>::const_iterator o = observerList.begin(); o != observerList.end(); ++o) {
        (*o)->update();
    }
}

LincolnObserver::LincolnObserver(std::string name, ScretarySubject* sub) {
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

ScretarySubject* LincolnObserver::getSub() {
    return sub;
}

void LincolnObserver::setSub(ScretarySubject* sub) {
    this->sub = sub;
}

void LincolnObserver::update() {
    status = sub->getSubjectState();
    std::cout << "The new status of " <<  this->name + " is " << this->status << std::endl;
}

std::string ScretarySubject::getSubjectState() {
    return subjectState;
}

void ScretarySubject::setSubjectState(std::string subjectState) {
    this->subjectState = subjectState;
}

int main() {
    ScretarySubject* scretary = new ScretarySubject();
    scretary->setSubjectState("the boss is come back,work hardly!");
    LincolnObserver* lin = new LincolnObserver("Lincoln", scretary);
    scretary->attach(lin);
    scretary->notifyObservers();
    return 0;
}
