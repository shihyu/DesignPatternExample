#include "MediatorMain.h"

namespace mediator {

    void MediatorMain::main(std::string args[]) {
        UnionNationsSecurityCouncil* unsc = new UnionNationsSecurityCouncil();
        USA* usa = new USA(unsc);
        Iraq* iraq = new Iraq(unsc);
        unsc->setIraq(iraq);
        unsc->setUsa(usa);
        usa->declare("stop the unclear weapon's development!");
        iraq->declare("I have no nuclear wapons!");
    }
}