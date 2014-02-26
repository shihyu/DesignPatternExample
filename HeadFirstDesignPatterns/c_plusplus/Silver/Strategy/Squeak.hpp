#ifndef	_HFDP_CPP_STRATEGY_SQUEAK_HPP_
#define _HFDP_CPP_STRATEGY_SQUEAK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class Squeak : public QuackBehavior {

	public:	void quack () const {
		std::cout << "Squeak" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif