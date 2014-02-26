#ifndef	_HFDP_CPP_COMPOUND_COMPOSITE_MALLARD_DUCK_HPP_
#define _HFDP_CPP_COMPOUND_COMPOSITE_MALLARD_DUCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Composite {

class MallardDuck : public Quackable {

	public: void quack() const {
		std::cout << "Quack" << std::endl;
	}
	public: std::string toString() const {
		return "Mallard Duck";
	}
};

} // namespace Composite
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif