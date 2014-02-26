#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_CHICAGO_STORE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_CHICAGO_STORE_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class ChicagoPizzaStore : public PizzaStore {

 	public: std::auto_ptr< Pizza > createPizza( std::string item ) const{
		std::auto_ptr< Pizza > pizza( 0 );
		PizzaIngredientFactory* ingredientFactory = 
			new NYPizzaIngredientFactory();
 
		if( item.compare( "cheese" ) == 0 ) {
  			pizza = std::auto_ptr< Pizza >( new CheesePizza( ingredientFactory ) );
			pizza->setName( "Chicago Style Cheese Pizza" );
  		} else if( item.compare( "veggie" ) == 0 ) {
 			pizza = std::auto_ptr< Pizza >( new VeggiePizza( ingredientFactory ) );
			pizza->setName( "Chicago Style Veggie Pizza" );
 		} else if( item.compare( "clam" ) == 0 ) {
 			pizza = std::auto_ptr< Pizza >( new ClamPizza( ingredientFactory ) );
			pizza->setName( "Chicago Style Clam Pizza" );
 		} else if( item.compare( "pepperoni" ) == 0 ) {
			pizza = std::auto_ptr< Pizza >( new PepperoniPizza( ingredientFactory ) );
			pizza->setName( "Chicago Style Pepperoni Pizza" );
		} 
		return pizza;
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif