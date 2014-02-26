#ifndef	_HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_WILD_TURKEY_HPP_
#define _HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_WILD_TURKEY_HPP_

#include "FowlWeight.hpp"

namespace HeadFirstDesignPatterns {
namespace FlyWeight {
namespace FowlWeight {

// ConcreteFlyweight (once its wrapped in an adapter)

class WildTurkey : public Turkey {

	private: std::string _type;
	private: std::string _sound;
	private: std::string _walk;

	public: WildTurkey() : 
		_type( "Wild Turkey" ), _sound( "Gobble gobble" ), _walk( "struts" ) {
	}
	public: void gobble() const {
		std::cout << _sound.c_str();
	}
	public: void walk() const {
		std::cout << _walk.c_str();
	}
	public: std::string toString() const {
		return _type.c_str();
	}
 };

} // namespace FowlWeight
} // namespace FlyWeight
} // namespace HeadFirstDesignPatterns

#endif