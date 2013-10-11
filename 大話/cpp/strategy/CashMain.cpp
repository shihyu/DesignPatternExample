#include "CashMain.h"

namespace strategy {

    void CashMain::main(std::string args[]) {
        double price = 100.0;
        double num = 10;
        std::string s = "normal";
        CashContext* cc = new CashContext(s);
        std::cout::put(cc->getCash(price * num));
    }
}