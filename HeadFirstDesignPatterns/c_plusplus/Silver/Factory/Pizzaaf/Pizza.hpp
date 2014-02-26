#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PIZZA_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class Pizza {

	private: std::string _name;

	protected: mutable std::auto_ptr< Dough > _dough;
	protected: mutable std::auto_ptr< Sauce > _sauce;
	protected: mutable std::vector< Veggies* > _veggies;
	protected: mutable std::auto_ptr< Cheese > _cheese;
	protected: mutable std::auto_ptr< Pepperoni > _pepperoni;
	protected: mutable std::auto_ptr< Clams > _clam;

	public: virtual void prepare() const = 0;

	private: Pizza( const Pizza& ); // Disable copy constructor
    private: void operator=( const Pizza& ); // Disable assignment operator

	protected: Pizza() {
	}
	public: virtual ~Pizza() {
		for( std::vector< Veggies* >::iterator iterator = _veggies.begin(); _veggies.end() != iterator; ++iterator ) {
			delete *iterator;
		}
		_veggies.clear();
	}
	public: virtual void bake() const {
		std::cout << "Bake for 25 minutes at 350" << std::endl;
	}
	public: virtual void cut() const {
		std::cout << "Cutting the pizza into diagonal slices" << std::endl;
	}
	public: virtual void box() const {
		std::cout << "Place pizza in official PizzaStore box" << std::endl;
	}
	public: void setName( std::string name) {
		_name = name;
	}
	public: std::string getName() const {
		return _name;
	}
	public: std::string toString() const {
		std::stringstream value; 
		value << "---- " << _name.c_str() << " ----" << std::endl;

		if( _dough.get() != 0 ) {
			value << _dough->toString();
			value << std::endl;
		}
		if( _sauce.get() != 0 ) {
			value << _sauce->toString();
			value << std::endl;
		}
		if( _cheese.get() != 0 ) {
			value << _cheese->toString();
			value << std::endl;
		}
		if( _clam.get() != 0 ) {
			value << _clam->toString();
			value << std::endl;
		}
		if( _pepperoni.get() != 0 ) {
			value << _pepperoni->toString();
			value << std::endl;
		}
		if( _veggies.size() != 0 ) {
			for( std::vector< Veggies* >::iterator iterator = _veggies.begin(); _veggies.end() != iterator; ++iterator ) {
				value << ( *iterator )->toString() << ", ";
			}
			value << std::endl;
		}

		return value.str();
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif