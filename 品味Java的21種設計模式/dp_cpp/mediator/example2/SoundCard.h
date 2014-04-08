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
/// <summary> * 声卡类，一个同事类 </summary>
///
class SoundCard : public Colleague {
public:
    SoundCard(Mediator *mediator);

    ///
    ///  <summary> * 按照声频数据发出声音 </summary>
    ///  * <param name="data"> 发出声音的数据 </param>
    ///
    virtual void soundData(std::string data);

};

}
}
}
}
}