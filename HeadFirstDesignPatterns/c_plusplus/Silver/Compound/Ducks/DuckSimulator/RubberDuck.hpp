#ifndef	_HFDP_CPP_COMPOUND_DUCKS_RUBBER_DUCK_HPP_
#define _HFDP_CPP_COMPOUND_DUCKS_RUBBER_DUCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Ducks {

class RubberDuck : public Quackable {

	public: void quack() const {
		std::cout << "Squeak" << std::endl;
	}
};

} // namespace Ducks
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif