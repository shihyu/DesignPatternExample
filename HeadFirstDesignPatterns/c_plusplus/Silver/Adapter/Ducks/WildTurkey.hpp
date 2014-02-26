#ifndef	_HFDP_CPP_ADAPTER_WILD_TURKEY_HPP_
#define _HFDP_CPP_ADAPTER_WILD_TURKEY_HPP_

#include "Ducks.hpp"

namespace HeadFirstDesignPatterns {
namespace Adapter {
namespace Ducks {

class WildTurkey : public Turkey {

 	public: void fly() const {
		std::cout << "I'm flying a short distance" << std::endl;
	}
	public: void gobble() const {
		std::cout << "Gobble gobble" << std::endl;
	}
};

} // namespace Ducks
} // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
