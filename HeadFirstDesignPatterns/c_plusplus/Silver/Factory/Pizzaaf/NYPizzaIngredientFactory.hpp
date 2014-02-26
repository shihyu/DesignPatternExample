#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_NYPIZZA_INGREDIENT_FACTORY_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_NYPIZZA_INGREDIENT_FACTORY_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class NYPizzaIngredientFactory : public PizzaIngredientFactory {

 	public: Dough* createDough() const {
		return new ThinCrustDough();
	}
	public: Sauce* createSauce() const {
		return new MarinaraSauce();
	}
 	public: Cheese* createCheese() const {
		return new ReggianoCheese();
	}
 	public: std::vector< Veggies* > createVeggies() const {
		std::vector< Veggies* > veggies;
		veggies.push_back( new Garlic() );
		veggies.push_back( new Onion() );
		veggies.push_back( new Mushroom() );
		veggies.push_back( new RedPepper() );
		return veggies;
	}
 	public: Pepperoni* createPepperoni() const {
		return new SlicedPepperoni();
	}
	public: Clams* createClam() const {
		return new FreshClams();
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif