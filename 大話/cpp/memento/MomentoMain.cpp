#include "MomentoMain.h"

namespace memento {

    void MomentoMain::main(std::string args[]) {
        GameRole* mario = new GameRole("Mario");
        mario->init();
        mario->show();
        CareTaker* ct = new CareTaker();
        ct->setMemento(mario->createMemento());
        mario->Fight();
        mario->show();
        mario->backupFromMemento(ct->getMemento());
        mario->show();
    }
}