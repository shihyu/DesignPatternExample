#include "BuilderMain.h"

namespace builder {

    void BuilderMain::main(std::string args[]) {
        PersonBuilder* thin = new ThinPersonBuilder();
        PersonBuilder* fat = new FatPersonBuilder();
        PersonDirector* pd = new PersonDirector(thin);
        pd->createPerson();
        pd = new PersonDirector(fat);
        pd->createPerson();
    }
}