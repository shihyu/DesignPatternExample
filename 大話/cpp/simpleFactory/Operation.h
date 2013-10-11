#pragma once

namespace simpleFactory {

    class Operation {
    protected:
        int a;
        int b;
    public:
        virtual int getA();
        virtual void setA(int a);
        virtual int getB();
        virtual void setB(int b);

        virtual int getResult();
    };

}