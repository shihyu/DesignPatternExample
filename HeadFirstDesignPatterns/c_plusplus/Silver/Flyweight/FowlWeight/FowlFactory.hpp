#ifndef	_HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_FOWL_FACTORY_HPP_
#define _HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_FOWL_FACTORY_HPP_

#include "FowlWeight.hpp"

namespace HeadFirstDesignPatterns {
namespace FlyWeight {
namespace FowlWeight {

// Flyweight Factory

// As also mentioned by GoF [pp 205] we could omit the operation getBird() and
// let clients instantiate unshared objects directly; however, if we decided to
// make these objects sharable later, we'll have to change client code that
// creates them.

class FowlFactory {

	private: std::map< int, Fowl* > map;

	private: FowlFactory( const FowlFactory& ); // Disable copy constructor
	private: void operator=( const FowlFactory& ); // Disable assignment operator

	public: FowlFactory() {
	}
	public: ~FowlFactory() {
		std::map< int, Fowl* >::iterator iterator = map.begin();
		while( iterator != map.end() ) {
			delete ( *iterator ).second;
			( *iterator ).second = 0;
			iterator++;
		}
		map.clear();
	}
	public: const Fowl* getFowl( int type ) {
		Fowl* value = 0;
		std::map< int, Fowl* >::iterator iterator = map.find( type );

		if( iterator != map.end() ) {
			value = iterator->second;
		} else {
			switch( type ) {
				case Fowl::mallard: {
					value = new MallardDuck();
				} break;
				case Fowl::redhead: {
					value = new RedheadDuck();
				} break;
				case Fowl::rubber: {
					value = new RubberDuck();
				} break;
				case Fowl::model: {
					value = new ModelDuck();
				} break;
				case Fowl::turkey: {
					value = new TurkeyAdapter( new WildTurkey() );
				} break;
				default: {
					value = new ModelDuck();
				} break;
			}
			map[type] = value;
		}

		return value;
	}
	public: const Bird* getBird( int type, int number, double weight ) {
		return new Bird( getFowl( type ) , number, weight );
	}
};

} // namespace FowlWeight
} // namespace FlyWeight
} // namespace HeadFirstDesignPatterns

#endif