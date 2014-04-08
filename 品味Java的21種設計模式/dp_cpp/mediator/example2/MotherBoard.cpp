#include "MotherBoard.h"

namespace cn {
namespace javass {
namespace dp {
namespace mediator {
namespace example2 {

void MotherBoard::setCdDriver(CDDriver *cdDriver) {
    this->cdDriver = cdDriver;
}

void MotherBoard::setCpu(CPU *cpu) {
    this->cpu = cpu;
}

void MotherBoard::setVideoCard(VideoCard *videoCard) {
    this->videoCard = videoCard;
}

void MotherBoard::setSoundCard(SoundCard *soundCard) {
    this->soundCard = soundCard;
}

void MotherBoard::changed(Colleague *colleague) {
    if (colleague == cdDriver) {
        //表示光驱读取数据了
        this->opeCDDriverReadData(static_cast<CDDriver *>(colleague));
    } else if (colleague == cpu) {
        //表示CPU处理完了
        this->opeCPU(static_cast<CPU *>(colleague));
    }
}

void MotherBoard::opeCDDriverReadData(CDDriver *cd) {
    //1：先获取光驱读取的数据
    std::string data = cd->getData();
    //2：把这些数据传递给CPU进行处理
    this->cpu->executeData(data);
}

void MotherBoard::opeCPU(CPU *cpu) {
    //1：先获取CPU处理过后的数据
    std::string videoData = cpu->getVideoData();
    std::string soundData = cpu->getSoundData();
    //2：把这些数据传递给显卡和声卡展示出来
    this->videoCard->showData(videoData);
    this->soundCard->soundData(soundData);
}
}
}
}
}
}
