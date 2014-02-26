#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_REDPEPPER_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_REDPEPPER_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class RedPepper : public Veggies {

	public: std::string toString() const {
		return ( "Red Pepper" );
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif