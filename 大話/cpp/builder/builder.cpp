#include <string>
#include <iostream>

class PersonBuilder {

public:
    virtual void createHead() = 0;
    virtual void createBody() = 0;
    virtual void createArm() = 0;
    virtual void createLeg() = 0;
};

class PersonDirector {

private:
    PersonBuilder *pb;

public:
    PersonDirector(PersonBuilder *pb);

    virtual void createPerson();
};

class ThinPersonBuilder : public PersonBuilder {

public:
    virtual void createArm();

    virtual void createBody();

    virtual void createHead();

    virtual void createLeg();

};

class FatPersonBuilder : public PersonBuilder {

public:
    virtual void createArm();

    virtual void createBody();

    virtual void createHead();

    virtual void createLeg();

};


class BuilderMain {

    ///
    ///   * <param name="args"> </param>
    ///
    static void main(std::string args[]);

};

void ThinPersonBuilder::createArm() {
    std::cout << "Create A Thin Arm!" << std::endl;
}

void ThinPersonBuilder::createBody() {
    std::cout << "Create A Thin Body!" << std::endl;
}

void ThinPersonBuilder::createHead() {
    std::cout << "Create A Thin Head!" << std::endl;
}

void ThinPersonBuilder::createLeg() {
    std::cout << "Create A Thin Leg!" << std::endl;
}


void FatPersonBuilder::createArm() {
    std::cout << "Create A Fat Arm!" << std::endl;
}

void FatPersonBuilder::createBody() {
    std::cout << "Create A Fat Arm!" << std::endl;
}

void FatPersonBuilder::createHead() {
    std::cout << "Create A Fat Arm!" << std::endl;
}

void FatPersonBuilder::createLeg() {
    std::cout << "Create A Fat Arm!" << std::endl;
}


PersonDirector::PersonDirector(PersonBuilder *pb) {
    this->pb = pb;
}

void PersonDirector::createPerson() {
    pb->createHead();
    pb->createBody();
    pb->createArm();
    pb->createLeg();
}

int main() {
    PersonBuilder *thin = new ThinPersonBuilder();
    PersonBuilder *fat = new FatPersonBuilder();
    PersonDirector *pd = new PersonDirector(thin);
    pd->createPerson();
    pd = new PersonDirector(fat);
    pd->createPerson();
    return 0;
}

