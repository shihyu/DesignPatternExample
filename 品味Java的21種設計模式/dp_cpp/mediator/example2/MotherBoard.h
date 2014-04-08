#pragma once

#include "Mediator.h"
#include "CDDriver.h"
#include "CPU.h"
#include "VideoCard.h"
#include "SoundCard.h"
#include "Colleague.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace mediator {
namespace example2 {
///
/// <summary> * 主板类，实现中介者接口 </summary>
///
class MotherBoard : public Mediator {
    ///
    ///  <summary> * 需要知道要交互的同事类——光驱类 </summary>
    ///
private:
    CDDriver *cdDriver;
    ///
    ///  <summary> * 需要知道要交互的同事类——CPU类 </summary>
    ///
    CPU *cpu;
    ///
    ///  <summary> * 需要知道要交互的同事类——显卡类 </summary>
    ///
    VideoCard *videoCard;
    ///
    ///  <summary> * 需要知道要交互的同事类——声卡类 </summary>
    ///
    SoundCard *soundCard;

public:
    virtual void setCdDriver(CDDriver *cdDriver);
    virtual void setCpu(CPU *cpu);
    virtual void setVideoCard(VideoCard *videoCard);
    virtual void setSoundCard(SoundCard *soundCard);

    virtual void changed(Colleague *colleague);
    ///
    ///  <summary> * 处理光驱读取数据过后与其他对象的交互 </summary>
    ///  * <param name="cd"> 光驱同事对象 </param>
    ///
private:
    void opeCDDriverReadData(CDDriver *cd);
    ///
    ///  <summary> * 处理CPU处理完数据后与其他对象的交互 </summary>
    ///  * <param name="cpu"> CPU同事类 </param>
    ///
    void opeCPU(CPU *cpu);

};

}
}
}
}
}