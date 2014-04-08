#include "GameRole.h"
#include <iostream>

namespace memento {

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
}
