#ifndef	_HFDP_CPP_COMPOUND_DECORATOR_RUBBER_DUCK_HPP_
#define _HFDP_CPP_COMPOUND_DECORATOR_RUBBER_DUCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Decorator {

class RubberDuck : public Quackable {

	public: void quack() const {
		std::cout << "Squeak" << std::endl;
	}
	public: std::string toString() const {
		return "Rubber Duck";
	}
};

} // namespace Decorator
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif