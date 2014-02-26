#ifndef	_HFDP_CPP_STRATEGY_FLY_BEHAVIOR_HPP_
#define _HFDP_CPP_STRATEGY_FLY_BEHAVIOR_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class FlyBehavior {

	public: virtual ~FlyBehavior() = 0 {
	};
	public: virtual void fly () const = 0;
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif