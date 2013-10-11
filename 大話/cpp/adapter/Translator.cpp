#include "Translator.h"

namespace adapter {

    Translator::Translator(std::string name) {
        wjzf = new Center(name);
    }

    void Translator::attrack() {
        wjzf->jinggong();
    }

    void Translator::defence() {
        wjzf->fangshou();
    }
}