#ifndef	_HFDP_CPP_ADAPTER_MALLARD_DUCK_HPP_
#define _HFDP_CPP_ADAPTER_MALLARD_DUCK_HPP_

#include "Ducks.hpp"

namespace HeadFirstDesignPatterns {
namespace Adapter {
namespace Ducks {

class MallardDuck : public Duck {

 	public: void fly() const {
		std::cout << "I'm flying" << std::endl;
	}
	public: void quack() const {
		std::cout << "Quack" << std::endl;
	}
};

} // namespace Ducks
} // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
