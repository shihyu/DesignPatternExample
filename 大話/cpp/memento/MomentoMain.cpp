#include "MomentoMain.h"
using namespace memento;

int main() {
    GameRole* mario = new GameRole("Mario");
    mario->init();
    mario->show();
    CareTaker* ct = new CareTaker();
    ct->setMemento(mario->createMemento());
    mario->Fight();
    mario->show();
    mario->backupFromMemento(ct->getMemento());
    mario->show();
    return 0;
}
