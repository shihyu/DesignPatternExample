#include "FactoryMethodMain.h"

namespace factoryMethod {

    void FactoryMethodMain::main(std::string args[]) {
        IFactory* factory = new UndergraduateFactory();
        Graduate* student = static_cast<Graduate*>(factory->createLeiFeng());
        student->buyRice();
        student->Wash();
        IFactory* VFactory = new VolunteerFactory();
        Volunteer* volunteer = static_cast<Volunteer*>(VFactory->createLeiFeng());
        volunteer->buyRice();
        volunteer->sweep();
    }
}