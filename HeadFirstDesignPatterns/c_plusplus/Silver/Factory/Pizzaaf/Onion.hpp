#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_ONION_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_ONION_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class Onion : public Veggies {

	public: std::string toString() const {
		return ( "Onion" );
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif