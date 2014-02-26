#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_QUACKOLOGIST_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_QUACKOLOGIST_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class Quackologist : public Observer {

 	public: void update( QuackObservable* duck ) { assert( duck );
		std::cout << "Quackologist: " << dynamic_cast< Quackable* >( duck )->toString() << " just quacked." << std::endl;
	}
	public: std::string toString() const {
		return "Quackologist";
	}
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif
