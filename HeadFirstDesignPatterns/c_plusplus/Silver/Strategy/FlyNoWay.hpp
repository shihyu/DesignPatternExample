#ifndef	_HFDP_CPP_STRATEGY_FLY_NO_WAY_WINGS_HPP_
#define _HFDP_CPP_STRATEGY_FLY_NO_WAY_WINGS_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class FlyNoWay : public FlyBehavior {

	public: void fly () const {
		std::cout << "I can't fly" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif