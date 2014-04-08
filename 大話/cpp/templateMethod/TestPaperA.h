#pragma once

#include "TestPaper.h"

namespace templateMethod {

class TestPaperA : public TestPaper {

public:
    virtual void answer1();

    virtual void answer2();
};

}