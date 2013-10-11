#pragma once

#include "TestPaper.h"

namespace templateMethod {

    class TestPaperB : public TestPaper {
    public:
        virtual void answer1();

        virtual void answer2();
    };

}