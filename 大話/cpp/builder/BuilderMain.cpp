#include "BuilderMain.h"

using namespace builder;

int main() {
    PersonBuilder *thin = new ThinPersonBuilder();
    PersonBuilder *fat = new FatPersonBuilder();
    PersonDirector *pd = new PersonDirector(thin);
    pd->createPerson();
    pd = new PersonDirector(fat);
    pd->createPerson();
    return 0;
}
