#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_FROZEN_CLAMS_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_FROZEN_CLAMS_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class FrozenClams : public Clams {

	public: std::string toString() const {
		return "Frozen Clams from Chesapeake Bay";
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif