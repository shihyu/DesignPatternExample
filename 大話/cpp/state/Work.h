#pragma once

#include "State.h"
#include "BeforeNoonState.h"

namespace state {

    class Work {
    private:
        int hour;
        bool isFinish;
        State* state;

    public:
        Work();
        virtual int getHour();

        virtual void setHour(int hour);

        virtual bool isFinish();

        virtual State* getState();

        virtual void setState(State* state);

        virtual void setFinish(bool isFinish);

        virtual void writeprogram();
    };

}