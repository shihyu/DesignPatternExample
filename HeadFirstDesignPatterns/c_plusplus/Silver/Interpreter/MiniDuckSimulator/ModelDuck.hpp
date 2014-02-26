#ifndef	_HFDP_CPP_INTERPRETER_MODEL_DUCK_HPP_
#define _HFDP_CPP_INTERPRETER_MODEL_DUCK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class ModelDuck : public Duck {

	public:	ModelDuck() : Duck( new FlyNoWay(), new FakeQuack() ) {
	}
	public: void display() const {
		std::cout << "I'm a model duck" << std::endl;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif