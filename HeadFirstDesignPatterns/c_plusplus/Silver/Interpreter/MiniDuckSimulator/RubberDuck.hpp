#ifndef	_HFDP_CPP_INTERPRETER_RUBBER_DUCK_HPP_
#define _HFDP_CPP_INTERPRETER_RUBBER_DUCK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class RubberDuck : public Duck {

	public:	RubberDuck() : Duck( new FlyNoWay(), new Squeak() ) {
	}
	public: void display() const {
		std::cout << "I'm a rubber duck" << std::endl;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif