#ifndef	_HFDP_CPP_SIMPLE_FACTORY_CHEESE_PIZZA_HPP_
#define _HFDP_CPP_SIMPLE_FACTORY_CHEESE_PIZZA_HPP_

#include "Pizzas.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Simple {

class CheesePizza : public Pizza {

	public: CheesePizza() {
		_name = "Cheese Pizza";
		_dough = "Regular Crust";
		_sauce = "Marinara Pizza Sauce";
		_toppings.push_back( "Shredded Mozzarella" );
		_toppings.push_back( "Parmesan" );
	}
};

} // namespace Simple
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif