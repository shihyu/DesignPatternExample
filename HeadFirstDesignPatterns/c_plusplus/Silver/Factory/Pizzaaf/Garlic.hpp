#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_GARLIC_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_GARLIC_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class Garlic : public Veggies {

	public: std::string toString() const {
		return ( "Garlic" );
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif