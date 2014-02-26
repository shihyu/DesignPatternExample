#ifndef	_HFDP_CPP_INTERPRETER_DECOY_DUCK_HPP_
#define _HFDP_CPP_INTERPRETER_DECOY_DUCK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class DecoyDuck : public Duck {

	public:	DecoyDuck() : Duck( new FlyNoWay(), new MuteQuack() ) {
	}
	public: void display() const {
		std::cout << "I'm a duck Decoy" << std::endl;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif