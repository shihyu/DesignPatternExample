#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_SLICED_PEPPERONI_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_SLICED_PEPPERONI_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class SlicedPepperoni : public Pepperoni {

	public: std::string toString() const {
		return "Sliced Pepperoni";
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif