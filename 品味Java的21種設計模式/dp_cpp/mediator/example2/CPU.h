#pragma once

#include "Colleague.h"
#include "Mediator.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace mediator {
namespace example2 {
///
/// <summary> * CPU类，一个同事类 </summary>
///
class CPU : public Colleague {
public:
    CPU(Mediator *mediator);
    ///
    ///  <summary> * 分解出来的视频数据 </summary>
    ///
private:
    std::string videoData;
    ///
    ///  <summary> * 分解出来的声音数据 </summary>
    ///
    std::string soundData;
    ///
    ///  <summary> * 获取分解出来的视频数据 </summary>
    ///  * <returns> 分解出来的视频数据 </returns>
    ///
public:
    virtual std::string getVideoData();
    ///
    ///  <summary> * 获取分解出来的声音数据 </summary>
    ///  * <returns> 分解出来的声音数据 </returns>
    ///
    virtual std::string getSoundData();
    ///
    ///  <summary> * 处理数据，把数据分成音频和视频的数据 </summary>
    ///  * <param name="data"> 被处理的数据 </param>
    ///
    virtual void executeData(std::string data);


private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            videoData = "";
            soundData = "";

            initialized = true;
        }
    }
};

}
}
}
}
}