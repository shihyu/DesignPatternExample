#pragma once

#include "WatcherObserver.h"
#include "WaterQualitySubject.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace observer {
namespace example5 {
///
/// <summary> * 具体的观察者实现 </summary>
///
class Watcher : public WatcherObserver {
    ///
    ///  <summary> * 职务 </summary>
    ///
private:
    std::string job;

public:
    virtual void update(WaterQualitySubject *subject);

    virtual std::string getJob();

    virtual void setJob(std::string job);
};

}
}
}
}
}