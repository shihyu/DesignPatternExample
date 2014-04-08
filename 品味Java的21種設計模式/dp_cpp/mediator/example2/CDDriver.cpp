#include "CDDriver.h"

namespace cn {
namespace javass {
namespace dp {
namespace mediator {
namespace example2 {

CDDriver::CDDriver(Mediator *mediator) : Colleague(mediator) {
    InitializeInstanceFields();
}

std::string CDDriver::getData() {
    return this->data;
}

void CDDriver::readCD() {
    //逗号前是视频显示的数据，逗号后是声音
    this->data = "设计模式,值得好好研究";
    //通知主板，自己的状态发生了改变
    this->getMediator()->changed(this);
}
}
}
}
}
}
