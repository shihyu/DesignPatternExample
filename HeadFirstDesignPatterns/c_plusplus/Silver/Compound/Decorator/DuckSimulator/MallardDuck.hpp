#ifndef	_HFDP_CPP_COMPOUND_DECORATOR_MALLARD_DUCK_HPP_
#define _HFDP_CPP_COMPOUND_DECORATOR_MALLARD_DUCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Decorator {

class MallardDuck : public Quackable {

	public: void quack() const {
		std::cout << "Quack" << std::endl;
	}
	public: std::string toString() const {
		return "Mallard Duck";
	}
};

} // namespace Decorator
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif