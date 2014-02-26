#ifndef	_HFDP_CPP_INTERPRETER_FLY_WITH_WINGS_HPP_
#define _HFDP_CPP_INTERPRETER_FLY_WITH_WINGS_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class FlyWithWings : public FlyBehavior {

	public:	void fly () const {
		std::cout << "I'm flying!!" << std::endl;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif