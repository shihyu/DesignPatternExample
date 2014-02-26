#ifndef	_HFDP_CPP_STRATEGY_REDHEAD_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_REDHEAD_DUCK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class RedHead : public Duck {

	public:	RedHead() : Duck( new FlyWithWings(), new Quack() ) {
	}
	public: void display() const {
		std::cout << "I'm a real Red Headed duck" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif