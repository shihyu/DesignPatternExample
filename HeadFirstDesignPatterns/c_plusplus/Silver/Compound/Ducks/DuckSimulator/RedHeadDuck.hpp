#ifndef	_HFDP_CPP_COMPOUND_DUCKS_REDHEAD_DUCK_HPP_
#define _HFDP_CPP_COMPOUND_DUCKS_REDHEAD_DUCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Ducks {

class RedheadDuck : public Quackable {

	public: void quack() const {
		std::cout << "Quack" << std::endl;
	}
};

} // namespace Ducks
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif