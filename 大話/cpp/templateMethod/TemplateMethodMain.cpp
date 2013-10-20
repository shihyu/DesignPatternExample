#include "TemplateMethodMain.h"

using namespace templateMethod;

int main() {
    TestPaper* pa = new TestPaperA();
    pa->question1();
    pa->question2();
    TestPaper* pb = new TestPaperB();
    pb->question1();
    pb->question2();
    return 0;
}
