#ifndef	_HFDP_CPP_STRATEGY_MODEL_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_MODEL_DUCK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class ModelDuck : public Duck {

	public:	ModelDuck() : Duck( new FlyNoWay(), new FakeQuack() ) {
	}
	public: void display() const {
		std::cout << "I'm a model duck" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif