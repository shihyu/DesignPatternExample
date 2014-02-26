#ifndef	_HFDP_CPP_COMPOUND_ADAPTER_RUBBER_DUCK_HPP_
#define _HFDP_CPP_COMPOUND_ADAPTER_RUBBER_DUCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Adapter {

class RubberDuck : public Quackable {

	public: void quack() const {
		std::cout << "Squeak" << std::endl;
	}
};

} // namespace Adapter
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif