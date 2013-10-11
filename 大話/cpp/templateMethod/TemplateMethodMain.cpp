#include "TemplateMethodMain.h"

namespace templateMethod {

    void TemplateMethodMain::main(std::string args[]) {
        TestPaper* pa = new TestPaperA();
        pa->question1();
        pa->question2();
        TestPaper* pb = new TestPaperB();
        pb->question1();
        pb->question2();
    }
}