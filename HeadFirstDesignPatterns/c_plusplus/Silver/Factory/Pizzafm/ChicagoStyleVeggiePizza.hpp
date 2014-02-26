#ifndef	_HFDP_CPP_FACTORY_CHICAGO_VEGGIE_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_CHICAGO_VEGGIE_PIZZA_HPP_

#include "Pizzafm.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Method {

class ChicagoStyleVeggiePizza : public Pizza {

	public: ChicagoStyleVeggiePizza() {
		_name = "Chicago Deep Dish Veggie Pizza";
		_dough = "Extra Thick Crust Dough";
		_sauce = "Plum Tomato Sauce";
 		_toppings.push_back( "Shredded Mozzarella Cheese" );
		_toppings.push_back( "Black Olives" );
		_toppings.push_back( "Spinach" );
		_toppings.push_back( "Eggplant" );
	}
 	public: void cut() const {
		std::cout << "Cutting the pizza into square slices" << std::endl;
	}
};

} // namespace Method
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif