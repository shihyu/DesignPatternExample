#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PIZZA_INGREDIENT_FACTORY_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PIZZA_INGREDIENT_FACTORY_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class PizzaIngredientFactory {
	public: virtual Dough* createDough() const = 0;
	public: virtual Sauce* createSauce() const = 0;
	public: virtual Cheese* createCheese() const = 0;
	public: virtual std::vector< Veggies* > createVeggies() const = 0;
	public: virtual Pepperoni* createPepperoni() const = 0;
	public: virtual Clams* createClam() const = 0;
	public: virtual ~PizzaIngredientFactory() = 0 {
	}};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif