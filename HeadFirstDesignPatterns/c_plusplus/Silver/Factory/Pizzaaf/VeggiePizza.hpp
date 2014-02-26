#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_VEGGIE_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_VEGGIE_PIZZA_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class VeggiePizza : public Pizza {

	private: mutable std::auto_ptr< PizzaIngredientFactory > _ingredientFactory;
 
	public: explicit VeggiePizza( PizzaIngredientFactory* ingredientFactory ) :
		_ingredientFactory( ingredientFactory ) { assert( ingredientFactory );
	}
	public: void prepare() const {
		std::cout << "Preparing " << getName().c_str() << std::endl;
		_dough = std::auto_ptr< Dough>( _ingredientFactory->createDough() );
		_sauce = std::auto_ptr< Sauce>( _ingredientFactory->createSauce() );
		_cheese = std::auto_ptr< Cheese>( _ingredientFactory->createCheese() );
		if( _veggies.empty() ) 
			_veggies = _ingredientFactory->createVeggies();
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif