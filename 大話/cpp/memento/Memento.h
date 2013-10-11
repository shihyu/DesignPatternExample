#pragma once

namespace memento {

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

}