#include "FacadeMain.h"

namespace facade {

    void FacadeMain::main(std::string args[]) {
        Fund* fund = new Fund();
        fund->method1();
        fund->method2();
    }
}