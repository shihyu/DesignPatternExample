#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_BLACKOLIVES_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_BLACKOLIVES_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class BlackOlives : public Veggies {

	public: std::string toString() const {
		return ( "Black Olives" );
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif