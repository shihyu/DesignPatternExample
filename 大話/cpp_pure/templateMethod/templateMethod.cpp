#include <string>
#include <iostream>

class TestPaper {
public:
    virtual void question1();

    virtual void question2();

    virtual void answer1();
    virtual void answer2();
};

class TestPaperA : public TestPaper {
public:
    virtual void answer1();

    virtual void answer2();
};

class TestPaperB : public TestPaper {
public:
    virtual void answer1();

    virtual void answer2();
};

void TestPaperB::answer1() {
    std::cout << "22" << std::endl;
}

void TestPaperB::answer2() {
    std::cout << "66" << std::endl;
}

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

void TestPaperA::answer1() {
    std::cout << "33" << std::endl;
}

void TestPaperA::answer2() {
    std::cout << "55" << std::endl;
}

int main() {
    TestPaper* pa = new TestPaperA();
    pa->question1();
    pa->question2();
    TestPaper* pb = new TestPaperB();
    pb->question1();
    pb->question2();
    return 0;
}
