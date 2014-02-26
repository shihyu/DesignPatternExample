#ifndef	_HFDP_CPP_STRATEGY_QUACK_HPP_
#define _HFDP_CPP_STRATEGY_QUACK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class Quack : public QuackBehavior {

	public: void quack () const {
		std::cout << "Quack" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif