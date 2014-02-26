#ifndef	_HFDP_CPP_COMPOUND_DECORATOR_REDHEAD_DUCK_HPP_
#define _HFDP_CPP_COMPOUND_DECORATOR_REDHEAD_DUCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Decorator {

class RedheadDuck : public Quackable {

	public: void quack() const {
		std::cout << "Quack" << std::endl;
	}
	public: std::string toString() const {
		return "Redhead Duck";
	}
};

} // namespace Decorator
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif