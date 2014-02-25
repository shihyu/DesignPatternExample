#include <string>
#include <iostream>

class GiveGift {
public:
    virtual void giveDolls() = 0;
    virtual void giveFlowers() = 0;
    virtual void giveChocolate() = 0;
};

class SchoolGirl {

private:
    std::string name;

public:
    SchoolGirl();

    SchoolGirl(std::string name);

    virtual std::string getName();

    virtual void setName(std::string name);
};

class Pursuit : public GiveGift {
public:
    SchoolGirl* mm;

    Pursuit(SchoolGirl* mm);

    virtual void giveChocolate();

    virtual void giveDolls();

    virtual void giveFlowers();

};

class Proxy : public GiveGift {
public:
    Pursuit* gg;

    Proxy(SchoolGirl* mm);

    virtual void giveChocolate();

    virtual void giveDolls();

    virtual void giveFlowers();

};

Pursuit::Pursuit(SchoolGirl* mm) {
    this->mm = mm;
}

void Pursuit::giveChocolate() {
    std::cout << mm->getName() + "give you a chocolate" << std::endl;
}

void Pursuit::giveDolls() {
    std::cout << mm->getName() + "give you a doll" << std::endl;
}

void Pursuit::giveFlowers() {
    std::cout << mm->getName() + "give you a Flower" << std::endl;
}

SchoolGirl::SchoolGirl() {
}

SchoolGirl::SchoolGirl(std::string name) {
    this->name = name;
}

std::string SchoolGirl::getName() {
    return name;
}

void SchoolGirl::setName(std::string name) {
    this->name = name;
}

Proxy::Proxy(SchoolGirl* mm) {
    this->gg = new Pursuit(mm);
}

void Proxy::giveChocolate() {
    gg->giveChocolate();
}

void Proxy::giveDolls() {
    gg->giveDolls();
}

void Proxy::giveFlowers() {
    gg->giveFlowers();
}

int main() {
    SchoolGirl* mm = new SchoolGirl("jin ");
    Proxy* agent = new Proxy(mm);
    agent->giveChocolate();
    agent->giveFlowers();
    return 0;
}

