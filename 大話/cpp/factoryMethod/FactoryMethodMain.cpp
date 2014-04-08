#include "FactoryMethodMain.h"

using namespace factoryMethod;

int main(std::string args[]) {
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
