#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_MOZZARELLA_CHEESE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_MOZZARELLA_CHEESE_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class MozzarellaCheese : public Cheese {

	public: std::string toString() const {
		return "Shredded Mozzarella";
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif