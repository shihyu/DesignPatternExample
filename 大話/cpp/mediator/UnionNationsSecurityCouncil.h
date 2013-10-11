#pragma once

#include "UnionNations.h"
#include "USA.h"
#include "Iraq.h"
#include "Country.h"
#include <string>

namespace mediator {

    class UnionNationsSecurityCouncil : public UnionNations {

    private:
        USA* usa;
        Iraq* iraq;

    public:
        virtual USA* getUsa();

        virtual void setUsa(USA* usa);

        virtual Iraq* getIraq();

        virtual void setIraq(Iraq* iraq);

        virtual void declare(std::string message, Country* country);

    };

}