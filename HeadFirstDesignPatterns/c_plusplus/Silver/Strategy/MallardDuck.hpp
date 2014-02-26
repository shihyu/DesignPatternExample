#ifndef	_HFDP_CPP_STRATEGY_MALLARD_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_MALLARD_DUCK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class MallardDuck : public Duck {

	public:	MallardDuck() : Duck( new FlyWithWings(), new Quack() ) {
	}
	public: void display() const {
		std::cout << "I'm a real Mallard duck" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif