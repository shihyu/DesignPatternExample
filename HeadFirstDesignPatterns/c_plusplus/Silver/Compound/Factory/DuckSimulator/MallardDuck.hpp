#ifndef	_HFDP_CPP_COMPOUND_FACTORY_MALLARD_DUCK_HPP_
#define _HFDP_CPP_COMPOUND_FACTORY_MALLARD_DUCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Factory {

class MallardDuck : public Quackable {

	public: void quack() const {
		std::cout << "Quack" << std::endl;
	}
	public: std::string toString() const {
		return "Mallard Duck";
	}
};

} // namespace Factory
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif