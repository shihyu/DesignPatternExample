#include "CPU.h"

namespace cn {
namespace javass {
namespace dp {
namespace mediator {
namespace example2 {

CPU::CPU(Mediator *mediator) : Colleague(mediator) {
    InitializeInstanceFields();
}

std::string CPU::getVideoData() {
    return videoData;
}

std::string CPU::getSoundData() {
    return soundData;
}

void CPU::executeData(std::string data) {
    //把数据分解开，前面的是视频数据，后面的是音频数据
    //ORIGINAL LINE: String [] ss = data.split(",");
    //JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
    //JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'split' method:
    std::string *ss = data.split(",");
    this->videoData = ss[0];
    this->soundData = ss[1];
    //通知主板，CPU的工作完成
    this->getMediator()->changed(this);
}
}
}
}
}
}
