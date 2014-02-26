#ifndef	_HFDP_CPP_STRATEGY_MUTE_QUACK_HPP_
#define _HFDP_CPP_STRATEGY_MUTE_QUACK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class MuteQuack : public QuackBehavior {

	public:	void quack () const {
		std::cout << "<< Silence >>" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif