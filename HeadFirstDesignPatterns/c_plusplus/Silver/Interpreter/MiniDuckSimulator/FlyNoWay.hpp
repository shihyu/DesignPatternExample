#ifndef	_HFDP_CPP_INTERPRETER_FLY_NO_WAY_WINGS_HPP_
#define _HFDP_CPP_INTERPRETER_FLY_NO_WAY_WINGS_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class FlyNoWay : public FlyBehavior {

	public: void fly () const {
		std::cout << "I can't fly" << std::endl;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif