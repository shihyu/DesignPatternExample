#ifndef	_HFDP_CPP_SIMPLE_FACTORY_PIZZA_HPP_
#define _HFDP_CPP_SIMPLE_FACTORY_PIZZA_HPP_

#include "Pizzas.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Simple {

class Pizza {

	protected: std::string _name;
	protected: std::string _dough;
	protected: std::string _sauce;
	protected: mutable std::list< std::string > _toppings;

	private: Pizza( const Pizza& ); // Disable copy constructor
	private: void operator=( const Pizza& ); // Disable assignment operator

	protected: Pizza() {
	}
	public: virtual ~Pizza() = 0 {
	}
	public: std::string getName() const {
		return _name;
	}
	public: virtual void prepare() const {
		std::cout << "Preparing " << _name.c_str() << std::endl;
	}
	public: virtual void bake() const {
		std::cout << "Baking " << _name.c_str() << std::endl;
	}
	public: virtual void cut() const {
		std::cout << "Cutting " << _name.c_str() << std::endl;
	}
	public: virtual void box() const {
		std::cout << "Boxing " << _name.c_str() << std::endl;
	}
	public: std::string toString() const {
		// code to display pizza name and ingredients
		std::stringstream value; 
		value << "---- " << _name.c_str() << " ----" << std::endl;
		value << _dough.c_str() << std::endl;
		value << _sauce.c_str() << std::endl;
		for( std::list< std::string >::iterator iterator = _toppings.begin(); _toppings.end() != iterator; ++iterator ) { 
			value << iterator->c_str() << std::endl;
		}
		return value.str();
	}
};

} // namespace Simple
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif