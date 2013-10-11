#pragma once

#include "PersonBuilder.h"
#include "ThinPersonBuilder.h"
#include "FatPersonBuilder.h"
#include "PersonDirector.h"
#include <string>

namespace builder {

    class BuilderMain {

        ///
        ///   * <param name="args"> </param>
        ///
        static void main(std::string args[]);

    };

}