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
/// <summary> * 显卡类，一个同事类 </summary>
///
class VideoCard : public Colleague {
public:
    VideoCard(Mediator *mediator);

    ///
    ///  <summary> * 显示视频数据 </summary>
    ///  * <param name="data"> 被显示的数据 </param>
    ///
    virtual void showData(std::string data);

};

}
}
}
}
}