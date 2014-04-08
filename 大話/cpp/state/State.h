#ifndef _STATE_H_
#define _STATE_H_
//#include "Work.h"

namespace state {
class Work;

class State {

public:
    virtual void writeProgram(Work *w) = 0;
};

}
#endif
