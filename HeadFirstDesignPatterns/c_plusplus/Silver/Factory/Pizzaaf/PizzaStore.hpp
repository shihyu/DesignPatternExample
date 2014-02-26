#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PIZZA_STORE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PIZZA_STORE_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class PizzaStore {

	protected: PizzaStore() {
	}
	public: virtual ~PizzaStore() = 0 {
	}
	public: std::auto_ptr< Pizza > orderPizza( std::string type ) const {
		std::auto_ptr< Pizza > pizza( createPizza( type ) );
		std::cout << "--- Making a " << pizza->getName() << " ---" << std::endl;
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
		return pizza;
	}
	public: virtual std::auto_ptr< Pizza > createPizza( std::string type ) const = 0;
};

} // namespace Method
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif