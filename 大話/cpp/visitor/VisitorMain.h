#pragma once

#include "ObjectStructure.h"
#include "Man.h"
#include "Person.h"
#include "Woman.h"
#include "Success.h"
#include "Fail.h"
#include <string>

namespace visitor {

    class VisitorMain {

        ///
        ///   * <param name="args"> </param>
        ///
        static void main(std::string args[]);

    };

}