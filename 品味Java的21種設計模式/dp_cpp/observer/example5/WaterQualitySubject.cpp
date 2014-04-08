#include "WaterQualitySubject.h"

namespace cn {
namespace javass {
namespace dp {
namespace observer {
namespace example5 {

void WaterQualitySubject::attach(WatcherObserver *observer) {
    observers.push_back(observer);
}

void WaterQualitySubject::detach(WatcherObserver *observer) {
    observers.remove(observer);
}
}
}
}
}
}
