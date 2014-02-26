#ifndef	_HFDP_CPP_INTERPRETER_REDHEAD_DUCK_HPP_
#define _HFDP_CPP_INTERPRETER_REDHEAD_DUCK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class RedHeadDuck : public Duck {

	public:	RedHeadDuck() : Duck( new FlyWithWings(), new Quack() ) {
	}
	public: void display() const {
		std::cout << "I'm a real Red Headed duck" << std::endl;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif