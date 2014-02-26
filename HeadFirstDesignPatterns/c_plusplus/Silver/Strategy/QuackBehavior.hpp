#ifndef	_HFDP_CPP_STRATEGY_QUACK_BEHAVIOR_HPP_
#define _HFDP_CPP_STRATEGY_QUACK_BEHAVIOR_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class QuackBehavior {

	public: virtual ~QuackBehavior() = 0 {
	};
	public: virtual void quack() const = 0;
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif