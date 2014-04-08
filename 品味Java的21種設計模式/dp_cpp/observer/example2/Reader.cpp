#include "Reader.h"

namespace cn {
namespace javass {
namespace dp {
namespace observer {
namespace example2 {

void Reader::update(Subject *subject) {
    //这是采用拉的方式
    puts(name + "收到报纸了，阅读先。内容是===" + (static_cast<NewsPaper *>(subject))->getContent());
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
