#pragma once

#include <string>

namespace interpreter {

    class PlayContext {

    private:
        std::string context;

    public:
        virtual std::string getContext();

        virtual void setContext(std::string context);


    };

}