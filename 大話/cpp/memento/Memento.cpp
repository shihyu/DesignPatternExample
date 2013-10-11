#include "Memento.h"

namespace memento {

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
}