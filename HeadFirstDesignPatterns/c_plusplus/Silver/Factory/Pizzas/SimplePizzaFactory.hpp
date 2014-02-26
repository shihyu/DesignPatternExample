#ifndef	_HFDP_CPP_SIMPLE_PIZZA_FACTORY_HPP_
#define _HFDP_CPP_SIMPLE_PIZZA_FACTORY_HPP_

#include "Pizzas.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Simple {

class SimplePizzaFactory {

	public: Pizza* createPizza( std::string type ) const {
		Pizza* pizza = 0;
		if( type.compare( "cheese" ) == 0 ) {
			pizza = new CheesePizza();
		} else if( type.compare( "pepperoni" ) == 0 ) {
			pizza = new PepperoniPizza();
		} else if( type.compare( "clam" ) == 0 ) {
			pizza = new ClamPizza();
		} else if( type.compare( "veggie" ) == 0 ) {
			pizza = new VeggiePizza();
		}
		return pizza;
	}
};

} // namespace Simple
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif