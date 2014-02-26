#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_MUSHROOM_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_MUSHROOM_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class Mushroom : public Veggies {

	public: std::string toString() const {
		return ( "Mushrooms" );
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif