#ifndef	_HFDP_CPP_INTERPRETER_FLY_ROCKET_POWERED_HPP_
#define _HFDP_CPP_INTERPRETER_FLY_ROCKET_POWERED_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class FlyRocketPowered : public FlyBehavior {

	public:	void fly () const {
		std::cout << "I'm flying with a rocket" << std::endl;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif