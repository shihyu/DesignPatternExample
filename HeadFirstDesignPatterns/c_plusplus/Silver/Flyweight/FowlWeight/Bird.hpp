#ifndef	_HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_BIRD_HPP_
#define _HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_BIRD_HPP_

#include "FowlWeight.hpp"

namespace HeadFirstDesignPatterns {
namespace FlyWeight {
namespace FowlWeight {

// Unshared ConcreteFlyweight

class Bird : public Fowl {

	private: const Fowl* _fowl;
	private: int _number;
	private: double _weight;

	private: Bird( const Bird& ); // Disable copy constructor
    private: void operator=( const Bird& ); // Disable assignment operator

	public: Bird( const Fowl* fowl, int number = 0, double weight = 0.0 ) :
		_fowl( fowl ), _number( number ), _weight( weight ) { assert( fowl );
	}
	public: void quack() const { assert( _fowl );
		_fowl->quack();
	}
	public: void swim() const { assert( _fowl );
		_fowl->swim();
	}
	public: double getWeight() const {
		return _weight;
	}
	public: double getNumber() const {
		return _number;
	}
	public: std::string toString() const { assert( _fowl );
		std::stringstream value; 
		value << "Bird #"<< _number + 1 << ", ";
		value << "weighs " << _weight << " pounds, ";
		value << "is a " << _fowl->toString();
		return value.str();
	}
};

} // namespace FowlWeight
} // namespace FlyWeight
} // namespace HeadFirstDesignPatterns

#endif