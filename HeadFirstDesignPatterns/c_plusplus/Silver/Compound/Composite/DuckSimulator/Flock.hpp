#ifndef	_HFDP_CPP_COMPOUND_COMPOSITE_FLOCK_HPP_
#define _HFDP_CPP_COMPOUND_COMPOSITE_FLOCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Composite {

class Flock : public Quackable {

	private: mutable std::vector<  Quackable* > _quackers;

	private: Flock( const Flock& ); // Disable copy constructor
	private: void operator=( const Flock& ); // Disable assignment operator

	public: Flock() {
	}
	public: void add ( Quackable* quacker ) { assert( quacker );
		_quackers.push_back( quacker );
	}
	public: void quack() const {
		for( std::vector<  Quackable* >::iterator iterator = _quackers.begin(); _quackers.end() != iterator; ++iterator ) {
			Quackable* quacker = *iterator;
			quacker->quack();
		}
	}
	public: std::string toString() const {
		return "Flock of Quackers";
	}
};

} // namespace Composite
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif

