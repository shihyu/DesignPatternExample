#ifndef	_HFDP_CPP_SIMPLE_FACTORY_PEPPERONI_PIZZA_HPP_
#define _HFDP_CPP_SIMPLE_FACTORY_PEPPERONI_PIZZA_HPP_

#include "Pizzas.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Simple {

class PepperoniPizza : public Pizza {

	public: PepperoniPizza() {
		_name = "Pepperoni Pizza";
		_dough = "Crust";
		_sauce = "Marinara sauce";
		_toppings.push_back( "Sliced Pepperoni" );
		_toppings.push_back( "Sliced Onion" );
		_toppings.push_back( "Grated parmesan cheese" );
	}
};

} // namespace Simple
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif