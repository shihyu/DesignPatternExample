#include <vector>
#include <stdio.h>

class Man;
class Woman;

class Action {
public:
    virtual void getManReflection(Man* m) = 0;
    virtual void getWomanReaction(Woman* w) = 0;
};

class Person {
public:
    virtual void accept(Action* visitor) = 0;
};

class Man : public Person {
public:
    virtual void accept(Action* visitor);
};

class ObjectStructure {
private:
    std::vector<Person*> elements;

public:
    virtual void detach(Person* p);

    virtual void attach(Person* p);

    virtual void display(Action* visitor);

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            elements = std::vector<Person*>();
            initialized = true;
        }
    }

public:
    ObjectStructure() {
        InitializeInstanceFields();
    }
};

class Fail : public Action {
public:
    virtual void getManReflection(Man* m);

    virtual void getWomanReaction(Woman* w);

};

class Woman : public Person {
public:
    virtual void accept(Action* visitor);

};

class Success : public Action {
public:
    virtual void getManReflection(Man* m);

    virtual void getWomanReaction(Woman* w);

};

void Woman::accept(Action* visitor) {
    visitor->getWomanReaction(this);
}

void Fail::getManReflection(Man* m) {
    puts("When a man failed , they will be driken ");
}

void Fail::getWomanReaction(Woman* w) {
    puts("When a woman failed , they will crying! ");
}

void Man::accept(Action* visitor) {
    visitor->getManReflection(this);
}

void ObjectStructure::detach(Person* p) {
    // elements.remove(p);
    for (std::vector<Person*>::iterator it = elements.begin(); it != elements.end();) {
        if (*it == p) {
            it = elements.erase(it);
        } else {
            ++it;
        }
    }
}

void ObjectStructure::attach(Person* p) {
    elements.push_back(p);
}

void ObjectStructure::display(Action* visitor) {
    for (std::vector<Person*>::const_iterator p = elements.begin(); p != elements.end(); ++p) {
        (*p)->accept(visitor);
    }
}

void Success::getManReflection(Man* m) {
    puts("When a man succed , there will be a great women behind him! ");
}

void Success::getWomanReaction(Woman* w) {
    puts("When a woman succed , there will be a bad man behind him! ");
}

int main() {
    ObjectStructure* os = new ObjectStructure();
    Person* man = new Man();
    Person* woman = new Woman();
    os->attach(man);
    os->attach(woman);
    Success* v = new Success();
    os->display(v);
    Fail* f = new Fail();
    os->display(f);
    return 0;
}
