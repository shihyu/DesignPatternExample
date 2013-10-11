#pragma once

#include "Memento.h"
#include <string>

namespace memento {

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

        virtual Memento* createMemento();

        virtual void backupFromMemento(Memento* m);
    };

}