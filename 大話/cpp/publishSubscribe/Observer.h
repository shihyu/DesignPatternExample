#pragma once

namespace publishSubscribe {

class Observer {

public:
    virtual void update() = 0;
};

}