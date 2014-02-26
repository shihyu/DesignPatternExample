#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_SPINACH_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_SPINACH_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class Spinach : public Veggies {

	public: std::string toString() const {
		return ( "Spinach" );
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif