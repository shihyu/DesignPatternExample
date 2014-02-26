#ifndef	_HFDP_CPP_STRATEGY_FAKE_QUACK_HPP_
#define _HFDP_CPP_STRATEGY_FAKE_QUACK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class FakeQuack : public QuackBehavior {

	public:	void quack () const {
		std::cout << "Qwak" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif