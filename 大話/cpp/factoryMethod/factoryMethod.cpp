#include <string>
#include <iostream>

class LeiFeng {
public:
    virtual void sweep();

    virtual void buyRice();

    virtual void Wash();
};

class IFactory {
public:
    virtual LeiFeng *createLeiFeng() = 0;
};

class VolunteerFactory : public IFactory {
public:
    virtual LeiFeng *createLeiFeng();

};

class Volunteer : public LeiFeng {

};

class UndergraduateFactory : public IFactory {

public:
    virtual LeiFeng *createLeiFeng();

};

class Graduate : public LeiFeng {

};

LeiFeng *VolunteerFactory::createLeiFeng() {
    return new Volunteer();
}


LeiFeng *UndergraduateFactory::createLeiFeng() {
    return new Graduate();
}

void LeiFeng::sweep() {
    std::cout << "sweep" << std::endl;
}

void LeiFeng::buyRice() {
    std::cout << "Buy Rice" << std::endl;
}

void LeiFeng::Wash() {
    std::cout << "Wash" << std::endl;
}

int main() {
    IFactory *factory = new UndergraduateFactory();
    Graduate *student = static_cast<Graduate *>(factory->createLeiFeng());
    //Graduate* student = factory->createLeiFeng();
    student->buyRice();
    student->Wash();
    IFactory *VFactory = new VolunteerFactory();
    Volunteer *volunteer = static_cast<Volunteer *>(VFactory->createLeiFeng());
    volunteer->buyRice();
    volunteer->sweep();
    return 0;
}
