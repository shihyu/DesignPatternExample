#ifndef	_HFDP_CPP_FACTORY_CHICAGO_PEPPERONI_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_CHICAGO_PEPPERONI_PIZZA_HPP_

#include "Pizzafm.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Method {

class ChicagoStylePepperoniPizza : public Pizza {

	public: ChicagoStylePepperoniPizza() {
		_name = "Chicago Style Pepperoni Pizza";
		_dough = "Extra Thick Crust Dough";
		_sauce = "Plum Tomato Sauce";
 		_toppings.push_back( "Shredded Mozzarella Cheese" );
		_toppings.push_back( "Black Olives" );
		_toppings.push_back( "Spinach" );
		_toppings.push_back( "Eggplant" );
		_toppings.push_back( "Sliced Pepperoni" );
	}
	public: void cut() const {
		std::cout << "Cutting the pizza into square slices" << std::endl;
	}
};

} // namespace Method
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif