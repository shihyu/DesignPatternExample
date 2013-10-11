#include "SimpleFactoryMain.h"
#include <cstdlib>
#include <iostream>

using namespace std;
using namespace simpleFactory; 

int main() {
    Operation* operAdd = OperationFactory::createOperation('+');
    Operation* operSub = OperationFactory::createOperation('-');
    operAdd->setA(11);
    operAdd->setB(22);
    //puts(operAdd->getResult());
    cout << operAdd->getResult() << endl;
    operSub->setA(11);
    operSub->setB(22);
    cout << operSub->getResult() << endl;
    return 0;
}
