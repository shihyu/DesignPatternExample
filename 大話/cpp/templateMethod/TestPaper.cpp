#include "TestPaper.h"
#include <iostream>

namespace templateMethod {

    void TestPaper::question1() {
        std::cout << "11+22=";
        answer1();
    }

    void TestPaper::question2() {
        std::cout << "11+44="; 
        answer2();
    }

    void TestPaper::answer1() {
    }

    void TestPaper::answer2() {
    }
}
