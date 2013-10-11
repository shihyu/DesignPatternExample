#include "PrototypeMain.h"

namespace prototype {

    void PrototypeMain::main(std::string args[]) {
        Resume* linResume = new Resume("Lincoln");
        linResume->setAge("23");
        linResume->setSex("M");
        //JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
        puts(linResume->toString());
        Resume* linResume2 = linResume->clone();
        linResume2->setAge("22");
        //JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
        puts(linResume2->toString());
    }
}