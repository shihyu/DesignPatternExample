#pragma once

namespace builder {

    class PersonBuilder {

    public:
        virtual void createHead() = 0;
        virtual void createBody() = 0;
        virtual void createArm() = 0;
        virtual void createLeg() = 0;
    };

}