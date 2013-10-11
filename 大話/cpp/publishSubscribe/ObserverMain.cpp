#include "ObserverMain.h"

namespace publishSubscribe {

    void ObserverMain::main(std::string args[]) {
        ScretarySubject* scretary = new ScretarySubject();
        scretary->setSubjectState("the boss is come back,work hardly!");
        LincolnObserver* lin = new LincolnObserver("Lincoln", scretary);
        scretary->attach(lin);
        scretary->notifyObservers();
    }
}