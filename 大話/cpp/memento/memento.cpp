#include <string>
#include <iostream>

class Memento {

private:
    int vitality;
    int attrack;
    int defence;

public:
    virtual int getVitality();

    virtual int getAttrack();

    virtual int getDefence();

    Memento();

    Memento(int vit, int attrack, int defence);
};

class CareTaker {

private:
    Memento *memento;

public:
    virtual Memento *getMemento();

    virtual void setMemento(Memento *memento);
};

class GameRole {

private:
    std::string name;
    int vitality;
    int attrack;
    int defence;

public:
    GameRole(std::string name);

    virtual std::string getName();

    virtual void setName(std::string name);

    virtual int getVitality();

    virtual void setVitality(int vitality);

    virtual int getAttrack();

    virtual void setAttrack(int attrack);

    virtual int getDefence();

    virtual void setDefence(int defence);

    virtual void init();

    virtual void Fight();

    virtual void show();

    virtual Memento *createMemento();

    virtual void backupFromMemento(Memento *m);
};

GameRole::GameRole(std::string name) {
    this->name = name;
}

std::string GameRole::getName() {
    return name;
}

void GameRole::setName(std::string name) {
    this->name = name;
}

int GameRole::getVitality() {
    return vitality;
}

void GameRole::setVitality(int vitality) {
    this->vitality = vitality;
}

int GameRole::getAttrack() {
    return attrack;
}

void GameRole::setAttrack(int attrack) {
    this->attrack = attrack;
}

int GameRole::getDefence() {
    return defence;
}

void GameRole::setDefence(int defence) {
    this->defence = defence;
}

void GameRole::init() {
    this->vitality = 100;
    this->attrack = 50;
    this->defence = 30;
}

void GameRole::Fight() {
    this->vitality = 0;
    this->attrack = 0;
    this->defence = 0;
}

void GameRole::show() {
    std::cout <<  "Name: " + name << std::endl;
    std::cout <<  "Vitality: " + this->vitality << std::endl;
    std::cout <<  "Attrack: " + this->attrack << std::endl;
    std::cout <<  "Defence: " + this->defence << std::endl;
}

Memento *GameRole::createMemento() {
    return new Memento(this->vitality, this->attrack, this->defence);
}

void GameRole::backupFromMemento(Memento *m) {
    this->vitality = m->getVitality();
    this->attrack = m->getAttrack();
    this->defence = m->getDefence();
}

Memento *CareTaker::getMemento() {
    return memento;
}

void CareTaker::setMemento(Memento *memento) {
    this->memento = memento;
}

int Memento::getVitality() {
    return vitality;
}

int Memento::getAttrack() {
    return attrack;
}

int Memento::getDefence() {
    return defence;
}

Memento::Memento() {
}

Memento::Memento(int vit, int attrack, int defence) {
    this->vitality = vit;
    this->attrack = attrack;
    this->defence = defence;
}

int main() {
    GameRole *mario = new GameRole("Mario");
    mario->init();
    mario->show();
    CareTaker *ct = new CareTaker();
    ct->setMemento(mario->createMemento());
    mario->Fight();
    mario->show();
    mario->backupFromMemento(ct->getMemento());
    mario->show();
    return 0;
}
