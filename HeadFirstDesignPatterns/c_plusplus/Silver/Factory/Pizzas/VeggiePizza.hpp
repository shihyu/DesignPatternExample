#ifndef	_HFDP_CPP_SIMPLE_FACTORY_VEGGIE_PIZZA_HPP_
#define _HFDP_CPP_SIMPLE_FACTORY_VEGGIE_PIZZA_HPP_

#include "Pizzas.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Simple {

class VeggiePizza : public Pizza {
	public: VeggiePizza() {
		_name = "Veggie Pizza";
		_dough = "Crust";
		_sauce = "Marinara Sauce";
		_toppings.push_back( "Fresh Mozzarella" );
		_toppings.push_back( "Grated Parmesan" );
		_toppings.push_back( "Diced onion" );
		_toppings.push_back( "Sliced mushrooms" );
		_toppings.push_back( "Sliced red pepper" );
		_toppings.push_back( "Sliced black olives" );
	}
};

} // namespace Simple
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif