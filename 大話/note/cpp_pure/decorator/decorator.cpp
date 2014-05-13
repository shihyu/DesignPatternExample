#include <string>
#include <iostream>
#include <string>

class Person {
private:
    std::string name;
public:
    Person();
    Person(std::string name);

    virtual void show();
    virtual std::string getName();
    virtual void setName(std::string name);
};

class Finery : public Person {
private:
    Person* component;

public:
    virtual void decorate(Person* component);

    virtual void show();
};

class Sneaker : public Finery {

public:
    virtual void show();
};

class Hat : public Finery {

public:
    virtual void show();
};

class TShirt : public Finery {

public:
    virtual void show();
};

class DecoraterMain {

    ///
    ///   * <param name="args"> </param>
    ///
    static void main(std::string args[]);

};

void Hat::show() {
    std::cout << " red hat " << std::endl;
    Finery::show();
}

void TShirt::show() {
    std::cout << " T-Shirt " << std::endl;
    Finery::show();
}

void Sneaker::show() {
    std::cout << " sneaker " << std::endl;
    Finery::show();
}


void Finery::decorate(Person* component) {
    this->component = component;
}

void Finery::show() {
    if (component != 0) {
        component->show();
    }
}

Person::Person() {
}

Person::Person(std::string name) {
    this->name = name;
}

void Person::show() {
    std::cout << " decorated guy " + this->name;
}

std::string Person::getName() {
    return name;
}

void Person::setName(std::string name) {
    this->name = name;
}

int main() {
    Person* lin = new Person("Lincoln");
    std::cout << "The first show:" << std::endl;
    Sneaker* s = new Sneaker();
    Hat* h = new Hat();
    s->decorate(lin);
    h->decorate(s);
    h->show();
    return 0;
}

