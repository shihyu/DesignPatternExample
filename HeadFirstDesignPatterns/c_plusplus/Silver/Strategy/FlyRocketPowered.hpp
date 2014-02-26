#ifndef	_HFDP_CPP_STRATEGY_FLY_ROCKET_POWERED_HPP_
#define _HFDP_CPP_STRATEGY_FLY_ROCKET_POWERED_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class FlyRocketPowered : public FlyBehavior {

	public:	void fly () const {
		std::cout << "I'm flying with a rocket" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif