#pragma once

#include "Observer.h"
#include "ScretarySubject.h"
#include <string>

namespace publishSubscribe {

    class LincolnObserver : public Observer {
    private:
        std::string name;
        std::string status;
        ScretarySubject* sub;

    public:
        LincolnObserver(std::string name, ScretarySubject* sub);

        virtual std::string getName();

        virtual void setName(std::string name);

        virtual std::string getStatus();

        virtual void setStatus(std::string status);

        virtual ScretarySubject* getSub();

        virtual void setSub(ScretarySubject* sub);

        virtual void update();

    };

}