#include "Reader.h"

namespace cn {
namespace javass {
namespace dp {
namespace observer {
namespace example3 {

void Reader::update(std::string content) {
    //这是采用推的方式
    puts(name + "收到报纸了，阅读先。内容是===" + content);
}

std::string Reader::getName() {
    return name;
}

void Reader::setName(std::string name) {
    this->name = name;
}
}
}
}
}
}
