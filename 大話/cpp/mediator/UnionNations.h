#ifndef UNIONNATIONS_H_
#define UNIONNATIONS_H_

#include <string>
class Country;

namespace mediator {

class UnionNations {

public:
    virtual void declare(std::string message, Country *country) = 0;
};

}

#endif
