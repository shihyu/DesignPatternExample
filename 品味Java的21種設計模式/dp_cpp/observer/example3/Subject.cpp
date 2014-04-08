#include "Subject.h"

namespace cn {
namespace javass {
namespace dp {
namespace observer {
namespace example3 {

void Subject::attach(Observer *reader) {
    readers.push_back(reader);
}

void Subject::detach(Observer *reader) {
    readers.remove(reader);
}

void Subject::notifyObservers(std::string content) {
    for (std::vector<Observer *>::const_iterator reader = readers.begin(); reader != readers.end(); ++reader) {
        (*reader)->update(content);
    }
}
}
}
}
}
}
