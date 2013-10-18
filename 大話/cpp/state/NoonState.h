#include "State.h"
//#include "Work.h"
//#include "AfternoonState.h"

namespace state {
    class Work;
    class NoonState : public State {
    public:
        virtual void writeProgram(Work* w);

    };
}
