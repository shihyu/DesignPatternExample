#ifndef	_HFDP_CPP_STRATEGY_FLY_WITH_WINGS_HPP_
#define _HFDP_CPP_STRATEGY_FLY_WITH_WINGS_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class FlyWithWings : public FlyBehavior {

	public:	void fly () const {
		std::cout << "I'm flying!!" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif