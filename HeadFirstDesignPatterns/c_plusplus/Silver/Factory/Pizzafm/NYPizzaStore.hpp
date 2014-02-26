#ifndef	_HFDP_CPP_FACTORY_NY_PIZZA_STORE_HPP_
#define _HFDP_CPP_FACTORY_NY_PIZZA_STORE_HPP_

#include "Pizzafm.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Method {

class NYPizzaStore : public PizzaStore {

	public: std::auto_ptr< Pizza > createPizza( std::string type ) const {
		if( type.compare( "cheese" ) == 0 ) {
			return std::auto_ptr< Pizza>( new NYStyleCheesePizza() );
		} else if( type.compare( "veggie" ) == 0 ) {
			return std::auto_ptr< Pizza>( new NYStyleVeggiePizza() );
		} else if( type.compare( "clam" ) == 0 ) {
			return std::auto_ptr< Pizza>( new NYStyleClamPizza() );
		} else if( type.compare( "pepperoni" ) == 0 ) {
			return std::auto_ptr< Pizza>( new NYStylePepperoniPizza() );
		} else return std::auto_ptr< Pizza>( 0 );
	}
};

} // namespace Method
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif